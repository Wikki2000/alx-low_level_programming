#!/usr/bin/python3
"""
Model for the State class.
"""
from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base

# Create a declarative base class
Base = declarative_base()

class State(Base):
    """
    Represents a state in the database.

    Attributes:
        id (int): The unique identifier for the state.
        name (str): The name of the state.
    """
    __tablename__ = "states"
    id = Column(Integer, unique=True, autoincrement=True, nullable=False, primary_key=True)
    name = Column(String(128), nullable=False, unique=True)
