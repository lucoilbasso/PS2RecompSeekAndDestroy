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

// Function: entry_001418a8
// Address: 0x1418a8 - 0x1418d0
void entry_001418a8_0x1418a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001418a8_0x1418a8");
#endif

    ctx->pc = 0x1418a8u;

    // 0x1418a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1418a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1418ac: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1418acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1418b0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1418b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1418b4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1418b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1418b8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1418b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1418bc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1418bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1418c0: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x1418c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x1418c4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x1418c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1418c8: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x1418c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1418cc: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x1418ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    ctx->pc = 0x1418d0u;
}
