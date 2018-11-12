#!/bin/sh
ldapsearch -Q -LLL "uid=z*" cn | grep cn | cut -d : -f 2 | sort -bdrf | cut -c2-
