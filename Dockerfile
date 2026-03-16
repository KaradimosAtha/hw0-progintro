FROM ubuntu:20.04

RUN apt-get update && apt-get install -y build-essential
WORKDIR /collatz_workdir
COPY . /collatz_workdir

RUN gcc -o collatz collatz/src/collatz.c
