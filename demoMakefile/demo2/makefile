# $@:表示目标文件的完整名称
# $^：表示所有不重复的依赖文件，以空格分隔

# 自定义变量
OBJ=main.o add.o sub.o mul.o div.o
TARGET=main

# 使用${TARGET} 必须要加 '$'符
${TARGET}:${OBJ}
	gcc $^ -o $@

add.o:add.c
	gcc -c $^ -o $@
sub.o:sub.c
	gcc -c $^ -o $@
mul.o:mul.c
	gcc -c $^ -o $@
div.o:div.c
	gcc -c $^ -o $@
main.o:main.c
	gcc -c $^ -o $@

clean:
	@rm -rf *.o ${TARGET}