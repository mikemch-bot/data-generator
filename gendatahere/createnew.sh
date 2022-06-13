read -p "Enter problem name: " problemname

mkdir data/$problemname
for file in `ls templates/`
do
    cp templates/$file data/$problemname/
done