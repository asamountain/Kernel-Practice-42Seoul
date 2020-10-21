# ex02 - find_sh.sh

has to print out only file name without any special characters and expension name after comma.

### commands

1. `find . -type f -name '*.sh'` does work result like below.

```
./ex01/print_groups.sh
./ex02/find_sh.sh
./ex03/count_files.sh
./ex04/MAC.sh
./ex06/skip.sh
```

`.` does print out current dir ~ subdirectory's all files from 'current work path'.


but what `-type f` does? The explanation below in manual page.
```
-type t
             True if the file is of the specified type.  Possible file types are
             as follows:

             b       block special
             c       character special
             d       directory
             f       regular file
             l       symbolic link
             p       FIFO
             s       socket
```
yes, it does find out only specific type of files or folder by `f`

2. yes, need to wipe out the folder name and .sh as well.

`sed - e 's/.\///'` but shouldn't have to add `g` at the end.
because, the `g` means pick the `./` charactors in a line until the end.
yes it picks all `/` as well.

```
ex01/print_groups.sh
ex02/find_sh.sh
ex03/count_files.sh
ex04/MAC.sh
ex06/skip.sh
```

3. need to remove all folder name in the front of output.

`sed 's/.*\///`

It means, `.` check the all characters, 
`*` no matter that is only 1 or more than 1 characters.
`\/` which does finish with `/`
into `//` nothing.

then the result is right below.
```
print_groups.sh
find_sh.sh
count_files.sh
MAC.sh
skip.sh
```

4. remove file extension name.

`sed -e 's/\.sh//'`

It means remove `.`'s regextic fucntion, but treat as just string of comma.
so find `.sh` string, 
then remove into nothing.

```
print_groups
find_sh
count_files
MAC
skip
```

tada~

## Additional curiosity

1. but what is sed's `-e` option?

-e option tag makes available to use sed's *commands*.

```
-e command
             Append the editing commands specified by the command argument to
             the list of commands.
```

commands? 
yes, there are a number of commands in sed.
but I've just executed `substitue` for changing specific characters by regex targeted.

yes, that's it!

## conclusion

Sed seems powerful, need to take more understand time by time.
but I wonder how can I fully take those functions as my hands.


# ex03 - mac address printout

ifconfig's ethe is the mac address.
Mac addresses have 2 digits 6 numbers which are seperated by `:`.

```
3c:cd:36:69:75:9e
3a:00:10:40:f5:00
3a:00:10:40:f5:01
3a:00:10:40:f5:00
3e:22:fb:64:df:16
3c:22:fb:64:df:16
0e:22:fb:64:df:16
26:1d:e2:26:2f:5e
```

above print out are the `ifconfig | grep -o ..:..:..:..:..:..`

1. but what was the `grep -o -E`?

`-o` does mean 'only matching'. How? 

```
-o, --only-matching
             Prints only the matching part of the lines.
```

yes, only matching parts should be printed out.
but, matching parts? after that, we can use some regex.

but as the basic syntax in grep,
grep has [pattern] in the first argument.

[and the `.` does mean, a character. It inclusively prints out any type of characters except 'NEW LINE!!!']()

2. -E does mean `extended regex`.

I remind the difference between normal regex and the extended regex.
It's all about `{`.
But, Does it matter now?
Anyway, -E makes able to use 'regex' after -o 'only matching' options. by regex.

excepting -o doesn't work with the regex expression `..:..:..:..:..:..:` but only show up the whole lines which include `..:..:..:..:..:..:`

```
	ether 3c:cd:36:69:75:9e 
	ether 3a:00:10:40:f5:00 
	ether 3a:00:10:40:f5:01 
	ether 3a:00:10:40:f5:00 
	ether 3e:22:fb:64:df:16 
	ether 3c:22:fb:64:df:16 
	ether 0e:22:fb:64:df:16 
	ether 26:1d:e2:26:2f:5e 
```
yes, above command without -o, just show up all the lines 'included'




2. ifconfig does print out current pc's network interface configure.

## conclusion

actually, grep command's `-E` option doesn't be necessary, because -o option does require regex as well.


# ex05 create a full meta characters named file.

1. `touch -t YYYYMMDDhhmm filename`

-t option does change a file's date into specific time.
the form should be YYYYMMDDhhmm.


2. change the size by `dd`

dd has many options to change a file size.

[`dd of=name_changing_file bs=2 count=1`](https://stackoverflow.com/questions/139261/how-to-create-a-file-with-a-given-size-in-linux)

what do the each options role in?

	- bs=filesize (basic is byte), e.g : `bs=2` makes 2 bytes 
	- count=a number of block bs. 
		a block is a number of bytes or bits.



# ex07 multiple commands 

1. `cut -d ':' -f 7`

`cut` command cuts the printout record by seperating delimiter. User can define a delimiter, and extract a specific characters from it.

-f means 'field number' which is delimited by delimiter. Delimeter means as , : . like the special characters.
so -d option define the delimiter which seperates each fields by its character.

2. `tr`

tr is 'translate characters'. tr command is similar with awk and sed, but 
`tr A into B` means, translates A all characters into B. 

differences between `tr` and `awk`,`sed`?

[`tr` is for the character targeting edit, but `awk` is for field edit, `sed` is for the line by line.](https://unix.stackexchange.com/questions/427940/main-difference-between-tr-translate-to-sed-and-awk#:~:text=tr%20works%20on%20characters%20(changes,by%20setting%20FS%20and%20RS%20))




