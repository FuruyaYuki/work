package hello_world;

public class Check_Text {
	protected boolean check_text(String str) {
		Countscore cntnum = new Countscore();
		ErrorText error = new ErrorText();
		Changescore change = new Changescore();
		Player player1 = new Player();
		Player player2 = new Player();
		GolfScoreBattle gsb = new GolfScoreBattle();
		if(str == null) {
			return false;
		}
		int length = str.length();
		int cnt, p = -1;
		String score = null;
		for(cnt = 0;cnt<length;cnt++) {
			String check = "";
			check = str.substring(cnt, cnt+1);
			if(check.equals(cntnum.countnum(check))) {
				if(score == null) {
					score = "";
				}
				score = score + check;
			}else if(check.equals(",")) {
				
				if(score == null) {
					
					System.out.println(error.error(0));
					return false;
				}
				
				if(0 <= p && p < 36) {
					if(Integer.parseInt(score)!=0) {
						if(0 <= p && p <= 17) {
							player1.total_score += change.change(score, p);
						}else if(18 <= p && p < 36){
							player2.total_score += change.change(score, p-18);
						}
						change.change(check, 0);
						score = null;
						p++;
					}else {
						System.out.println(error.error(1));;
						return false;
					}
				}
			}else if(check.equals(" ")) {
			}else if(check.equals("-")) {
				System.out.println(error.error(0));
				return false;
			}else { 
				if(p <= 0) {
					int name;
					for(name = cnt;p<=0;name++) {
						String one = "";
						one = str.substring(name, name+1);
						if(!(one.equals(","))) {
							if(p==-1) {
								player1.p_name += one;
							}else {
								player2.p_name += one;
							}
						}else {
							p++;
						}
					}
					cnt = name - 1;
				}else {
					System.out.println(error.error(2));
					return false;
				}
				p = 0;
			}
		}
		if(p==0) {
			System.out.println(error.error(3));
			return false;
		}
		System.out.print(player1.p_name+" ");
		System.out.println(player1.total_score);
		System.out.print(player2.p_name+" ");
		System.out.println(player2.total_score);
		gsb.battle(player1.p_name, player2.p_name, player1.total_score, player2.total_score);
		return true;
	}
}
			