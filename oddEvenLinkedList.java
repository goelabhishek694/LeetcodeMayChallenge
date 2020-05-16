/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode oddEvenList(ListNode head) {
        if(head==null) return null;
        int size=0;
        ListNode nnode=head;
        while(nnode!=null){
            size++;
            nnode=nnode.next;
        }
        if(size==1) return head;
        
        ListNode cur1=new ListNode(-1);
        ListNode cur2=new ListNode(-1);
        cur1=head; cur2=head.next;
        ListNode a=cur1;
        ListNode b=cur2;
        
        while(a.next!=null || b.next!=null){
            a.next=b.next;
            if(a.next!=null) a=a.next;
            b.next=a.next;
            if(b.next!=null) b=b.next;
        }
        
        a.next=cur2;
        b.next=null;
        
        return cur1;
        
    }
}