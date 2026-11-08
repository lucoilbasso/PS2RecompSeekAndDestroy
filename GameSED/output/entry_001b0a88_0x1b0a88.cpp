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

// Function: entry_001b0a88
// Address: 0x1b0a88 - 0x1b0ab4
void entry_001b0a88_0x1b0a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0a88_0x1b0a88");
#endif

    ctx->pc = 0x1b0a88u;

label_1b0a88:
    // 0x1b0a88: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1b0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b0a8c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1b0a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b0a90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1b0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b0a94: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b0a98: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b0a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b0a9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b0a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b0aa0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B0AA0u;
    {
        const bool branch_taken_0x1b0aa0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1b0aa0) {
            ctx->pc = 0x1B0A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0a88;
        }
    }
    ctx->pc = 0x1B0AA8u;
    // 0x1b0aa8: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1B0AA8u;
    {
        const bool branch_taken_0x1b0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AA8u;
        // 0x1b0aac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0aa8) {
            ctx->pc = 0x1B09F8u;
            return;
        }
    }
    ctx->pc = 0x1B0AB0u;
    // 0x1b0ab0: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x1b0ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->pc = 0x1b0ab4u;
}
