/**
 * sage_loadlwo.h
 * 
 * SAGE (Simple Amiga Game Engine) project
 * Ligthwave object loading
 * 
 * @author Fabrice Labrador <fabrice.labrador@gmail.com>
 * @version 24.2 June 2024 (updated: 27/06/2024)
 */

#ifndef _SAGE_LOADLWO_H_
#define _SAGE_LOADLWO_H_

#include <exec/types.h>
#include <dos/dos.h>

#include <sage/sage_3dentity.h>

#define S3DE_LWOBTAG          0x4C574F42
#define S3DE_LWOBOFFSET       0x8
#define S3DE_SRFSTAG          0x53524653
#define S3DE_PNTSTAG          0x504E5453
#define S3DE_POLSTAG          0x504F4C53
#define S3DE_SURFTAG          0x53555246

#define S3DE_LWOZOOM          10.0

/** LWO structures */

typedef struct {
  STRPTR name;
  APTR next;
} SAGE_LWOSurface;

typedef struct {
  FLOAT x, y, z;
} SAGE_LWOPoint;

typedef struct {
  WORD nb_points;
  WORD p1, p2, p3, p4;
  WORD surface;
} SAGE_LWOPolygon;

typedef struct {
  WORD nb_surfaces;
  SAGE_LWOSurface *surfaces;
  WORD nb_points;
  SAGE_LWOPoint *points;
  WORD nb_polygons;
  SAGE_LWOPolygon *polygons;
} SAGE_LightwaveObject;

/** Load a LWO file */
SAGE_Entity *SAGE_LoadLWO(BPTR);

#endif
