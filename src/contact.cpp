#include "contact.h"

Contact::Contact(){}

Contact::Contact(QString name, QString mobile, QString email, QDate birthday)
    : m_name(name), m_mobile(mobile), m_email(email), m_birthday(birthday){}

QString Contact::name() const { return m_name; }
QString Contact::mobile() const { return m_mobile; }
QString Contact::email() const { return m_email; }
QDate Contact::birthday() const { return m_birthday; }