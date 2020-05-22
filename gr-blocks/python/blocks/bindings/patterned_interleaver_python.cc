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
/* BINDTOOL_HEADER_FILE(patterned_interleaver.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(82fb740fd149d52a83278c47a2685541)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/patterned_interleaver.h>
// pydoc.h is automatically generated in the build directory
#include <patterned_interleaver_pydoc.h>

void bind_patterned_interleaver(py::module& m)
{

    using patterned_interleaver = ::gr::blocks::patterned_interleaver;


    py::class_<patterned_interleaver,
               gr::block,
               gr::basic_block,
               std::shared_ptr<patterned_interleaver>>(
        m, "patterned_interleaver", D(patterned_interleaver))

        .def(py::init(&patterned_interleaver::make),
             py::arg("itemsize"),
             py::arg("pattern"),
             D(patterned_interleaver, make))


        ;
}
