﻿// guids.h: definitions of GUIDs/IIDs/CLSIDs used in this VsPackage

/*
Do not use #pragma once, as this file needs to be included twice.  Once to declare the externs
for the GUIDs, and again right after including initguid.h to actually define the GUIDs.
*/


// guidPersistanceSlot ID for the Tool Window
// { c85c59d5-310d-49c6-85e3-42e2aedd7634 }
#define guidVSPackage2PersistenceSlot { 0xC85C59D5, 0x310D, 0x49C6, { 0x85, 0xE3, 0x42, 0xE2, 0xAE, 0xDD, 0x76, 0x34 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_guidPersistanceSlot, 
0xC85C59D5, 0x310D, 0x49C6, 0x85, 0xE3, 0x42, 0xE2, 0xAE, 0xDD, 0x76, 0x34 );
#endif


// package guid
// { dda4de06-4153-4b1b-8f2d-479bf90084e6 }
#define guidVSPackage2Pkg { 0xDDA4DE06, 0x4153, 0x4B1B, { 0x8F, 0x2D, 0x47, 0x9B, 0xF9, 0x0, 0x84, 0xE6 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_VSPackage2,
0xDDA4DE06, 0x4153, 0x4B1B, 0x8F, 0x2D, 0x47, 0x9B, 0xF9, 0x0, 0x84, 0xE6 );
#endif

// Command set guid for our commands (used with IOleCommandTarget)
// { 3b646340-11b7-43c9-92e3-fac80f926840 }
#define guidVSPackage2CmdSet { 0x3B646340, 0x11B7, 0x43C9, { 0x92, 0xE3, 0xFA, 0xC8, 0xF, 0x92, 0x68, 0x40 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_VSPackage2CmdSet, 
0x3B646340, 0x11B7, 0x43C9, 0x92, 0xE3, 0xFA, 0xC8, 0xF, 0x92, 0x68, 0x40 );
#endif

//Guid for the image list referenced in the VSCT file
// { db90d667-4e15-465a-9674-5cefe9e2bf34 }
#define guidImages { 0xDB90D667, 0x4E15, 0x465A, { 0x96, 0x74, 0x5C, 0xEF, 0xE9, 0xE2, 0xBF, 0x34 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_Images, 
0xDB90D667, 0x4E15, 0x465A, 0x96, 0x74, 0x5C, 0xEF, 0xE9, 0xE2, 0xBF, 0x34 );
#endif


// Guid for the Editor Factory
// { 46a47d27-bea2-4de5-b625-9d4729942a46 }
#define guidVSPackage2EditorFactory { 0x46A47D27, 0xBEA2, 0x4DE5, { 0xB6, 0x25, 0x9D, 0x47, 0x29, 0x94, 0x2A, 0x46 } } 
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_VSPackage2EditorFactory, 
0x46A47D27, 0xBEA2, 0x4DE5, 0xB6, 0x25, 0x9D, 0x47, 0x29, 0x94, 0x2A, 0x46 ); 
#endif

// Guid for the Editor Document (the document is the actual editor)
// { 5bbb7e02-4582-41f8-87bf-85cedb4e0d46 }
#define guidVSPackage2EditorDocument { 0x5BBB7E02, 0x4582, 0x41F8, { 0x87, 0xBF, 0x85, 0xCE, 0xDB, 0x4E, 0xD, 0x46 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_VSPackage2EditorDocument, 
0x5BBB7E02, 0x4582, 0x41F8, 0x87, 0xBF, 0x85, 0xCE, 0xDB, 0x4E, 0xD, 0x46 );
#endif

