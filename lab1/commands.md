## Задание 1
```console
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ ./src/background.sh &
[1] 27679
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ 1 sec
2 sec
3 sec
4 sec
5 sec
6 sec
7 sec
8 sec
9 sec
10 sec
Done!

[1]+  Done                    ./src/background.sh

sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ cat > src/newfile.txt
abcde
12345
^C
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ cat src/newfile.txt 
abcde
12345
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ clear

sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ wc -m src/newfile.txt 
12 src/newfile.txt
```
## Задание 2
```console
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ grep "cake" src/cake_rhymes.txt | cat > src/with_cake.txt
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ rm 2> /dev/null
```
## Задание 3
```console
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ chmod +x src/hello.sh 
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ ./src/hello.sh 
Hello, world!

sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ cat > src/task3.sh 
#!/bin/sh
pwd
date '+%d/%m/%Y %H:%M:%S'
echo $PATH
^C
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ chmod +x src/task3.sh && ./src/task3.sh
/home/sinh/Documents/miet/os_lab_2019/lab1
18/09/2023 01:13:25
/home/sinh/miniconda3/bin:/home/sinh/.cargo/bin:/usr/lib/jvm/jdk-19/bin:/home/sinh/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/home/sinh/.dotnet/tools
```
## Задание 4
```bash
#!/bin/sh

echo "Number of arguments: $#"
Sum=0

for i in "$@"
do
    Sum=$(expr $Sum + $i)
done

echo "Average: $(echo $Sum / $# | bc -l)"
```
```console
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ od -An -i -N600 -w600 /dev/random > src/numbers.txt
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab1$ src/average.sh $(cat src/numbers.txt)
Number of arguments: 150
Average: 48217042.25333333333333333333
```
