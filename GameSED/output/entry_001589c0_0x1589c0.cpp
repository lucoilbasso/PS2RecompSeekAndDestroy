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

// Function: entry_001589c0
// Address: 0x1589c0 - 0x158a08
void entry_001589c0_0x1589c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001589c0_0x1589c0");
#endif

    ctx->pc = 0x1589c0u;

    // 0x1589c0: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1589c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1589c4: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1589c4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1589c8: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x1589c8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1589cc: 0x784a0020  lq          $t2, 0x20($v0)
    ctx->pc = 0x1589ccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1589d0: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x1589d0u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1589d4: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x1589d4u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1589d8: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x1589d8u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1589dc: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x1589dcu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1589e0: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x1589e0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1589e4: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x1589e4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x1589e8: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x1589e8u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x1589ec: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x1589ecu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x1589f0: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x1589f0u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x1589f4: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x1589f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x1589f8: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x1589f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x1589fc: 0x7c6a0020  sq          $t2, 0x20($v1)
    ctx->pc = 0x1589fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 10));
    // 0x158a00: 0x7c6b0030  sq          $t3, 0x30($v1)
    ctx->pc = 0x158a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 11));
    // 0x158a04: 0x260303e0  addiu       $v1, $s0, 0x3E0
    ctx->pc = 0x158a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    ctx->pc = 0x158a08u;
}
