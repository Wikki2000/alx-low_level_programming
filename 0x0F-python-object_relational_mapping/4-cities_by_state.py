#!/usr/bin/python3
"""Illustrate Joining of two table"""
import MySQLdb
from sys import argv

if __name__ == '__main__':
    # setting connection parameters
    username = argv[1]
    password = argv[2]
    db_name = argv[3]
    host = 'localhost'
    port = 3306

    # Establish connection
    con = MySQLdb.connect(host, username, password, db_name, port)

    # Get cursor
    cursor = con.cursor()

    sql = "SELECT cities.id, cities.name, states.name FROM states \
            INNER JOIN cities ON states.id = cities.state_id \
            ORDER BY states.id"

    # Excecute query
    cursor.execute(sql)

    # Get records from table
    rows = cursor.fetchall()

    # Display results
    for row in rows:
        print(row)

    # Close connection
    cursor.close()
    con.close()
