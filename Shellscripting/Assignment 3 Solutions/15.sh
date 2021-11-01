numbers=(1 1 1 1 1 1 1 1 1 1)


sum=0

for i in "${!numbers[@]}";do
        num=${numbers[i]}
	sum=`expr $sum + $num`
done

echo `expr $sum / 10`
