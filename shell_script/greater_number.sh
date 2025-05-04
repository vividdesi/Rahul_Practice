#!/bin/bash
read -p "Enter a number: " num
if [ $num -gt 10 ]; then
echo "Greater than 10"
else
echo "10 or less"
fi
