function enter(c, tx, ty, sx, sy) {
    c.save();
    c.translate(tx,ty);
    c.scale(sx,sy);
}

function leave(c, fs, ss) {
    c.restore();
    c.fillStyle = fs;
    c.strokeStyle = ss;
    c.fill();
    c.stroke();
}

function leave_width(c, fs, ss, w) {
    c.restore();
    c.fillStyle = fs;
    c.strokeStyle = ss;
    c.lineWidth = w;
    c.fill();
    c.stroke();
    c.lineWidth = 0;
}

function rectangle(c){
	c.beginPath();
		moveTo(-0.33, -0,5);
		c.lineTo(0.33, -0.5);
		c.lineTo(0.33, 0.5);
		c.lineTo(-0.33, 0.5);
		c.lineTo(-0.33, -0.5);
	c.closePath();

}

function hand(c){
	c.beginPath();
		moveTo(-0.08,0);
		c.bezierCurveTo(-0.077,0.099,-0.07,0.168,-0.058,0.263);
		c.bezierCurveTo(-0.106,0.26,-0.223,0.363,-0.176,0.480);
		c.bezierCurveTo(-0.168,0.485,-0.163,0.481,-0.159,0.480);
		c.bezierCurveTo(-0.1685,0.483,-0.143,0.474,-0.1376,0.46);
		//c.bezierCurveTo(-0.146,0.34,-0.035,0.349,-0.0145,0.4);
		//c.bezierCurveTo(-0.0187,0.4737,-0.069,0.54,-0.1248,0.4712);//circulo
		c.bezierCurveTo(-0.143,0.4645,-0.1658,0.4793,-0.1658,0.493);
		c.bezierCurveTo(-0.1435,0.5275,-0.0975,0.5546,-0.074,0.56);
		c.bezierCurveTo(-0.094,0.579,-0.1385,0.624,-0.1026,0.655);
		c.bezierCurveTo(-0.0974,0.5792,-0.1357,0.6305,-0.102,0.6544);
		c.lineTo(-0.0658,0.6308);
		c.bezierCurveTo(-0.0702,0.6478,-0.0664,0.6792,-0.0444,0.6742);
		c.lineTo(0.0046,0.6198);
		c.bezierCurveTo(0.0035,0.6305,0.0195,0.643,0.0312,0.642);
		c.bezierCurveTo(0.106,0.537,0.157,0.432,0.1613,0);
		c.lineTo(-0.08,0);
	c.closePath();

}

function baseball(c){
	c.beginPath();
		c.arc(0,0,0.067,0,2*Math.PI);
	c.closePath();

}

function edge(c){
	c.beginPath();
	 	moveTo(0,0);
	 	c.bezierCurveTo(-0.0022,0.0046,-0.0061,0.0100,-0.009,0.0126);
	 	c.bezierCurveTo(-0.0059,0.0113,-0.0022,0.0113,0.0072,0.013);
	 	c.lineTo(0,0);
	 c.closePath();

}

function curveline(c){
	c.beginPath();
		moveTo(0,0);
		c.bezierCurveTo(0.0326,0,0.0903,-0.0090,0.133,-0.068);
		/*c.restore();
		c.strokeStyle = color;
		c.stroke();*/
	//c.closePath();
	}

function sharpcurve(c){
	c.beginPath();
		moveTo(-0.059,0.0278);
		c.bezierCurveTo(-0.017,-0.0333,0.0342,0.0185,0.001,0.0777);
}

function traco(c){
	c.beginPath();
		moveTo(0,-1);
		c.bezierCurveTo(0,0,0,0,0,1);
}

function miniBars (c){
	c.beginPath();
		moveTo(0,0);
		c.lineTo(-0.101,-0.258);
		c.lineTo(-0.078,-0.273);
	c.closePath();
}

function Letters(c,text,font,color){
	c.font = font;
	c.fillStyle= color;
	c.fillText(text, 0, 0);
}

function LetterI(c,color){
	c.font = "bold 46px Calibri";
	c.fillStyle= color;
	c.fillText("I",0,0);
}

function underworld(c){
	enter(c, 330 , 500, 1000, 1000);
	rectangle(c);
	leave(c,"rgb(242,42,42)","rgb(242,42,42)");

	enter(c, 330, 125, 1000, 270);//topo
	rectangle(c);
	leave(c,"#000000","#000000");

	enter(c, 330, 250, 1000, 1000);
	hand(c);
	leave(c,"#000000","#000000");

	enter(c,260, 680, 1060, 1060);
	baseball(c);
	leave(c,"#FFFFFF","#FFFFFF");

	enter(c,195,703,1000,1000);
	edge(c);
	leave(c,"#FFFFFF","#FFFFFF");

	enter(c,260, 680, 1000, 1000);
	baseball(c);
	leave_width(c,"white","gainsboro",4);

	enter(c,275, 640, 1000, 1150);
	c.rotate(33*Math.PI/-200);
	sharpcurve(c);
	leave_width(c,"transparent","gainsboro",4);

	enter(c,239, 720, 1000, 1150);
	c.rotate(229*Math.PI/-200);
	sharpcurve(c);
	leave_width(c,"transparent","gainsboro",4);

	enter(c,298,733,100,170);
	c.rotate(2.85*Math.PI/4);
	traco(c);
	leave_width(c,"transparent","gainsboro",4);

	enter(c,315,645,160,100);
	c.rotate(0.95*Math.PI/4);
	traco(c);
	leave_width(c,"transparent","gainsboro",4);

	enter(c,309,761,1000,1100);
	c.rotate(105*Math.PI/-200);
	curveline(c);
	leave_width(c,"transparent","gainsboro",4);

	enter(c,214,596,1000,1100);
	c.rotate(99*Math.PI/200);
	curveline(c);
	leave_width(c,"transparent","gainsboro",4);

	enter(c,164,670,1000,550);
	c.rotate(Math.PI/-12);
	curveline(c);
	leave_width(c,"transparent","gainsboro",4);

	enter(c,355,690,1000,550);
	c.rotate(Math.PI/1.1);
	curveline(c);
	leave_width(c,"transparent","gainsboro",4);

	enter(c,161,690,1000,1000);
	curveline(c);
	leave_width(c,"transparent","#DC143C",4);
	
	enter(c,358,672,990,980);
	c.rotate(180*Math.PI/180);
	curveline(c);
	leave_width(c,"","#DC143C",4);

	enter(c,195,723,500,500);
	c.rotate(70*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,175,730,500,500);
	c.rotate(75*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,148,727,500,500);
	c.rotate(85*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,120,721,500,500);
	c.rotate(95*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,55,680,500,500);
	c.rotate(125*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,72,698,500,500);
	c.rotate(115*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,93,700,500,500);
	c.rotate(110*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,134,842,500,500);
	c.rotate(68*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);
	
	enter(c,128,813,500,500);
	c.rotate(78*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,127,772,500,500);
	c.rotate(92*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,143,752,500,500);
	c.rotate(95*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,189,642,500,500);
	c.rotate(135*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,167,680,500,500);
	c.rotate(120*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,152,710,500,500);
	c.rotate(110*Math.PI/200);
	miniBars(c);
	leave_width(c,"","F5F5DC",4);

	enter(c,50,78,0.85,1.2);
	Letters(c,"DON DEL LLO","bold 40px Verdana","white");
	leave(c, "", "");

	enter(c,221,78,1.1,1.2);
	LetterI(c, "white");
	leave(c,"","");

	enter(c,50,115,0.75,1.1);
	Letters(c,"UNDERWORLD","bold 30px Verdana", "rgb(242,42,42)");
	leave(c, "", "");

	
}


function main(){
    var c2d = document.getElementById("acanvas").getContext("2d");
    underworld(c2d);
}