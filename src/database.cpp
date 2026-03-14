#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

bool Database::init()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("contacts.db");

    if(!db.open()){
        qDebug() << "Database failed";
        return false;
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS contacts ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "name TEXT,"
               "mobile TEXT,"
               "email TEXT,"
               "birthday TEXT)");

    return true;
}