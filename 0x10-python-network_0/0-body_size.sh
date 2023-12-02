#usr/bin/env bash
#Script that takes in URL, sends request to that URL,
#and display the size of the body of the response

curl -so /dev/null -w '%{size_download}\n' "$1"