#!/bin/bash
sum=0
for n in $@
do
sum=$(($sum+$n))
done
avg=$(($sum/$#))
o=$(($sum%$#))
if (("$o" == "0"))
then
echo "$avg"
else
echo "$avg+$o/$#"
fi