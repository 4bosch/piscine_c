#!/bin/sh
if [ -z "$(ifconfig | grep "inet " | cut -d ' ' -f 2) | grep -v 127.0.0.1" ]; then
echo "I am lost!"
else
ifconfig | grep "inet " | cut -d ' ' -f 2 | grep -v 127.0.0.1
fi
