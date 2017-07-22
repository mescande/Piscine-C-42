#!/bin/sh
find * -name "*.sh" | cut -d . -f 1 | sed 's/.*\///'
