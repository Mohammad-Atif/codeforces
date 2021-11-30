count = 0 
word = "" 
maxCount = 0
words = []
   

file = open("C:\data.txt", "r")  
      
 
for line in file:   
    string = line.lower().replace(',','').replace('.','').split(" ");  
      
    for s in string:  
        words.append(s);  
  
for i in range(0, len(words)):  
    count = 1;  
      
    for j in range(i+1, len(words)):  
        if(words[i] == words[j]):  
            count = count + 1;  
              
    
     
    if(count > maxCount):  
        maxCount = count;  
        word = words[i];  
          
print("Most frequent word: " + word);  
file.close();  