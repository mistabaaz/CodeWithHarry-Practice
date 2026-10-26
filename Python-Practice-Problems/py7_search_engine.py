#Searching matching lines in a list of sentences

sentences = ["this is good","python is good","python is python not snake"]
query = input("Enter query to be searched : ")
qwords = query.split()  #list of query words
mwords = []  #list of matched words


#to find the matching words in sentences

for line in sentences :
    mword = 0    #matched words
    lwords = line.split()    #list of words in line
    for qword in qwords:
        if qword in lwords:
            c = lwords.count(qword)
            mword += c
    mwords.append(mword)


#search database all result saved into a list

temp = sorted(mwords,reverse=True)
l = len(temp)
search = []
for i in range(l):
    num = temp[i]
    for j in range(l):
        if num==0:
            pass
        elif num==mwords[j] and sentences[j] not in search:
            search.append(sentences[j])
            break


#to display the search result
result = len(search)
if result!=0:
    print(f"\nTotal {result} results found :\n")
    for r in search:
        print(r)
else:
    print("\nSorry,No result found in database")


input()
#finshed
