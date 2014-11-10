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

        <script src="http://code.jquery.com/jquery-1.9.1.min.js"></script>
        <script>
            $(document).ready(function() {
                console.log("Go ahead, click the image!");

                $( "#pic").click(function() {
                    $( "#title" ).html("Dog");
                    $( "#pic").attr("src", "dog.jpg");
                    $( "#pic").attr("alt", "dog");
                    $( "#quote" ).html("alllllright");
                });
            });
        </script>
    </body>
</html>