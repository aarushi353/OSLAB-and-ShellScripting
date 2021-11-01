a=$1
b=$2

echo "MENU"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Modulus"
read -p "Enter your choice: " c
case $c in
	1)
		echo `expr $a + $b`
		;;
	2)
		echo `expr $a - $b`
		;;
	3)
		echo `expr $a \* $b`
		;;
	4)
		echo `expr $b / $a`
		;;
	5)
		echo`expr $b % $a`
		;;
	*)
		echo "Invalid"
		;;
esac