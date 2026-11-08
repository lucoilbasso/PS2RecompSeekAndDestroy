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

// Function: entry_0014908c
// Address: 0x14908c - 0x149094
void entry_0014908c_0x14908c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014908c_0x14908c");
#endif

    ctx->pc = 0x14908cu;

    // 0x14908c: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14908Cu;
    {
        const bool branch_taken_0x14908c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14908c) {
            ctx->pc = 0x149090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14908Cu;
            // 0x149090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149094u;
            return;
        }
    }
    ctx->pc = 0x149094u;
}
