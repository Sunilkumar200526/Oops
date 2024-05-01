import java.util.HashMap;
import java.util.Map;




public class MapInterface
{
    public static void main(String[] args)
    {
        Map<String, Integer> h=new HashMap<>();
        h.put("sunil", 45);
        h.put("sai",52);
        System.out.println("Hash map is : "+h);
        // Iterating over key-value pairs
        System.out.println("Key-Value pairs :");
        for(Map.Entry<String, Integer> entry:h.entrySet())
        {
            System.out.println(entry.getKey() + " : " + entry.getValue());
        }
    }
}

