#!/usr/bin/python3
"""
Script that lists all State objects that contain
the letter a from the database hbtn_0e_6_usa
"""
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from model_state import Base, State
from sys import argv, exit

if __name__ == '__main__':
    if len(argv) != 4:
        print("Usage: <mysql username> <mysql password> <database name>")
        exit(1)

    # set connection parameter
    username = argv[1]
    password = argv[2]
    db_name = argv[3]

    # Construct database url
    db_url = 'mysql+mysqldb://{}:{}@localhost:3306/{}' \
            .format(username, password, db_name)

    # Create engine and establish connection
    engine = create_engine(db_url)
    session = sessionmaker(bind=engine)
    session = session()

    # Retrieves data from table
    states_with_a = session.query(State).filter(State.name.like("%a%")).order_by(State.id.asc()).all()

    # Display list of states
    for state in states_with_a:
        print(f"{state.id}: {state.name}")

    session.close()
