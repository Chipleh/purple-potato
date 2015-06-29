# Require any additional compass plugins here.
require 'compass/import-once/activate'
require "sass-globbing"

# Set this to the root of your project when deployed:
http_path = "/"
# files don't live in root so this exists to get correct paths and avoid a ton of warnings
project_path = "./"
css_dir = "css"
sass_dir = "css/sass"
images_dir = "images"
javascripts_dir = "js"
fonts_dir = "fonts"
sourcemap = "true"

# dev environment settings
#if environment == :development
  line_comments = true
  output_style = :expanded
#end

# production environment settings
# if environment == :production
#   line_comments = false
#   output_style = :compressed
# end

# You can select your preferred output style here (can be overridden via the command line):
# output_style = :expanded or :nested or :compact or :compressed

# To enable relative paths to assets via compass helper functions. Uncomment:
# relative_assets = true

# To disable debugging comments that display the original location of your selectors. Uncomment:
# line_comments = false


# If you prefer the indented syntax, you might want to regenerate this
# project again passing --syntax sass, or you can uncomment this:
# preferred_syntax = :sass
# and then run:
# sass-convert -R --from scss --to sass css/sass scss && rm -rf sass && mv scss sass
