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

// Function: entry_001b1ef8
// Address: 0x1b1ef8 - 0x1b1f20
void entry_001b1ef8_0x1b1ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ef8_0x1b1ef8");
#endif

    ctx->pc = 0x1b1ef8u;

label_1b1ef8:
    // 0x1b1ef8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b1efc: 0x0  nop
    ctx->pc = 0x1b1efcu;
    // NOP
    // 0x1b1f00: 0x0  nop
    ctx->pc = 0x1b1f00u;
    // NOP
    // 0x1b1f04: 0x0  nop
    ctx->pc = 0x1b1f04u;
    // NOP
    // 0x1b1f08: 0x0  nop
    ctx->pc = 0x1b1f08u;
    // NOP
    // 0x1b1f0c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B1F0Cu;
    {
        const bool branch_taken_0x1b1f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b1f0c) {
            ctx->pc = 0x1B1EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1ef8;
        }
    }
    ctx->pc = 0x1B1F14u;
    // 0x1b1f14: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B1F14u;
    {
        const bool branch_taken_0x1b1f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f14) {
            ctx->pc = 0x1B1F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1F14u;
            // 0x1b1f18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1EE0u;
            return;
        }
    }
    ctx->pc = 0x1B1F1Cu;
    // 0x1b1f1c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b1f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1b1f20u;
}
