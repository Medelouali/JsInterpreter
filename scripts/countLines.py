import os

def formatted(num):
    bigs=[1000_000, 1000]
    if(num>=bigs[0]):
        return f'{format(num/bigs[0], ".2f")}M'
    if(num>=bigs[1]):
        return f'{format(num/bigs[1], ".2f")}K'
    return num

def countLines():
    lines=0
    path=os.path.join(os.path.join(os.getcwd(), ".."), "sources")
    for dirpath, dirfiles, namefiles in os.walk(path):
        for file in namefiles:
            with open(os.path.join(dirpath, file), "rb") as f:
                data=f.readlines()
                lines+=len(data)
                
    print(f"\rThis project contains {formatted(lines)} lines of code")

countLines()