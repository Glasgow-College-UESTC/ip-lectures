// engine.js

var md = require('markdown-it')({
    html: true,
    linkify: true,
    typography: true
}).use(require('markdown-it-video'), // <-- this use(package_name) is required 
    {
        youtube: {
            width: 480,
            height: 360
        },
        vimeo: {
            width: 480,
            height: 360
        },
        vine: {
            width: 480,
            height: 360,
            embed: 'simple'
        },
        prezi: {
            width: 480,
            height: 360
        }
    })
