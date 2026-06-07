Day1:

1. g++ --save-temps <filename.c/cpp>

    It will generate the all the intermediate files while doing compilation.

    .i -> prepossesing 
    .s -> assembly file depends on the arch
    .o -> object file.
    .exe/.out -> final executable…


2. ldd a.out

    this shows the what are all the linked files/libraries path.

    ![alt text](image.png)



3. gcc hello.c -lstdc++

    when I'm using C compiler[gcc] I tried to compile c++ code since the std::cout c++ lib reference is not automatically linked by gcc compiler, we explicitely gave -lstdc++.
    i dont want to do all these, i can use g++ compiler.

    ![alt text](image-1.png)

4. To know g++ symbolic name and which version of c++ i'm using and on which cpu architecture the exec runs.

        @0Kushal0 ➜ /workspaces/Cpp/Day1 (main) $ ls -la /usr/bin/g++
        lrwxrwxrwx 1 root root 6 Jan 31  2024 /usr/bin/g++ -> g++-13

        @0Kushal0 ➜ /workspaces/Cpp/Day1 (main) $ cd /usr/bin
        @0Kushal0 ➜ /usr/bin $ ls -la g++
        lrwxrwxrwx 1 root root 6 Jan 31  2024 g++ -> g++-13
        
        @0Kushal0 ➜ /usr/bin $ ls -la g++-13
        lrwxrwxrwx 1 root root 23 Dec 18 20:59 g++-13 -> x86_64-linux-gnu-g++-13 

5. nm -C a.out

    To know the symbol table and to understand in which memory segments our code sits.