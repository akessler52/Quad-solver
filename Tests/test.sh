#! /bin/bash

# "test.txt" and "./test_qs" need to be replaced with the test bank file and the
# quad-solver executable respectively

counter=0
cat tests.txt | while read LINE
do
    args=($LINE)
    result=$(./test_qs ${args[0]} ${args[1]} ${args[2]})
    result=($result)

    #remove all non-alpha chars
    r1=${result[2]//[!A-Za-z]/}
    r2=${result[5]//[!A-Za-z]/}

    #test for equality between non-numeric values e.g. nan
    if [[ $r1 != ${args[3]} && $r2 != ${args[4]} ]] && [[ $r1 != ${args[4]} && $r2 != ${args[3]} ]]; then

        #remove all non-numeric chars
        r1=${result[2]//[!0-9.-]/}
        r2=${result[5]//[!0-9.-]/}

        #remove trailing zeros and unnecessary decimals
        r1=$(echo $r1 | awk -F"," -v OFS="," ' { for(i=0;NF-i++;){ if($i ~ /[.]/){ sub("[.]*0+ *$","",$i) }}$1=$1}1')
        r2=$(echo $r2 | awk -F"," -v OFS="," ' { for(i=0;NF-i++;){ if($i ~ /[.]/){ sub("[.]*0+ *$","",$i) }}$1=$1}1')

        #test for equality between float values
        if [[ ( $(bc <<< "${args[3]} != $r1") == 1 || $(bc <<< "${args[4]} != $r2") == 1 ) && ( $(bc <<< "${args[4]} != $r1") == 1 || $(bc <<< "${args[3]} != $r2") == 1 ) ]]; then
            echo Test $counter Failed:
            echo $'\t'args ${args[0]}, ${args[1]}, ${args[2]} produced $r1 and $r2 instead of expected ${args[3]} and ${args[4]}
        fi
    fi
    let "counter++"
done
