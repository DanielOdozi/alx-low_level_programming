Low-level programming and Algorithm
Introduction
Low-level programming is often described as machine-oriented. It is also close to computer peripherals and requires knowledge of the processor's instructions and orientation within the relationships of internal systems or related devices.

Low-level programming aims to guide a specific language compiler to use machine code instructions that will perform the tasks in the fastest and safest possible way, using the minimum amount of memory. It often uses the individual advantages of the core or system periphery to achieve this.

C Programming Language
C Programming 

C is a procedural programming language with a static system that has the functionality of structured programming, recursion, and lexical variable scoping. C was created with constructs that transfer well to common hardware instructions. It has a long history of use in programs that were previously written in assembly language.

C programming language is a machine-independent programming language that is mainly used to create many types of applications and operating systems such as Windows, and other complicated programs such as the Oracle database, Git, Python interpreter, and games and is considered a programming foundation in the process of learning any other programming language. Operating systems and diverse application software for computer architectures ranging from supercomputers to PLCs and embedded systems are examples of such applications.

Structure of C program

Learn more

Requirements
C
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
More Info
Betty linter
To run the Betty linter just with command betty <filename>:

Go to the Betty repository
Clone the repo to your local machine
cd into the Betty directory
Install the linter with sudo ./install.sh
emacs or vi a new file called betty, and copy the script below:
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
Once saved, exit file and change permissions to apply to all users with chmod a+x betty
Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!

PROJECTS
0x00-hello_world
0x01-variables_if_else_while
0x02-functions_nested_loops
0x03-debugging
0x04-more_functions_nested_loops
0x05-pointers_arrays_strings
0x06-pointers_arrays_strings
0x07-pointers_arrays_strings
0x08-recursion
0x09-static_libraries
0x0A-argc_argv
0x0B-malloc_free
0x0C-more_malloc_free
0x0D-preprocessor
0x0E-structures_typedef
0x0F-function_pointers
0x10-variadic_functions
0x11-printf
0x12-singly_linked_lists
0x13-more_singly_linked_lists
0x14-bit_manipulation
0x15-file_io
0x16-simple_shell
0x17-doubly_linked_lists
0x18-dynamic_libraries
