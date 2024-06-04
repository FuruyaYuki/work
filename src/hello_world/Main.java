package hello_world;


public class Main{
	
	public static void main(String[] args) {
		int i = 0;
		String str = null;
		Scandata scan = new Scandata();
		Check_Text text = new Check_Text();
		while(i == 0) {
			str = scan.scandate();
			if(text.check_text(str) == true) {
				System.out.println("終了します。");
				i = 1;
			}else {
				
			}
		}
		
	}
}