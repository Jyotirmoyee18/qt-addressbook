# AddressBook Application Documentation

## Architecture

The application follows a modular structure:

UI Layer → Qt Widgets
Data Layer → SQLite
Model Layer → QSqlTableModel

## Database Schema

contacts table:

id INTEGER PRIMARY KEY  
name TEXT  
mobile TEXT  
email TEXT  
birthday TEXT  

## Validation Rules

Mobile: 10 digit numeric  
Email: RFC basic format  

## Testing

Unit tests implemented using Qt Test Framework.

## Build

Uses qmake build system.
Compatible with Debian GNU/Linux.