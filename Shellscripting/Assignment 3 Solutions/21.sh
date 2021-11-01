n1=$1
n2=$2
n3=$3

if [[ $n1 > $n2 && $n1 > $n3 ]]; then 
        echo "$n1 is Biggest number"
elif [[ $n2 > $n1 && $n2 > $n3 ]]; then
        echo "$n2 is Biggest number"
else
        echo "$n3 is Biggest number"
fi