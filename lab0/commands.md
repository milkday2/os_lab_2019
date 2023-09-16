```console
sinh@sinh-MS-7817:~$ cd Documents/miet
sinh@sinh-MS-7817:~/Documents/miet$ git clone git@github.com:milkday2/os_lab_2019.git
Cloning into 'os_lab_2019'...
Enter passphrase for key '/home/sinh/.ssh/id_ed25519': 
remote: Enumerating objects: 102, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 102 (delta 0), reused 1 (delta 0), pack-reused 101
Receiving objects: 100% (102/102), 1.33 MiB | 896.00 KiB/s, done.
Resolving deltas: 100% (8/8), done.
sinh@sinh-MS-7817:~/Documents/miet$ cd os_lab_2019/
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ mkdir lab0/hello
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ touch lab0/hello/empty
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ cp lab0/src/hello.c lab0/hello/newhello.c
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ ./update.sh 
...
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ ping ya.ru -c 5
PING ya.ru (5.255.255.242) 56(84) bytes of data.
64 bytes from ya.ru (5.255.255.242): icmp_seq=1 ttl=247 time=6.45 ms
64 bytes from ya.ru (5.255.255.242): icmp_seq=2 ttl=247 time=5.90 ms
64 bytes from ya.ru (5.255.255.242): icmp_seq=3 ttl=247 time=5.65 ms
64 bytes from ya.ru (5.255.255.242): icmp_seq=4 ttl=247 time=5.54 ms
64 bytes from ya.ru (5.255.255.242): icmp_seq=5 ttl=247 time=7.77 ms

--- ya.ru ping statistics ---
5 packets transmitted, 5 received, 0% packet loss, time 4006ms
rtt min/avg/max/mdev = 5.540/6.261/7.767/0.814 ms
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ gcc -v
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/11/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 11.4.0-1ubuntu1~22.04' --with-bugurl=file:///usr/share/doc/gcc-11/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++,m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-11 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --enable-cet --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-11-XeT9lY/gcc-11-11.4.0/debian/tmp-nvptx/usr,amdgcn-amdhsa=/build/gcc-11-XeT9lY/gcc-11-11.4.0/debian/tmp-gcn/usr --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu --with-build-config=bootstrap-lto-lean --enable-link-serialization=2
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 11.4.0 (Ubuntu 11.4.0-1ubuntu1~22.04) 
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ cd lab0/hello/
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab0/hello$ gcc newhello.c -o hello_world
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019/lab0/hello$ ./hello_world 
Hello World!
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ git add lab0/hello/empty 
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ git add lab0/hello/newhello.c 
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ git status
On branch master
Your branch is up to date with 'origin/master'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   lab0/hello/empty
	new file:   lab0/hello/newhello.c

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	lab0/hello/hello_world

sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ git commit -m "добавлен hello.c и empty"
[master 0e9f80b] добавлен hello.c и empty
 2 files changed, 6 insertions(+)
 create mode 100644 lab0/hello/empty
 create mode 100755 lab0/hello/newhello.c
sinh@sinh-MS-7817:~/Documents/miet/os_lab_2019$ git push
Enter passphrase for key '/home/sinh/.ssh/id_ed25519': 
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 4 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (6/6), 537 bytes | 537.00 KiB/s, done.
Total 6 (delta 1), reused 4 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To github.com:milkday2/os_lab_2019.git
   3fd087d..0e9f80b  master -> master
```
