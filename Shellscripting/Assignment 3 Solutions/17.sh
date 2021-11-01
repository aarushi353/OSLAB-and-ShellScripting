read -p "Enter Balance: " BAL
if(($BAL < 0)); then
        echo "You have negative balance"
elif(($BAL  == 0)); then
	echo "Your account is empty"
else
	echo "You are rich"
fi