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

// Function: entry_00150160
// Address: 0x150160 - 0x150170
void entry_00150160_0x150160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150160_0x150160");
#endif

    ctx->pc = 0x150160u;

    // 0x150160: 0x54c00020  bnel        $a2, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x150160u;
    {
        const bool branch_taken_0x150160 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x150160) {
            ctx->pc = 0x150164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150160u;
            // 0x150164: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x150168u;
    // 0x150168: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x150168u;
    {
        const bool branch_taken_0x150168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150168) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x150170u;
}
