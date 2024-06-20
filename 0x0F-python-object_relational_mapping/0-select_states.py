#!/usr/bin/python3
"""This module lists all records from database"""
from MySQLdb import connect
from sys import argv

if __name__ == '__main__':
    # connection parameters
    username = argv[1]
    password = argv[2]
    db_name = argv[3]
    host = 'localhost'
    port = 3306 # Default MySQL port

    # Establish connection
    con = connect(host, username, password, db_name, port)

    # get the cursor to access the database
    cursor = con.cursor()

    # query to read from database
    sql = 'SELECT * FROM states ORDER BY id'

    # Execute query
    cursor.execute(sql)

    # access the fetched data
    rows = cursor.fetchall()

    # Display records per line
    for row in rows:
        print(row)

    # close connections
    cursor.close()
    con.close()
