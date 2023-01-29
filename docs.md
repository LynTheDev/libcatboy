# libcatboy docs

libcatboy tries to stick with the original's api endpoint naming.

## get_image()

get_image uses the `/img` endpoint, it uses a `image` struct to return the api's response, ignoring the error message.

After being called with `catboys::image name = catboys::get_image()` the library will return the four strings, `url`, `artist`, `artist_url` and `source_url`. These acn be accessed with `name.stringname`.

## get_ball()

get_ball uses the `/8ball` endpoint, it returns a struct called `ball` containing two strings; `response` and `image`

This function is called with `catboys::ball name = catboys::get_ball()`

## get_dice()

get_ball uses the `/dice` endpoint, it returns a struct called `dice` containing two strings; `response` and `image`

This function is called with `catboys::dice name = catboys::get_dice()`

## baka()
baka uses the `/baka` endpoint, it returns a c++ string and can be easily printed using `std::cout`.