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

// Function: entry_001b0c58
// Address: 0x1b0c58 - 0x1b0c68
void entry_001b0c58_0x1b0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0c58_0x1b0c58");
#endif

    ctx->pc = 0x1b0c58u;

    // 0x1b0c58: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0C58u;
    {
        const bool branch_taken_0x1b0c58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C58u;
        // 0x1b0c5c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c58) {
            ctx->pc = 0x1B0C68u;
            return;
        }
    }
    ctx->pc = 0x1B0C60u;
    // 0x1b0c60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0C60u;
    {
        const bool branch_taken_0x1b0c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C60u;
        // 0x1b0c64: 0x8671fff8  lh          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c60) {
            ctx->pc = 0x1B0C6Cu;
            return;
        }
    }
    ctx->pc = 0x1B0C68u;
}
