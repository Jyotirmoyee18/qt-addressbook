#ifndef CONTACT_H
#define CONTACT_H

#include <QString>
#include <QDate>

class Contact
{
public:
    Contact();
    Contact(QString name, QString mobile, QString email, QDate birthday);

    QString name() const;
    QString mobile() const;
    QString email() const;
    QDate birthday() const;

private:
    QString m_name;
    QString m_mobile;
    QString m_email;
    QDate m_birthday;
};

#endif