#!/bin/bash
sand=1
if [[ -z $1 ]]
then
echo "Neivesta parametro reiksme."
exit
fi
for ((i=1;i<=$1;i+=1))
do
if [[ $(($i%2)) == 0 ]]
then
sand=$(($sand*$i))
fi
done
echo "Lyginiu skaiciu sandauga nuo 1 iki ivesto dydzio yra: "$sand
