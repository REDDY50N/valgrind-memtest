# Memory Leaks

This is a simple example to detect memory leaks on C programs.

Run it like this from a Linux command line:
- Compile and run: `build.sh` or manually `gcc main.c -o <binary-name>`
- Run with valgrind: `memtest.sh` or manually `valgrind ./<binary-name>`

Hint:
Valgrind is much more powerful. Check `valgrind -h` or `man valgrind` for further options.
