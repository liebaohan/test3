CFLAGS=-Wall -O -g -I/home/hanch/test/git1/hello_pro/src/sub -I/home/hanch/test/git1/hello_pro/src/add

export CFLAGS

./bin/main:./obj/*.o
	gcc  -o $@ $^	

./obj/*.o:compile
	

compile:
	echo "compile.........."
	make -C ./src/main
	make -C ./src/add
	make -C ./src/sub



PHONY:clean compile

clean:
	rm -rf ./obj/*.o ./bin/main
