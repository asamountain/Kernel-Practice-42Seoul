# Explanation

## ex01

- `id -Gn` : list out the users who are same group with the login user.
- $FT_USER : `$USER` command print out whom logged in. Hence, put the $FT_USER by export token.   
- `sed 's/ /,/g` :  Sed is the streaming editor. Can edit some lines line by line. `s` means 'substitude'(replace the first arguement into next letters after slash.

## ex02

- `find . -type f -name '*.sh'` : find out all files which finish with `*.sh` from current path.
- `sed -e 's/\.sh//'` : `-e` append the 'Editing commands'(There are a lot of editing commands)  after '......'. There are commands 'r, w, b, r, s, t, w, y, !, 

