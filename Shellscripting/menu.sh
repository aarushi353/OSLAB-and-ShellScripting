                                
food=burger

case $food in
"pizza" )
echo "price of $food is 5 dollars" ;;
"burger" )
echo "price of $food is 3 dollars" ;;
* )
echo "this food item is unavailable" ;;
esac
