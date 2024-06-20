#!/usr/bin/python3

"""
    Module to list all cities object from the database using explicit join
"""

import sys
from sqlalchemy.orm import sessionmaker
from sqlalchemy import create_engine
from model_state import Base, State
from model_city import City

if __name__ == '__main__':
    # Connect to the database
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'
                           .format(sys.argv[1], sys.argv[2], sys.argv[3]),
                           pool_pre_ping=True)

    # Create a session with the connected database
    Session = sessionmaker(bind=engine)
    session = Session()

    # Using the session, communicate with the database
    cities_states = session.query(City, State) \
        .join(City, City.state_id == State.id) \
        .order_by(City.id) \
        .all()

    # Display results
    for city, state in cities_states:
        print("{}: ({}) {}".format(state.name, city.id, city.name))
