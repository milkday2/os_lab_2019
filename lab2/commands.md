## Задание 1
```console
[piwotesco@PiwoTesco lab2]$ gcc src/swap/main.c src/swap/swap.c -o bin/swap
[piwotesco@PiwoTesco lab2]$ ./bin/swap 
b a
```
## Задание 2
```console
[piwotesco@PiwoTesco lab2]$ gcc src/revert_string/main.c src/revert_string/revert_string.c -o bin/revert_string
[piwotesco@PiwoTesco lab2]$ ./bin/revert_string abcd
Reverted: dcba
```
## Задание 3
```console
[piwotesco@PiwoTesco lab2]$ gcc -c src/revert_string/revert_string.c -o bin/static/revert_string.o 
[piwotesco@PiwoTesco lab2]$ gcc -c -fPIC src/revert_string/revert_string.c -o bin/shared/revert_string.o 
[piwotesco@PiwoTesco lab2]$ ar rcs bin/static/librevert_string.a bin/static/revert_string.o 
[piwotesco@PiwoTesco lab2]$ gcc -shared bin/shared/revert_string.o -o bin/shared/librevert_string.so 
[piwotesco@PiwoTesco lab2]$ gcc src/revert_string/main.c -Lbin/static -lrevert_string -o bin/statically_linked 
[piwotesco@PiwoTesco lab2]$ ./bin/statically_linked Konovalov
Reverted: volavonoK
[piwotesco@PiwoTesco lab2]$ gcc src/revert_string/main.c -Lbin/shared -lrevert_string -o bin/dynamially_linked 
[piwotesco@PiwoTesco lab2]$ LD_LIBRARY_PATH=./bin/shared/ ./bin/dynamially_linked Artyom
Reverted: moytrA
```
## Задание 4
```console
[piwotesco@PiwoTesco lab2]$ gcc src/tests/tests.c -Isrc/revert_string -Lbin/shared -lrevert_string -lcunit -o bin/tests 
[piwotesco@PiwoTesco lab2]$ LD_LIBRARY_PATH=./bin/shared/ ./bin/tests 


     CUnit - A unit testing framework for C - Version 2.1-3
     http://cunit.sourceforge.net/


Suite: Suite
  Test: test of RevertString function ...passed

Run Summary:    Type  Total    Ran Passed Failed Inactive
              suites      1      1    n/a      0        0
               tests      1      1      1      0        0
             asserts      4      4      4      0      n/a

Elapsed time =    0.000 seconds
```