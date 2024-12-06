ABC.exe:main.o big2.o fact.o rev.o pallindrome.o sum.o
	gcc -o ABC.exe main.o big2.o fact.o rev.o pallindrome.o sum.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
rev.o:rev.c
	gcc -c rev.c
pallindrome.o:pallindrome.c
	       gcc -c pallindrome.c
sum.o:sum.c
	gcc -c sum.c
clean:
	rm -rf *.o


