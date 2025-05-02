package("xmacros")
    set_urls("https://github.com/Goolnn/xmacros.git")
    on_install(function (package)
        import("package.tools.xmake").install(package, {
            "--mode=" .. (package:debug() and "debug" or "release")
        })
    end)
