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

// Function: entry_001b9278
// Address: 0x1b9278 - 0x1b9290
void entry_001b9278_0x1b9278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9278_0x1b9278");
#endif

    ctx->pc = 0x1b9278u;

    // 0x1b9278: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9278u;
    {
        const bool branch_taken_0x1b9278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9278u;
        // 0x1b927c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9278) {
            ctx->pc = 0x1B92B0u;
            return;
        }
    }
    ctx->pc = 0x1B9280u;
    // 0x1b9280: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B9280u;
    {
        const bool branch_taken_0x1b9280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9280u;
        // 0x1b9284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9280) {
            ctx->pc = 0x1B92C0u;
            return;
        }
    }
    ctx->pc = 0x1B9288u;
    // 0x1b9288: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B9288u;
    {
        const bool branch_taken_0x1b9288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9288u;
        // 0x1b928c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9288) {
            ctx->pc = 0x1B92D8u;
            return;
        }
    }
    ctx->pc = 0x1B9290u;
}
