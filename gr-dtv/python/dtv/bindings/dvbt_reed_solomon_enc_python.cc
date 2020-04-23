/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/dvbt_reed_solomon_enc.h>
// pydoc.h is automatically generated in the build directory
#include <dvbt_reed_solomon_enc_pydoc.h>

void bind_dvbt_reed_solomon_enc(py::module& m)
{

    using dvbt_reed_solomon_enc = ::gr::dtv::dvbt_reed_solomon_enc;


    py::class_<dvbt_reed_solomon_enc,
               gr::block,
               gr::basic_block,
               std::shared_ptr<dvbt_reed_solomon_enc>>(
        m, "dvbt_reed_solomon_enc", D(dvbt_reed_solomon_enc))

        .def(py::init(&dvbt_reed_solomon_enc::make),
             py::arg("p"),
             py::arg("m"),
             py::arg("gfpoly"),
             py::arg("n"),
             py::arg("k"),
             py::arg("t"),
             py::arg("s"),
             py::arg("blocks"),
             D(dvbt_reed_solomon_enc, make))


        ;
}
