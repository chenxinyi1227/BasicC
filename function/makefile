# src=demoFunc.c calculateFunc.c
# test:${src}
# 	gcc ${src} -o test

# clean:
# 	@rm -rf test

src=demoFunc.o calculateFunc.o myString.o
count:${src}
	gcc ${src} -o count

demoFunc.o:demoFunc.c
	gcc -c demoFunc.c -o demoFunc.o

calculateFunc.o:calculateFunc.c
	gcc -c calculateFunc.c -o calculateFunc.o

myString.o:myString.c
	gcc -c myString.c -o myString.o

clean:
	@rm -rf *.o count


