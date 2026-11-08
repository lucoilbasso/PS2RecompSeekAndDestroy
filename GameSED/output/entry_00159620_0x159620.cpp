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

// Function: entry_00159620
// Address: 0x159620 - 0x159668
void entry_00159620_0x159620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159620_0x159620");
#endif

    ctx->pc = 0x159620u;

    // 0x159620: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x159620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x159624: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x159624u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159628: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x159628u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15962c: 0x784a0020  lq          $t2, 0x20($v0)
    ctx->pc = 0x15962cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x159630: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x159630u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x159634: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x159634u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x159638: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x159638u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15963c: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x15963cu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x159640: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x159640u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x159644: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x159644u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x159648: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x159648u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x15964c: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x15964cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x159650: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x159650u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x159654: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x159654u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x159658: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x159658u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x15965c: 0x7c6a0020  sq          $t2, 0x20($v1)
    ctx->pc = 0x15965cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 10));
    // 0x159660: 0x7c6b0030  sq          $t3, 0x30($v1)
    ctx->pc = 0x159660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 11));
    // 0x159664: 0x26a503e0  addiu       $a1, $s5, 0x3E0
    ctx->pc = 0x159664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
    ctx->pc = 0x159668u;
}
