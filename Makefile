.PHONY: run

all: emo run

emo: emo.c
	cc -o emo emo.c

run:
	./emo
