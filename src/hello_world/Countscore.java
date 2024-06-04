package hello_world;

public class Countscore {
	public String countnum(String str) {
		int num;
		String strnum = null;
		for(num = 0;num<=9;num++) {
			Integer number = num;
			strnum = number.toString();
			if(str.equals(strnum)) {
				return strnum;
			}
		}
		return strnum;
	}
}
