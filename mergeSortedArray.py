88. Merge Sorted Array
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        t1=0
        t2=0
        nums=[]
        nums11=[]
        
        i=0
        j=0
        length=  len(nums1)
        for i in range(m,length):
            if nums1[i]==0:
                elem = nums2[j]
                nums1[i]=elem
                j=j+1
                print (elem)
        nums1.sort()
