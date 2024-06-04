package hello_world;

public class Gamescore {
	protected int gamescore(int score, int sep) {
		int par[] = {4,4,3,4,5,4,5,3,4,4,3,4,5,4,3,4,5,4};
		int sub = 0;
		if(0 <= sep && sep < 18) {
			sub = par[sep];
			sub = score - sub;
			return sub;
		}
		return sub;
		
	}
}
