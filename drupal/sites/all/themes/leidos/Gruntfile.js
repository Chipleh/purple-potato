module.exports = function (grunt) {
    "use strict";

    require('time-grunt')(grunt);
    require('load-grunt-tasks')(grunt, {
        pattern: ['grunt-*']
    });

    // Project configuration.
    grunt.initConfig({
        pkg: grunt.file.readJSON('package.json'),

        compass: {
            dist: {
                options: {
                    config: 'config.rb',
                    sassDir: 'css/sass',
                    cssDir: 'css'
                }
            }
        },

        watch: {
            css: {
                files: 'css/sass/**/*.scss',
                tasks: ['compass','autoprefixer']
            }
        },

        autoprefixer: {
            options: {
                browsers: ['last 2 version', 'ie 8', 'ie 9'],
                map: true
            },
            // all: {
            //     files: [{
            //         expand: true,
            //         src: 'css/*.css',
            //         dest: ''
            //     }]
            // }
            thisisus: {
                src: 'css/thisisus.css',
                dest: 'css/thisisus.css'
            }
        },
    });

    // Define Tasks
    grunt.registerTask('default', ['watch']);
};
