num=$1

i=0

while [ $i -lt 11 ]; do
	echo "$num * $i = "`expr $num \* $i`
	i=`expr $i + 1`
done