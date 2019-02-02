import subprocess
prog = "student.c"
print("Python program running C")
subprocess.call(["gcc",prog])
subprocess.call("./a.out")