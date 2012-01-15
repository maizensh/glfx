#!/usr/bin/python

import os

#######################################
# definitions
#######################################
test_list_file_name = "test_list"
shaders_dir = 'shaders/'
golden_dir = 'golden/'

#######################################
# Test logic
#######################################
f = open(test_list_file_name, "r")

line = f.readline().strip()
count = 0

while line:
    #print(line)
    if line.startswith('#'):
        line = f.readline()
        continue
    words = line.split()
    file = words[0]
    tech = words[1]
    result = words[2]
    cmd = 'glfxc ' + shaders_dir + file + ' ' + tech + ' > result' 
    #print(cmd)
    os.system(cmd)
    cmd = 'diff result ' + golden_dir + result + ' > /dev/null'
    #print(cmd)  
    res = os.system(cmd)
    if (res != 0):
        print('Error in test: ' + line)
        print('------------------------------------')
        print('Golden results:')
        os.system('cat ' + golden_dir + result)
        print('------------------------------------')
        print('Test results:')
        os.system('cat result')
        exit        
    line = f.readline()
    count = count + 1
    
print("PASSED! (" + str(count) + ' tests)')
os.remove('result')
