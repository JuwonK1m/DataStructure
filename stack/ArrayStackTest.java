public class ArrayStackTest {
    public static void main(String[] args) {
        ArrayStack arrayStack = new ArrayStack();

        try {
            arrayStack.push(1);
            arrayStack.push(2);
            arrayStack.push(3);

            System.out.println(arrayStack.peek());

            arrayStack.push(4);
            arrayStack.push(5);
            arrayStack.push(6);
            arrayStack.push(7);
            arrayStack.push(8);
            arrayStack.push(9);
            arrayStack.push(10);
            System.out.println(arrayStack.isFull());

            arrayStack.display();

            arrayStack.pop();
            arrayStack.pop();
            arrayStack.pop();

            arrayStack.display();

            System.out.println(arrayStack.isEmpty());
            System.out.println(arrayStack.isFull());

            arrayStack.pop();
            arrayStack.pop();
            arrayStack.pop();
            arrayStack.pop();
            arrayStack.pop();
            arrayStack.pop();
            arrayStack.pop();

            System.out.println(arrayStack.isEmpty());
            arrayStack.display();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
