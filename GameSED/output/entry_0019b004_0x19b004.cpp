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

// Function: entry_0019b004
// Address: 0x19b004 - 0x19b020
void entry_0019b004_0x19b004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b004_0x19b004");
#endif

    ctx->pc = 0x19b004u;

    // 0x19b004: 0x0  nop
    ctx->pc = 0x19b004u;
    // NOP
    // 0x19b008: 0x0  nop
    ctx->pc = 0x19b008u;
    // NOP
    // 0x19b00c: 0x1509fff6  bne         $t0, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19B00Cu;
    {
        const bool branch_taken_0x19b00c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B00Cu;
        // 0x19b010: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b00c) {
            ctx->pc = 0x19AFE8u;
            return;
        }
    }
    ctx->pc = 0x19B014u;
    // 0x19b014: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19B014u;
    {
        const bool branch_taken_0x19b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B014u;
        // 0x19b018: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b014) {
            ctx->pc = 0x19B090u;
            return;
        }
    }
    ctx->pc = 0x19B01Cu;
    // 0x19b01c: 0x0  nop
    ctx->pc = 0x19b01cu;
    // NOP
    ctx->pc = 0x19b020u;
}
