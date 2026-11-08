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

// Function: entry_001b0bac
// Address: 0x1b0bac - 0x1b0bcc
void entry_001b0bac_0x1b0bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0bac_0x1b0bac");
#endif

    ctx->pc = 0x1b0bacu;

    // 0x1b0bac: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1b0bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x1b0bb0: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0BB0u;
    {
        const bool branch_taken_0x1b0bb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BB0u;
        // 0x1b0bb4: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0bb0) {
            ctx->pc = 0x1B0BCCu;
            return;
        }
    }
    ctx->pc = 0x1B0BB8u;
    // 0x1b0bb8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1b0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b0bbc: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1b0bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x1b0bc0: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1b0bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0bc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B0BC4u;
    {
        const bool branch_taken_0x1b0bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BC4u;
        // 0x1b0bc8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0bc4) {
            ctx->pc = 0x1B0BF8u;
            return;
        }
    }
    ctx->pc = 0x1B0BCCu;
}
