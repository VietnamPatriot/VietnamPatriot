import this


thislist = []

numofunc = int(input())

for i in range(numofunc):
    thislist.append(int(input()))

thislist2 = []

numofunc2 = int(input())

for i in range(numofunc2):
    thislist2.append(int(input()))

a = 0

for i in range(len(thislist2)):
    thislist.append(thislist2[a])
    a = a + 1

a = 0
newlist = []
min = thislist[0]  

#for i in range(len(thislist)):
#    if int(thislist[a]) > int(thislist[a + 1]):
#         
#    a = a + 1
print(thislist)

print(len(thislist))
while thislist:
    i = 0
    for i in range(len(thislist)): 
        if thislist[i] < min:
            min = thislist[i]
    newlist.append(min)
    thislist.remove(min)
    if len(thislist) >= 1:
        min = thislist[0]

print(newlist)
