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

// Function: entry_00114228
// Address: 0x114228 - 0x114234
void entry_00114228_0x114228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114228_0x114228");
#endif

    ctx->pc = 0x114228u;

    // 0x114228: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x114228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11422c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11422Cu;
    {
        const bool branch_taken_0x11422c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x114230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11422Cu;
        // 0x114230: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11422c) {
            ctx->pc = 0x114250u;
            return;
        }
    }
    ctx->pc = 0x114234u;
}
