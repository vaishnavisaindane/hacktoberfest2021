
$(document).ready(function(){

var num=Math.floor(Math.random()*900+100);
var tar=num.toString().split("").map(Number);
var p=0;

$("#x").click(function(){
 var l=numbers.display.value.length;
   numbers.display.value=numbers.display.value.substring(0,l-1);
});

$("#try").click(function(){
var num1=$("#display").val();
 var guess=num1.toString().split("").map(Number)
if(num1.length==3){
$(".show").show();
p++;
var count=0,flag=0;
for(var i=0;i<3;i++){
    for(var j=0;j<3;j++){
        if(guess[i]==tar[j]){
            count=1;
        }
    }
    if(guess[i]==tar[i]){
        flag++;;
    }
}
if(count==1 && flag>0&& flag<3){
    $(".show").text(num1+" : Match");
}
else if(count==1 && flag==0){
    $(".show").text(num1+" : Close");
}
else if(flag==3){
if(p<=10){
        var com="You are a Genius!"
    }
    else{
       var com="Try to take less attempts"
    }
   $(".show").text("Well done!You guessed the correct number "+num+" by taking "+p+" attempts. "+com)

}
else{
    $(".show").text(num1+" : Nope")
}
}
else{
    alert("please enter a 3 digit number")
}
});
});
