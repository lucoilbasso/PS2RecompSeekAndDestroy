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

// Function: entry_001b0d5c
// Address: 0x1b0d5c - 0x1b0d7c
void entry_001b0d5c_0x1b0d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0d5c_0x1b0d5c");
#endif

    ctx->pc = 0x1b0d5cu;

    // 0x1b0d5c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1b0d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x1b0d60: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0D60u;
    {
        const bool branch_taken_0x1b0d60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D60u;
        // 0x1b0d64: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d60) {
            ctx->pc = 0x1B0D7Cu;
            return;
        }
    }
    ctx->pc = 0x1B0D68u;
    // 0x1b0d68: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1b0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b0d6c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1b0d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x1b0d70: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1b0d70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0d74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0D74u;
    {
        const bool branch_taken_0x1b0d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D74u;
        // 0x1b0d78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d74) {
            ctx->pc = 0x1B0DB8u;
            return;
        }
    }
    ctx->pc = 0x1B0D7Cu;
}
