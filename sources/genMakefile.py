import re
import os

def fileNums(num):
    filenum=""
    for i in range(num):
        filenum+="${" + f'f{i}' + "} "
    return filenum+"\n"

def getSources():
    filesNum=0
    script="CC=g++\n\n"
    paths=[]
    for dirpath, dirfiles, namefiles in os.walk(os.getcwd()):
        for file in namefiles:
            if(re.search(r".*cpp$", file)):
                paths.append(f'f{filesNum}=.{os.path.join(dirpath, file).split("sources")[1]}')
                filesNum+=1
    script+='\n'.join(paths)
    script+="\n\nall: compile\ncompile:\n"
    script+='\t@${CC} -g -o ./main.exe ' + f'{fileNums(len(paths))}'
    script+="\t@./main.exe\n"
    return script

with open("Makefile", "w") as file:
    file.write(getSources())