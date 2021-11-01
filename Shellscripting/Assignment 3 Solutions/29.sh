file=$1
i=1
for word in `cat $file`; do 
	echo "$i: $word"
	i=`expr $i + 1`
done