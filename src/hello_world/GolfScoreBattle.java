package hello_world;

public class GolfScoreBattle {
	public void battle(String name1, String name2, int score1, int score2) {
		int score;
		if(score1 < score2) {
			score = score2 - score1;
			System.out.println("スコア差" + score + "で" +name1+"の勝ちです。");
		}else if(score2 < score1) {
			score = score1 - score2;
			System.out.println("スコア差" + score + "で" +name2+"の勝ちです。");
		}else {
			System.out.println("引き分けです。");
		}
	}
}
