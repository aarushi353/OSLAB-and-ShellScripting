## Implementing for loop with break statement

#Start of for loop
for a in 1 2 3 4 5 6 7 8 9 10
do
	# if a is equal to 5 break the loop
	if [ $a == 5 ]
	then
		break
	fi
	# Print the value
	echo "Iteration no $a"
done

#Output

Iteration no 1
Iteration no 2
Iteration no 3
Iteration no 4

## Implementing for loop with continue statement

for a in 1 2 3 4 5 6 7 8 9 10
do
	# if a = 5 then continue the loop and
	# don't move to line 8
	if [ $a == 5 ]
	then
		continue
	fi
	echo "Iteration no $a"
done


#Output

Iteration no 1
Iteration no 2
Iteration no 3
Iteration no 4
Iteration no 6
Iteration no 7
Iteration no 8
Iteration no 9
Iteration no 10

# Implementing while loop

a=0
# -lt is less than operator

#Iterate the loop until a less than 10
while [ $a -lt 10 ]
do
	# Print the values
	echo $a
	
	# increment the value
	a=`expr $a + 1`
done


# Output

0
1
2
3
4
5
6
7
8
9
# Implementing until loop

a=0
# -lt is less than operator

#Iterate the loop until a less than 10
until [ $a -lt 10 ]
do
	# Print the values
	echo $a
	
	# increment the value
	a=`expr $a + 1`
done


# Output

0
1
2
3
4
5
6
7
8
9
10

