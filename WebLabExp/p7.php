<!DOCTYPE HTML>
<html>

<head>
    <meta http-equiv="refresh" content="1">
    <script>
        function startTime()
        {
            d=new Date();
            h=d.getHours();
            m=d.getMinutes();
            s =d.getSeconds();
            document.getElementById("txt").innerHTML=h+":"+m+":"+s;
        }
    </script>
    <p align="center"> <?php echo date(" h: i : s A");?> </p>
</head>
<body bgcolor="black" text="white" onload="startTime()">
    <h1 align="center">Local System time is: <span id="txt"></span> </h1>
</body>
</html>