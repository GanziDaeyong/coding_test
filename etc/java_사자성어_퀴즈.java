import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.*;

public class quiz {

    public static void main(String[] args) {

        String txtPath = "temp.txt";
        List<String> word = new ArrayList();
        List<String> mean = new ArrayList();

        try {
            File file = new File(txtPath);
            FileReader filereader = new FileReader(file);
            BufferedReader bufReader = new BufferedReader(filereader);
            String line = "";
            while ((line = bufReader.readLine()) != null) {
                String[] splitted;
                splitted = line.split("/");
                word.add(splitted[0]);
                mean.add(splitted[1]);
            }
            //.readLine()은 끝에 개행문자를 읽지 않는다.
            bufReader.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
        Scanner sc = new Scanner(System.in);

        double total = 0;
        double wor = 0;
        List<Integer> col = new ArrayList<>();
        while (true) {
            int ran = (int) (Math.random() * 25);
            System.out.println(mean.get(ran));
            String input = sc.nextLine();
            if (input.equals("종료")) { break; }
            String ans = word.get(ran);
            if (!input.equals(ans)) {
                wor ++;
                col.add(ran);
                System.out.println("틀렸습니다. 답은: " + ans);
            }
            total++;
        }
        
        double score = Math.round(((total-wor)/total)*100.0);
        System.out.println("내 점수: "+score + "점");
        System.out.println("오답 모음: ");
        for (int v : col) {
            System.out.println(word.get(v) + " / " + mean.get(v));
        }
    }


}
