#!/workspaces/CSE13S_HW3/week_10_discussion_2.sh


read -p "Enter the number: " num


checkNum() {
    read value
    if [ $value -eq 0 ]
    then
        echo "zero"
    elif [ $value -lt 0 ]
    then
        echo "negative"
    else
        echo "positive"
    fi

    if [ $(( value % 2 )) -eq 0 ]
    then
        echo "even"
    else
        echo "odd"
    fi
}

n=1

while [ $n -le $num ]
do
    checkNum
    (( n+=1 ))
done
