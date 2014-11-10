<!DOCTYPE html>
    <head>
        <title id="title">Hello Kitty!</title>
    </head>
    <body>
        <div>
            <img id="pic" src="cat.jpg" alt="cat">
        </div>
        <div>
            <p id="quote">There is no happiness in the world, only rice...</p>
        </div>

        <script>
            var title = document.getElementById("title");
            title.innerHTML = "Dog";

            var pic = document.getElementById("pic");
            pic.src = "dog.jpg";

            var alt = document.getElementById("pic");
            alt.alt = "dog";

            document.getElementById("quote").innerHTML = "alllllright";
        </script>
    </body>
</html>