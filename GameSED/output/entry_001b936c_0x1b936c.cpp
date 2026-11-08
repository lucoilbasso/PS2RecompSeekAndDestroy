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

// Function: entry_001b936c
// Address: 0x1b936c - 0x1b9398
void entry_001b936c_0x1b936c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b936c_0x1b936c");
#endif

    ctx->pc = 0x1b936cu;

    // 0x1b936c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b936cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9370: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B9370u;
    {
        const bool branch_taken_0x1b9370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9370) {
            ctx->pc = 0x1B9374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9370u;
            // 0x1b9374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B93F0u;
            return;
        }
    }
    ctx->pc = 0x1B9378u;
    // 0x1b9378: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9378u;
    {
        const bool branch_taken_0x1b9378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9378) {
            ctx->pc = 0x1B937Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9378u;
            // 0x1b937c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B93C0u;
            return;
        }
    }
    ctx->pc = 0x1B9380u;
    // 0x1b9380: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9380u;
    {
        const bool branch_taken_0x1b9380 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1b9380) {
            ctx->pc = 0x1B9398u;
            return;
        }
    }
    ctx->pc = 0x1B9388u;
    // 0x1b9388: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9388u;
    {
        const bool branch_taken_0x1b9388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9388u;
        // 0x1b938c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9388) {
            ctx->pc = 0x1B93B0u;
            return;
        }
    }
    ctx->pc = 0x1B9390u;
    // 0x1b9390: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B9390u;
    {
        const bool branch_taken_0x1b9390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9390u;
        // 0x1b9394: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9390) {
            ctx->pc = 0x1B93F4u;
            return;
        }
    }
    ctx->pc = 0x1B9398u;
}
