"""

     Time limit: 1.00 s Memory limit: 512 MB 

There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.

Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.
_________________
Input

The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.

The next line contains n integers a1,a2,…,an: the desired apartment size of each applicant. If the desired size of an applicant is x, he or she will accept any apartment whose size is between x−k and x+k.

The last line contains m integers b1,b2,…,bm: the size of each apartment.
_________________
Output

Print one integer: the number of applicants who will get an apartment.
_________________
Constraints

    1≤n,m≤2⋅105


0≤k≤109

1≤ai,bi≤109
_________________

Example

Input:
4 3 5
60 45 80 60
30 60 75

Output:
2

"""
n,m,k = [int(x) for x in input().split()]
 
l = [int(x) for x in input().split()]
l.sort()
 
sizes = [int(i) for i in input().split()]
sizes.sort()
 
i,j , cnt= 0,0,0
 
while (i<n and j<m) :
	
	if (abs(l[i] - sizes[j])<=k):
		cnt+=1
		i+=1
		j+=1
 
	elif l[i]<sizes[j]:
		i+=1
 
	else:
		j+=1
 
print(cnt) 