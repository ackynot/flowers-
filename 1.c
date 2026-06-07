<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Flowers</title>

<style>
*{
    margin:0;
    padding:0;
    box-sizing:border-box;
}

body{
    display:flex;
    justify-content:center;
    align-items:flex-end;
    min-height:100vh;
    overflow:hidden;
    background:linear-gradient(to top,#000,#08142b);
}

.night{
    position:fixed;
    inset:0;
    background:
    radial-gradient(circle at 20% 20%,white 1px,transparent 2px),
    radial-gradient(circle at 80% 30%,white 1px,transparent 2px),
    radial-gradient(circle at 60% 70%,white 1px,transparent 2px),
    radial-gradient(circle at 40% 50%,white 1px,transparent 2px);
    background-size:200px 200px;
}

.flowers{
    position:relative;
    width:500px;
    height:500px;
}

.flower{
    position:absolute;
    bottom:0;
    animation:sway 4s ease-in-out infinite alternate;
}

.flower:nth-child(1){
    left:120px;
}

.flower:nth-child(2){
    left:250px;
    transform:scale(.9);
    animation-delay:1s;
}

.flower:nth-child(3){
    left:370px;
    transform:scale(.8);
    animation-delay:2s;
}

.stem{
    width:8px;
    height:250px;
    background:linear-gradient(green,#0a5f0a);
    margin:auto;
}

.bloom{
    position:relative;
    width:100px;
    height:100px;
    margin:auto;
}

.petal{
    position:absolute;
    width:50px;
    height:70px;
    background:#ff69b4;
    border-radius:50%;
    left:25px;
    top:15px;
    transform-origin:center bottom;
    box-shadow:0 0 15px #ff69b4;
}

.petal:nth-child(1){transform:rotate(0deg);}
.petal:nth-child(2){transform:rotate(45deg);}
.petal:nth-child(3){transform:rotate(90deg);}
.petal:nth-child(4){transform:rotate(135deg);}
.petal:nth-child(5){transform:rotate(180deg);}
.petal:nth-child(6){transform:rotate(225deg);}
.petal:nth-child(7){transform:rotate(270deg);}
.petal:nth-child(8){transform:rotate(315deg);}

.center{
    position:absolute;
    width:35px;
    height:35px;
    background:gold;
    border-radius:50%;
    left:32px;
    top:32px;
    box-shadow:0 0 20px gold;
}

.grass{
    position:absolute;
    bottom:0;
    width:100%;
    height:80px;
    background:linear-gradient(#0a5f0a,#032b03);
}

@keyframes sway{
    from{
        transform:rotate(-3deg);
    }
    to{
        transform:rotate(3deg);
    }
}
</style>
</head>
<body>

<div class="night"></div>

<div class="flowers">

    <div class="flower">
        <div class="bloom">
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="center"></div>
        </div>
        <div class="stem"></div>
    </div>

    <div class="flower">
        <div class="bloom">
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="center"></div>
        </div>
        <div class="stem"></div>
    </div>

    <div class="flower">
        <div class="bloom">
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="center"></div>
        </div>
        <div class="stem"></div>
    </div>

</div>

<div class="grass"></div>

</body>
</html>
