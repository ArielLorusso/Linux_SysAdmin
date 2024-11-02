#!/bin/bash
#

get_home() {
	echo $HOME
	echo "hola"
}

echo "I live in the $(get_home) directory."

echo

list_files() {
        echo "There are $# arguments"
	echo "Argument 2 is" $2 "como esta"
	ls $3
}

list_files $(get_home) '/'
