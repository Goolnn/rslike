package("xmacros")
    set_kind("library", {headeronly = true})
    set_description("The xmacros package")

    add_urls("https://github.com/Goolnn/xmacros.git")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)
