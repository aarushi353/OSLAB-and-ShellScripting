array=(a b c d)
echo ${array[0]}
echo ${array[*]}
for i in "${!array[@]}";do
	echo "Index of ${array[i]} = $i"
done