/**
 * sage_maths.h
 * 
 * SAGE (Simple Amiga Game Engine) project
 * Mathematic functions
 * 
 * @author Fabrice Labrador <fabrice.labrador@gmail.com>
 * @version 24.2 June 2024 (updated: 27/06/2024)
 */

#ifndef _SAGE_MATHS_H_
#define _SAGE_MATHS_H_

#include <math.h>
#include <exec/types.h>

#define DEGTORAD(x)           ((x)*PI/180.0)        // Degree to radian
#define SMTH_PRECISION        4                     // Degree precision (1/precision by degree)
#define SMTH_ANGLE_360        360*SMTH_PRECISION    // 360 degree

/** SAGE vector */
typedef struct {
  FLOAT x, y, z;
} SAGE_Vector;

/** SAGE matrix 3x3 */
typedef struct {
  FLOAT m11, m12, m13;
  FLOAT m21, m22, m23;
  FLOAT m31, m32, m33;
} SAGE_Matrix;

/** SAGE vector 4 */
typedef struct {
  FLOAT x, y, z, w;
} SAGE_Vector4;

/** SAGE matrix 4x4 */
typedef struct {
  FLOAT m11, m12, m13, m14;
  FLOAT m21, m22, m23, m24;
  FLOAT m31, m32, m33, m34;
  FLOAT m41, m42, m43, m44;
} SAGE_Matrix4;

/** Initialize trigonometry arrays */
VOID SAGE_InitFastTrigonometry(VOID);

/** Get fast Sine value */
FLOAT SAGE_FastSine(WORD);

/** Get fast Cosine value */
FLOAT SAGE_FastCosine(WORD);

/** Get fast Tangent value */
FLOAT SAGE_FastTangent(WORD);

/** Calculate vector dot product */
FLOAT SAGE_DotProduct(SAGE_Vector *, SAGE_Vector *);

/** Calculate vector cross product */
VOID SAGE_CrossProduct(SAGE_Vector *, SAGE_Vector *, SAGE_Vector *);

/** Normalize a vector */
VOID SAGE_Normalize(SAGE_Vector *);

/** Multiply a vector by a matrix */
VOID SAGE_VectorMatrix(SAGE_Vector *, SAGE_Vector *, SAGE_Matrix *);

/** Set a matrix to zero */
VOID SAGE_ZeroMatrix(SAGE_Matrix *);

/** Set a matrix4 to zero */
VOID SAGE_ZeroMatrix4(SAGE_Matrix4 *);

/** Set a matrix to identity */
VOID SAGE_IdentityMatrix(SAGE_Matrix *);

/** Set a matrix4 to identity */
VOID SAGE_IdentityMatrix4(SAGE_Matrix4 *);

/** Multiply two matrix */
VOID SAGE_MultiplyMatrix(SAGE_Matrix *, SAGE_Matrix *, SAGE_Matrix *);

/** Multiply two matrix4 */
VOID SAGE_MultiplyMatrix4(SAGE_Matrix4 *, SAGE_Matrix4 *, SAGE_Matrix4 *);

#endif
