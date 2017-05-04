# Ardutils
A simple lightweight utility library intended for use with Arduino and Arduboy projects.

**_Work In Progress_**
(i.e. Please don't complain if a change breaks your code)

## About

This library provides highly generic utilities to that should be suitable for all kinds of programs.
Most of the classes and functions provided are templated so that they're only instantiated as required.
Many classes are also designed to favour size over speed as they are designed for embedded environments.

## Aims

- Code should feature primarily general purpose utilities rather than domain-specific utilities.
- Compiled code should be as small as possible so that the library is lightweight.
- Code should be templated to provide flexibility and genericity.
- All code should be const correct.
- Code should follow [these style rules](https://github.com/Pharap/CppCodingConventions/blob/master/Conventions.md).

## Planned Features

- [ ] Circle
- [ ] Dequeue
- [ ] Fixed Points

## To Do

- [ ] Fix Rectangle's Offset function for unsigned numbers.

***

# Sub-libs

- Collections
- Geometry
- Maths
- TypeTraits
- Bitwise

***

# Notices

## Ardutils/Details

Please do not touch the things in the Details folder.
These are implementation details that are both unfinished and are very likely to change so they will probably break your code.

## Ardutils/TypeTraits

It is also considered bad to try to include anything from the TypeTraits folder in your own code.
It probably won't break in most cases, but it has the potential to break in the future due to changing dependencies.
