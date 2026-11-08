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

// Function: entry_001c7868
// Address: 0x1c7868 - 0x1c7880
void entry_001c7868_0x1c7868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7868_0x1c7868");
#endif

    ctx->pc = 0x1c7868u;

    // 0x1c7868: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c786c: 0x640000c  bltz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C786Cu;
    {
        const bool branch_taken_0x1c786c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1C7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C786Cu;
        // 0x1c7870: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c786c) {
            ctx->pc = 0x1C78A0u;
            return;
        }
    }
    ctx->pc = 0x1C7874u;
    // 0x1c7874: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c7874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7878: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x1c7878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c787c: 0x0  nop
    ctx->pc = 0x1c787cu;
    // NOP
    ctx->pc = 0x1c7880u;
}
