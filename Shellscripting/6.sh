SUM=0
for num in $(cat num.txt)
    do
        ((SUM+=num))
done
echo $SUM