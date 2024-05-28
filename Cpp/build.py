import os
import sys

def arg_parse(arg):
    if arg == 'c':
        if os.path.exists("build"):
            os.system('rm -rf build')
            print("Removed build directory")
    elif arg == 'b':
        if os.path.exists("build") != True:
            os.system('mkdir build')
        os.system('cmake -B build')
        os.system('cd build; make')
    else:
        print("Not recognised")



args = len(sys.argv) - 1
if args == 1:
    arg_parse(sys.argv[1])