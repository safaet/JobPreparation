# https://leetcode.com/problems/merge-two-sorted-lists/description/?envType=problem-list-v2&envId=linked-list

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def mergeTwoLists(list1: ListNode, list2: ListNode) -> ListNode:
    dummy = ListNode(0)  # Dummy node to start the merged list
    current = dummy     # Pointer to track position

    while list1 and list2:
        if list1.val <= list2.val:
            current.next = list1
            list1 = list1.next

        else:
            current.next = list2
            list2 = list2.next
        current = current.next

    current.next = list1 if list1 else list2

    return dummy.next

l1 = ListNode([1, 2, 4, 5])
l2 = ListNode([1, 3, 5, 6])

dummy = ListNode()
current = dummy

print(l1.val)

current.next = l1
l1 = l1.next

print(current.next)
print(l1)
# print(type(b))