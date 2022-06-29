Goal of the project:

Learn the basics of Cheat Engine, how to get the base address and offset of games Life, Ammo, XP etc.

Learn the basics of how to write a program that reads and writes memory in a game.

------------------------------------------------------------------------------------------------

From Cheat Engine:

Base address: "returnVars.exe"+000150B8

Offset: 34C

------------------------------------------------------------------------------------------------

returnVars.c

Basic app that will serve as a demo.

It Prints 3 variables and their location in memory:

Number - int that doesn't change: 1337;

Count - int that starts at 0 and adds 1 each time you reply "no";

Name - character array that doesn't change: Pedro

------------------------------------------------------------------------------------------------

cheat.c

Changes the variables of returnVars.
