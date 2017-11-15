import math

Elements=raw_input();
target = int(raw_input())
nums=[]
nums=Elements[1:-1]
#print nums
nums2=[]
nums2=nums.split(",")
#print nums2


for i in range(len(nums2)-1):
	#print "i" + nums2[i]
	for j in range(i+1,len(nums2)):
		#print "j" + nums2[j]
		a=int(nums2[i])
		b=int(nums2[j])
		c=a+b
		
		if c == target:
			print  c	
		