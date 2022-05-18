# The Simple Shell 🐚 Project

This is a project is in collaboration between **Bright Mujor** and **Nike Oni**. The shell is a simple UNIX command line interpreter that replicates functionalities of the simple shell (sh). It provides an interface between the user and the kernel and executes programs. Additionals functions are also provided.

# Description

The "Simple_shell" is a program that can be compiled and launched from the command line, where its main function is to execute commands read from the standard input. It contains some of the basic features and functions found in the various shell programs like Kernel commands and builtin commands.

# Features

1. DIsplay a prompt and wait for the user to type a command. A command-line always ends with a new line.
2. The prompt is displayed again each time a command has been executed.
3. The command lines are simple, no semicolons, no pipes, no redirections, or any other advanced features.
4. The command lines are made only of one word.No arguement will be passed to the programs.
5. If an executable is not found the shell prints an error message and displayu the prompt again.

# Compilation
Shell will be compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

*Once the compilation is sucessful, you can execute the program with `./hsh`, To exit the program,Run $ `Exit`.

This simple shell supports all shell commands in the PATH environment, including, but not limited to: `cat', `ls`, 'w'.

This will compile all the '.c' files and change the output's name to 'hsh'.

# Testing  🔨
*Shell will work in interactive mode in the format below:

$ `./hsh`
($) /bin/ls
hsh main.c shell.c
($)
($) `exit`
$

* `./hsh` and then type the commands that you want to execute
* You can type a command and the prompt appear show again

** Also in non-interactive mode:

$  `echo "/bin/ls" | ./hsh`
hsh main.c shell.c test_ls_2
$
$ `cat test_ls_2`
/bin/ls
/bin/ls
$
$ `cat test_ls_2 | ./hsh`
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

* Echo "command" | ./hsh, command is the command that you want to execute
* Each time that you execute a command, the shell close


# Builtin Commands

This shell supports the next builtin commands:

cd - change directory

env - list the current environment variables

exit - exit the shell

help - show help for a builtin command

pwd - Print the absolute pathname of the current working directory

unsetenv - Remove an environment variable

# Delimit and comment commands
1. The semicolon - ;. command separator that allows to run a command on a single line placing the semicolon between
   each command.
2. The command number - hash. Allows a word beginning with # and all remaining characters on that line to be ignored.


# AUTHORS
The `AUTHORS` file contains the details of all the individuals that contributed to this shell project
