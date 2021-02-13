#!/bin/bash
>numbers.txt
for i in {1..150}
do
echo $RANDOM>>numbers.txt
done