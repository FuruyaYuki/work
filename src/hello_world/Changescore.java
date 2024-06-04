package hello_world;

public class Changescore {
	public int change(String str, int sep) {
		Gamescore subscore = new Gamescore();
		int holescore = 0;
		if(str.equals(" ")||str.equals(",")) {
			
		}else {
			holescore = subscore.gamescore(Integer.parseInt(str), sep);
			return holescore;
		}
		return holescore;
	}
	
}
