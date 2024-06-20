#!/usr/bin/python3
"""
Script to list all State objects from the database hbtn_0e_6_usa
"""

import sys
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from model_state import Base, State

def list_states(username, password, database):
    """
    Function to list all State objects from the database hbtn_0e_6_usa

    Args:
        username (str): MySQL username
        password (str): MySQL password
        database (str): MySQL database name

    Returns:
        None
    """
    # Construct the database URL
    db_url = 'mysql+mysqldb://{}:{}@localhost:3306/{}'.format(username, password, database)

    # Create engine and establish connection
    engine = create_engine(db_url)
    Session = sessionmaker(bind=engine) # bind and create class of session
    session = Session()

    try:
        # Retrieve and print all State objects sorted by id
        state = session.query(State).order_by(State.id).first()
        print("{}: {}".format(state.id, state.name))
    except Exception as e:
        print("Error:", e)
    finally:
        # Close the session
        session.close()

if __name__ == "__main__":
    # Check if correct number of arguments is provided
    if len(sys.argv) != 4:
        print("Usage: {} username password database".format(sys.argv[0]))
        sys.exit(1)

    # Extract MySQL username, password, and database name
    username, password, database = sys.argv[1], sys.argv[2], sys.argv[3]

    # Call the function to list states
    list_states(username, password, database)
