#!/usr/bin/python3
"""
    module for filter a city name given name of the state
"""
import MySQLdb
import sys

if __name__ == '__main__':
    args = sys.argv
    user = args[1]
    password = args[2]
    database = args[3]
    state_name = args[4]
    host = 'localhost'
    port = 3306

    conn = MySQLdb.connect(
        host=host,
        port=port,
        user=user,
        passwd=password,
        db=database
        )
    cursor = conn.cursor()

    sql = f"SELECT cities.name FROM cities \
            INNER JOIN states ON states.id = cities.state_id \
            WHERE states.name = '{state_name}'"
    cursor.execute(sql)
    rows = cursor.fetchall()

    names = []
    for row in rows:
        for item in row:
            names.append(item)
    print(", ".join(names))
    cursor.close()
    conn.close()
