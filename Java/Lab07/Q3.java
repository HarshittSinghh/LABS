class ABC {
    public static void main(String[] args) {
        class MyClass {
            public void existingMethod(String name) {
                System.out.println("Hello, " + name + "!");
            }
        }
        try {
            MyClass obj = new MyClass();
            obj.existingMethod("Leo");
            java.lang.reflect.Method method = obj.getClass().getMethod("nonExistentMethod", String.class);
            method.invoke(obj, "Messi");
        } catch (NoSuchMethodException e) {
            System.out.println("Error: Method not found - " + e.getMessage());
        } catch (IllegalAccessException | java.lang.reflect.InvocationTargetException e) {
            e.printStackTrace();
        }
    }
}
