import re
import os

# This script does generate the Makefile automatically for you, just run it,
# don't add them manually

def fileNums(num):
    filenum=""
    for i in range(num):
        filenum+="${" + f'f{i}' + "} "
    return filenum+"\n"

def getSources():
    filesNum=0
    script="CC=clang++\n\n"
    paths=[]
    path=os.path.join(os.path.join(os.getcwd(), ".."), "sources")
    for dirpath, dirfiles, namefiles in os.walk(path):
        for file in namefiles:
            if(re.search(r".*cpp$", file)):
                paths.append(f'f{filesNum}=.{os.path.join(dirpath, file).split("sources")[1]}')
                filesNum+=1
    script+='\n'.join(paths)
    script+="\n\nall: compile\ncompile:\n"
    script+='\t@${CC} -std=c++20 -g -o ./main.exe ' + f'{fileNums(len(paths))}'
    script+="\t@./main.exe\n"
    print("Makefile has been generated...")
    return script

with open("../sources/Makefile", "w") as file:
    file.write(getSources())