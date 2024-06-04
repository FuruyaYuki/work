package hello_world;

public class ErrorText {
	public String error(int state) {
		String text = "";
		switch (state) {
		case 0:
			text = "先頭文字は半角の数字のみです。\n";
			break;
		case 1:
			text = "スコアは1以上から入力可能です。\n";
			break;
		case 2:
			text = "半角の数字、カンマ、スペースのみ使用できます。\n";
			break;
		case 3:
			text = "スコアはカンマで区切ってください\n";
			break;
		default:
			break;
		}
		text += "やり直してください。\n";
		return text;
	}
}
