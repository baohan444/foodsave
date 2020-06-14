#!/bin/bash
mysql -hlocalhost -uroot -p123  --default-character-set=utf8
cat save.txt |while read name food location
do
sql="INSERT INTO cage.cage1(food,name,location) values('${food}','${name}',
'${location}');
 $MYSQL -e"$sql"
 done