#!/bin/bash
# usage:
# # bash FizzBuzz.sh

function FizzBuzz () {
    for i in {1..100}
    do
        let j=$i%3
        let k=$i%5
        if [ $j -eq 0 ] && [ $k -eq 0 ] 
        then echo "FizzBuzz"
        elif [ $j -eq 0 ]
        then echo "Fizz"
        elif [ $k -eq 0 ]
        then echo "Buzz"
        else echo $i
        fi
    done
}

FizzBuzz
