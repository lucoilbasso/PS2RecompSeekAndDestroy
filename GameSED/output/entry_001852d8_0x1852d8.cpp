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

// Function: entry_001852d8
// Address: 0x1852d8 - 0x185324
void entry_001852d8_0x1852d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001852d8_0x1852d8");
#endif

    ctx->pc = 0x1852d8u;

    // 0x1852d8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1852d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1852dc: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1852dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1852e0: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x1852e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x1852e4: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x1852e4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1852e8: 0x78690010  lq          $t1, 0x10($v1)
    ctx->pc = 0x1852e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1852ec: 0x786a0020  lq          $t2, 0x20($v1)
    ctx->pc = 0x1852ecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1852f0: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x1852f0u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1852f4: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x1852f4u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1852f8: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x1852f8u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1852fc: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x1852fcu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x185300: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x185300u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x185304: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x185304u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x185308: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x185308u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x18530c: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x18530cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x185310: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x185310u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x185314: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x185314u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x185318: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x185318u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x18531c: 0x7c4a0020  sq          $t2, 0x20($v0)
    ctx->pc = 0x18531cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 10));
    // 0x185320: 0x7c4b0030  sq          $t3, 0x30($v0)
    ctx->pc = 0x185320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 11));
    ctx->pc = 0x185324u;
}
