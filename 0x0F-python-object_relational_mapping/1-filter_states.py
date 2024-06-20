#!/usr/bin/python3
"""
Script to list all states with a name starting with 'N' from the database hbtn_0e_0_usa
"""

import MySQLdb
import sys

if __name__ == '__main__':
    # Check if correct number of arguments are provided
    if len(sys.argv) != 4:
        print("Usage: {} <username> <password> <database>".format(sys.argv[0]))
        sys.exit(1)

    # Connection parameters
    username = sys.argv[1]
    password = sys.argv[2]
    db_name = sys.argv[3]
    host = 'localhost'
    port = 3306  # Default MySQL port

    try:
        # Establish connection
        conn = MySQLdb.connect(
                host=host,
                user=username,
                passwd=password,
                db=db_name,
                port=port
                )

        # Get cursor to access the database
        cursor = conn.cursor()

        # Query to select states with names starting with 'N'
        sql = "SELECT * FROM states WHERE name LIKE 'N%' ORDER BY id ASC"

        # Execute query
        cursor.execute(sql)

        # Fetch and display the results
        rows = cursor.fetchall()
        for row in rows:
            print(row)

    except MySQLdb.Error as e:
        print("MySQL Error {}: {}".format(e.args[0], e.args[1]))
        sys.exit(1)

    finally:
        # Close connections
        if 'cursor' in locals():
            cursor.close()
        if 'conn' in locals() and conn.open:
            conn.close()
