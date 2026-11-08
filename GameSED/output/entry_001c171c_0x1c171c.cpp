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

// Function: entry_001c171c
// Address: 0x1c171c - 0x1c1734
void entry_001c171c_0x1c171c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c171c_0x1c171c");
#endif

    ctx->pc = 0x1c171cu;

    // 0x1c171c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c171cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1c1720: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c1724: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x1c1724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c1728: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1c1728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1c172c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c172cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c1730: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1c1730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1c1734u;
}
