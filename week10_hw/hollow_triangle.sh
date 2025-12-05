#!/bin/sh

if [ $# -eq 0 ] || [ $# -gt 1 ]
then
    echo "Usage: hollow_triangle.sh ${1}"
    exit 1
elif [ ${1} -le 0 ]
then
    echo "Error: height must be a positive integer"
    exit 1
else

    count_out=1
    while [ $count_out -le "${1}" ]
    do
        if [ $count_out -eq 1 ]
        then  
            echo "*"
        
        elif [ $count_out -eq "${1}" ]
        then
            last_line=1
            while [ $last_line -le "${1}" ]
            do
                echo -n "*"
                last_line=$((last_line+1))
            done
            echo ""
        else
            
            echo -n "*"
            count_in=3
            while [ $count_in -le $count_out ]
            do
                echo -n " "
                count_in=$((count_in+1))
            done

            echo "*"
        fi
        count_out=$(( count_out+1 ))
    done
    exit 0
fi