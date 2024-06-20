#!/usr/bin/python3
"""
Script that prints the State object with the name
passed as argument from the database hbtn_0e_6_usa
"""
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from model_state import Base, State
from sys import argv, exit

if __name__ == '__main__':

    if  len(argv) != 5:
        print(f"Usage: {argv[0]} <mysql username> <mysql password> <database name> <state name to search>")
        exit(1)

    # connect to the database
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'
            .format(argv[1], argv[2], argv[3]), pool_pre_ping=True)
    Base.metadata.create_all(engine)
    session = sessionmaker(bind=engine)
    session = session()

    # Loads state with given condition
    state = session.query(State).filter(State.name == argv[4]).first()
    if state:
        print(state.id)
    else:
        print("Not found")
    session.close()
