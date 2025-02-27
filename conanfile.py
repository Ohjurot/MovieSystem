from conan import ConanFile

class MoxPPRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "PremakeDeps"

    def requirements(self):
        self.requires("wxwidgets/3.2.6")    # UI
        self.requires("cpr/1.11.1")         # Web/API Calls
        self.requires("sqlitecpp/3.3.2")    # DB (for project files / data)
        self.requires("libcurl/8.11.1")     # Explicit curl version for cpr
        self.requires("openssl/3.4.1")      # Explicit openssl

    def configure(self):
        self.options["wxwidgets"].jpeg = "mozjpeg"
        self.options["wxwidgets"].opengl = False
        self.options["wxwidgets"].cairo = False

        self.options["cpr"].with_ssl = "openssl"

        self.options["libtiff"].jpeg = "mozjpeg"
        self.options["libtiff"].jbig = False
        self.options["libtiff"].lzma = False
