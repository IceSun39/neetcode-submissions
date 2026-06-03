# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slowP, fastP = head, head.next

        while fastP and fastP.next:
            if slowP == fastP:
                return True
            slowP = slowP.next
            fastP = fastP.next.next
        
        return False