#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00185450
// Address: 0x185450 - 0x1854ac
void entry_00185450_0x185450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185450_0x185450");
#endif

    ctx->pc = 0x185450u;

    // 0x185450: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x185450u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185454: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x185454u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x185458: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x185458u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18545c: 0x78e90010  lq          $t1, 0x10($a3)
    ctx->pc = 0x18545cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x185460: 0x78ea0020  lq          $t2, 0x20($a3)
    ctx->pc = 0x185460u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x185464: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x185464u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x185468: 0x4bc7422c  vsub.xyz    $vf8, $vf8, $vf7
    ctx->pc = 0x185468u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18546c: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x18546cu;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x185470: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x185470u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x185474: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x185474u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x185478: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x185478u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x18547c: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x18547cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x185480: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x185480u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x185484: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x185484u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x185488: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x185488u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x18548c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x18548cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x185490: 0x48a92800  qmtc2.ni    $t1, $vf5
    ctx->pc = 0x185490u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x185494: 0x48aa3000  qmtc2.ni    $t2, $vf6
    ctx->pc = 0x185494u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x185498: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x185498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x18549c: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x18549cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1854a0: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x1854a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1854a4: 0xf8c80000  sqc2        $vf8, 0x0($a2)
    ctx->pc = 0x1854a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1854a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1854a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1854acu;
}
