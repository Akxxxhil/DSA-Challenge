
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode prev=null;
        ListNode curr=head;
        ListNode fut=head;

        while(curr!=null ){
            fut=curr.next;
            curr.next=prev;
            prev=curr;
            curr=fut;
        }
        return prev;
    }
}
