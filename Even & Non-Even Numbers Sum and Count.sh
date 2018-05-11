#!/bin/bash
lyg=0
nelyg=0
kiekis=0
for i in $@
do
if [[ $(($i%2)) == 0 ]]
then
lyg=$(($lyg+$i))
elif [[ $(($i%2)) == 1 ]]
then
nelyg=$(($nelyg+$i))
fi
kiekis=$(($kiekis+1))
done
echo "Lyginiu skaiciu suma: "$lyg
echo "Nelyginiu skaiciu suma: "$nelyg
echo "Ivestu skaiciu kiekis: "$kiekis
