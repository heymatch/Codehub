EVAL=$1
echo evaluate $EVAL
cd $EVAL

g++ $EVAL.cpp
./a.out < input.txt > output.txt 
diff -w answer.txt output.txt