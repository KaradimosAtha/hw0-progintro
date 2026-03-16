FROM ubuntu:20.04

RUN apt-get update && apt-get install -y build-essential
WORKDIR /collatz_workdir
COPY . /collatz_workdir

RUN gcc -o collatz_prog collatz/src/collatz.c
