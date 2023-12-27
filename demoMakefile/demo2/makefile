# $@:表示目标文件的完整名称
# $^：表示所有不重复的依赖文件，以空格分隔

src=main.o add.o sub.o mul.o div.o 
main:${src}
	gcc ${src} -o main

add.o:add.c
	gcc -c add.c -o add.o
sub.o:sub.c
	gcc -c sub.c -o sub.o
mul.o:mul.c
	gcc -c mul.c -o mul.o
div.o:div.c
	gcc -c div.c -o div.o
main.o:main.c
	gcc -c main.c -o main.o

clean:
	@rm -rf *.o main