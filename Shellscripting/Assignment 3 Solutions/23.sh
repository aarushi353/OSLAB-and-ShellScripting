
read -p "Enter the principle: " p
read -p "Enter rate: " r
read -p "Enter time period: " t
s=`expr $p \* $t \* $r / 100`

echo "Simple Interest: $s"