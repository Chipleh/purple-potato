module.exports = function (grunt) {
    "use strict";

    require('time-grunt')(grunt);
    require('load-grunt-tasks')(grunt, {pattern: ['grunt-*']});

    // Project configuration.
    grunt.initConfig({
        pkg: grunt.file.readJSON('package.json'),

        autoprefixer: {
            options: {
                browsers: [ 'last 2 versions', 'ie >= 9']
            },
            css: {
                src: 'css/*.css'
            }
        },

        uglify: {
            build: {
                src: [ 'js/**/*.js', '!js/scripts.min.js'],
                dest: 'js/scripts.min.js'
            }
        },

        concat: {
            dist: {
                src: ['js/**/*.js', '!js/scripts.min.js'],
                dest: 'js/scripts.min.js'
            }
        },

        sass: {
            options: {
                style: 'compressed',
                sourcemap: 'inline'
            },
            dist: {
                files: [{
                    expand: true,
                    cwd: 'css/sass',
                    src: ['*.scss'],
                    dest: 'css',
                    ext: '.css'
                }]
            }
        },

        jsdoc : {
            src: [
                'js/*.js',
                'js/!scripts.min.js'
            ],
            options: {
                destination: 'js/JsDocs',
                template : "node_modules/grunt-jsdoc/node_modules/ink-docstrap/template",
                configure : "js/jsdoc.conf.json"
            }
        },

        watch: {
            sass: {
                files: ['css/sass/**/*.scss'],
                tasks: ['sass', 'autoprefixer']
            },
            css: {
                files: ['css/*.css'],
                options: {
                    livereload: true
                }
            },
            js: {
                files: [ 'js/**/*.js', '!js/scripts.min.js'],
                tasks: ['uglify', 'jsdoc'],
                options: {
                    nospawn: true
                }
            }
        }
    });

    // Define Tasks
    grunt.registerTask('default', ['watch']);

};
