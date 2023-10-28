#!/bin/sh

kotlinc $1 -include-runtime -d kotlinOut.jar && java -jar kotlinOut.jar
echo ''