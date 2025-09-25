**Software Kit Project Manager**

*skprj manager*

**setup**:

1) you need to add first the Environment Variable "SK_PRJ_MANAGER" to pointing into where you save this app or save it into a already **Environment/Variable/Path**
~~~ bash
	# Put this in ~/.bashrc file or in which startup script you have
	SK_PRJ_MANAGER="path/to/skprjm-1.0.0v"
	export SK_PRJ_MANAGER
~~~

2) make it executed  
~~~ bash
chmod +x path/to/skprjm-1.0.0v/skprj
~~~

**How to use**:

1) go to your project folder or workspace and create new project
~~~ bash
cd Path/to/projects
source skprj new name -t template_type='app' by default
~~~

2) see your projects in this workspace with
``` bash
skprj list
```
	
3) add new file
~~~bash
skprj -n main.c++
#in 'app' template main.{c++, py, pyx, js, java, go, asm} will generate after asking for main file formate
~~~

4) compiling the project
~~~ bash
skprj build
# will generate Makefiles for compailing
~~~

5) run/debuging
~~~ bash
skprj run [args...]
skprj dbg [args...]
~~~

6) rm/cp/mv
~~~ bash
skprj rm [name= this projec name]
skprj cp copy/to/
skprj mv mv/to/
~~~

7) -f/-n/-s/link/unlink/-:
~~~ bash
skprj -f new_folder
skprj -n new_file
skprj -s #see the project name and template type
skprj -s name [type=getted from .dbg/prj.info] # set the project name and type

skprj link -l staticlib -I path/to/include -f path/to/src_folder
skprj unlink -l libname -I include -f src_folder
skprj -: #run bash commands in project path
~~~

**commands Nodes**:

the commands build, dbg, run clear can be customed by add files with same name into prj/.dbg folder
    -if you want to use the default commands in the customed command with
~~~ bash
skprj C= <command-name>
skprj C= -r default_dbg
skprj C= -r default_build
~~~

you can add a new command with create new file in the skprjm-1.0.0v/src folder

and the file name will be the command in use
~~~ bash
echo "echo 'hi!'" > path/to/skprj-1.0.0v/new_command
...
skprj new_command
#--->hi
~~~

you can add new template with create new folder in "path/to/skprj-1.0.0v/res/templates/prj-type"
~~~ bash
mkdir path/to/skprj-1.0.0v/res/templates/prj-type/new_template
touch cmpl_cmnd # the main compile command
touch for_what? # for what is this new_template
touch setup     # script run when create a new project with this type
...
skprj new prj_name -t new_template
#--->create project with new_template
skprj new prj_name -t non_found_template
#--->will print the template list and for_what? is each one
~~~

every main command have a ```--help``` option you can use

**Warnings**:
    uncomplete commands (up/down)load

    **if you face any error send a request or try fix it**




