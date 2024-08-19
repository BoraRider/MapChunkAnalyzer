import os
from glob import glob
import matplotlib.pyplot as plt
import earthpy as et
import earthpy.spatial as es
import earthpy.plot as ep

###############################################################################
# Import Example Data
# -------------------
#
# To get started, make sure your directory is set. Then, create a stack from
# all of the Landsat .tif files (one per band).

# Get data for example
data = et.data.get_data("vignette-landsat")

# Set working directory
os.chdir(os.path.join(et.io.HOME, "earth-analytics"))

# Stack the Landsat 8 bands
# This creates a numpy array with each "layer" representing a single band
# You can use the nodata= parameter to mask nodata values
landsat_path = glob(
    os.path.join(
        "data",
        "vignette-landsat",
        "LC08_L1TP_034032_20160621_20170221_01_T1_sr_band*_crop.tif",
    )
)
landsat_path.sort()
array_stack, meta_data = es.stack(landsat_path, nodata=-9999)

###############################################################################
# Plot All Bands in a Stack
# --------------------------
#
# When you give ``ep.plot_bands()`` a three dimensional numpy array,
# it will plot all layers in the numpy array. You can create unique titles for
# each image by providing a list of titles using the ``title=`` parameter.
# The list must contain the same number of strings as there are bands in the
# stack.

titles = ["Ultra Blue", "Blue", "Green", "Red", "NIR", "SWIR 1", "SWIR 2"]
# sphinx_gallery_thumbnail_number = 1
ep.plot_bands(array_stack, title=titles)
plt.show()
