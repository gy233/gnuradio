/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(noise_type.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(00c3c3c56203c51ca56f93b2e9a0d21a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/analog/noise_type.h>

void bind_noise_type(py::module& m)
{

    py::enum_<gr::analog::noise_type_t>(m, "noise_type_t")
        .value("GR_UNIFORM", gr::analog::GR_UNIFORM)     // 200
        .value("GR_GAUSSIAN", gr::analog::GR_GAUSSIAN)   // 201
        .value("GR_LAPLACIAN", gr::analog::GR_LAPLACIAN) // 202
        .value("GR_IMPULSE", gr::analog::GR_IMPULSE)     // 203
        .export_values();
}
