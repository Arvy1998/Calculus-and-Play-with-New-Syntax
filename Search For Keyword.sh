#!/bin/bash

if [[ -z $1 ]]
then
        echo "Neivesta parametro reiksme."
exit
fi
echo "Iveskite varda:"
read name
sk=`grep -ic "$name" $1`

if [[ $sk -ge 1 ]]
then
        echo "Rastas vardas - " $name
else
        echo "Tokio vardo nera"
fi
