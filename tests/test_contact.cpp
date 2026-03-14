#include <QtTest>
#include "../src/contact.h"

class ContactTest : public QObject
{
    Q_OBJECT

private slots:
    void testName();
};

void ContactTest::testName()
{
    Contact c("John","9876543210","john@test.com",QDate(2000,1,1));
    QCOMPARE(c.name(),QString("John"));
}

QTEST_MAIN(ContactTest)
#include "test_contact.moc"