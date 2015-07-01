module.exports = function(grunt) {
    "use strict";

  ////////////////////////
  // Load Config
  ////////////////////////

  var config = grunt.file.readYAML("Gruntconfig.yml");

  ////////////////////////
  // Load Tasks
  ////////////////////////

  require('load-grunt-tasks')(grunt);

  ////////////////////////
  // Configure Tasks
  ////////////////////////

  grunt.initConfig({
    // Compass - https://github.com/gruntjs/
    compass: {
        dist: {
            options: {
                config: 'config.rb',
                sassDir: 'css/sass',
                cssDir: 'css'
            }
        }
    },

    // Auto Prefixer - https://github.com/gruntjs/
    autoprefixer: {
        options: {
            browsers: ['last 2 version', 'ie 8', 'ie 9'],
            map: true
        },
        all: {
            files: [{
                expand: true,
                src: 'css/*.css',
                dest: ''
            }]
        }
    },

    // Concat - https://github.com/gruntjs/grunt-contrib-concat
    concat: {
      options: {
      },
      dist: {
        src: config.jsSrcDir + '*.js',
        dest: config.jsConcatDir + 'scripts.js',
      },
    },

    // jsHint - https://github.com/gruntjs/grunt-contrib-jshint
    jshint: {
      options: {
        "eqnull": true,
      },
      all: [
        'Gruntfile.js',
        config.jsSrcDir + "*.js"
      ]
    },

    // Watch - https://github.com/gruntjs/
    watch: {
        css: {
            files: 'css/sass/**/*.scss',
            tasks: ['compass','autoprefixer']
        },
        js: {
            files: 'js/scripts/*.js',
            tasks: ['concat','jshint'],
            options: {
              spawn: true
            }
        }
    },
  });

  ////////////////////////
  // Register New Tasks
  ////////////////////////

    grunt.registerTask('default', ['watch']);

};
