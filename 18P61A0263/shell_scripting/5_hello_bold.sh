#5. How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command.
#!/bin/sh
v='\e[32;1m'
echo -e " ${v}Hellow"
