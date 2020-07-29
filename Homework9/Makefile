homework9: homework9.class homework9.h libhomework9.so
	java -Djava.library.path=. homework9

homework9.class: homework9.java
	javac homework9.java

homework9.h: homework9.java
	javah -jni homework9

homework9.o: homework9.c homework9.h
	gcc -fPIC -I/usr/java/jdk1.8.0_131/include/ -I/usr/java/jdk1.8.0_131/include/linux -c homework9.c

libhomework9.so: homework9.o
	gcc -I/usr/java/jdk1.8.0_131/include/ -I/usr/java/jdk1.8.0_131/include/linux -shared -o libhomework9.so homework9.o

clean: 
	rm homework9.class homework9.h homework9.o libhomework9.so