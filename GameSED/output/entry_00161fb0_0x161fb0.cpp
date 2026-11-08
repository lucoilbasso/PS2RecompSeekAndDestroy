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

// Function: entry_00161fb0
// Address: 0x161fb0 - 0x161fc8
void entry_00161fb0_0x161fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161fb0_0x161fb0");
#endif

    ctx->pc = 0x161fb0u;

    // 0x161fb0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x161FB0u;
    {
        const bool branch_taken_0x161fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161fb0) {
            ctx->pc = 0x161FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161FB0u;
            // 0x161fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161FC8u;
            return;
        }
    }
    ctx->pc = 0x161FB8u;
    // 0x161fb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161fbc: 0x8d6301b4  lw          $v1, 0x1B4($t3)
    ctx->pc = 0x161fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 436)));
    // 0x161fc0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161fc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x161fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x161fc8u;
}
