# Qt AddressBook Manager

A desktop AddressBook management application built with Qt/C++.

## Features

• Add, Edit, Delete contacts  
• SQLite database storage  
• Input validation (email & phone)  
• Clean modular architecture  
• Unit tests  
• GitHub CI build pipeline  

## Fields

- Name
- Mobile
- Email
- Birthday

## Build (Debian)

Install Qt:

sudo apt install qtbase5-dev qt5-qmake

Build project:

qmake
make

Run:

./addressbook

## Project Structure

src/ → application logic  
ui/ → Qt UI forms  
tests/ → unit tests  
docs/ → documentation  

## Author

Jyotirmoyee Mandal
B.Tech CSE