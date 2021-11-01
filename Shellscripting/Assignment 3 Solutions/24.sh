year=$1

if [[ `expr $year % 4` == 0 ]];then
	echo "It's a leap year"
else
	echo "Not a leap year"
fi