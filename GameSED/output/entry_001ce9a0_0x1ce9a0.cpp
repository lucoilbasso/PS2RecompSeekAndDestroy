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

// Function: entry_001ce9a0
// Address: 0x1ce9a0 - 0x1ce9b0
void entry_001ce9a0_0x1ce9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce9a0_0x1ce9a0");
#endif

    ctx->pc = 0x1ce9a0u;

    // 0x1ce9a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9A0u;
    {
        const bool branch_taken_0x1ce9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9a0) {
            ctx->pc = 0x1CE9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE9A0u;
            // 0x1ce9a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE9B0u;
            return;
        }
    }
    ctx->pc = 0x1CE9A8u;
    // 0x1ce9a8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1ce9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce9ac: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x1ce9b0u;
}
