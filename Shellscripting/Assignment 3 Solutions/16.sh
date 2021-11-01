
read -p "Enter quiz marks: " QUIZ
if(($QUIZ > 100)); then
	echo "Invalid"
	exit 1
fi
read -p "Enter assignment marks: " ASSI
if(($ASSI > 100)); then
	echo "Invalid"
	exit 1
fi

echo `expr $ASSI + $QUIZ` 