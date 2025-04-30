add_rules("mode.debug", "mode.release")

package("xmacros")
    set_urls("https://github.com/Goolnn/xmacros.git")
    on_install(function (package)
        import("package.tools.xmake").install(package, {
            "--mode=" .. (package:debug() and "debug" or "release")
        })
    end)
package_end()

add_requires("xmacros")

target("rslike")
    set_kind("headeronly")
    set_languages("clatest")
    set_version("0.1.0")
    add_packages("xmacros")
    add_headerfiles("include/(**.h)")
