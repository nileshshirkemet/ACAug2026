import shopping.Shop;

class Program {

    private static void present(Record info) {
        Class<?> c = info.getClass();
        System.out.printf("<%s>%n", c.getSimpleName());
        for(var rc : c.getRecordComponents()){
            try{
                Object value = rc.getAccessor().invoke(info);
                System.out.printf("  <%1$s>%2$s</%1$s>%n", rc.getName(), value);
            }catch(Exception e){}
        }
        System.out.printf("</%s>%n", c.getSimpleName());
        System.out.println();
    }

    public static void main(String[] args) {
        present(Shop.popularItem());
        present(Shop.bestCustomer());
    }
}
