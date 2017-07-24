#!/bin/sh
ldapsearch -QLLL "sn=*BON*" sn | grep sn | wc -l | cut -c7-
