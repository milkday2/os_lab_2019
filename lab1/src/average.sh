#!/bin/sh

echo "Number of arguments: $#"
Sum=0

for i in "$@"
do
    Sum=$(expr $Sum + $i)
done

echo "Average: $(echo $Sum / $# | bc -l)"
