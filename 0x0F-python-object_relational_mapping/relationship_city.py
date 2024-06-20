#!/usr/bin/python3
"""
Models the city table in database
"""
from sqlalchemy import String, Integer, Column, ForeignKey
from model_state import Base


class City(Base):
    """
    Class that models the city table

    Attributes:
        id (int): Unique identifier for cities
        name (string): The name of the cities
        state_id (int): Foreign key linking to state table
    """
    __tablename__ = 'cities'
    id = Column(Integer, unique=True, autoincrement=True,
                nullable=False, primary_key=True)
    name = Column(String(128), nullable=False)
    state_id = Column(Integer, ForeignKey("states.id"), nullable=False)
