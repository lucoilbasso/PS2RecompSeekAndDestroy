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

// Function: entry_00110958
// Address: 0x110958 - 0x110960
void entry_00110958_0x110958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110958_0x110958");
#endif

    ctx->pc = 0x110958u;

    // 0x110958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110958u;
    {
        const bool branch_taken_0x110958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110958u;
        // 0x11095c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110958) {
            ctx->pc = 0x110968u;
            return;
        }
    }
    ctx->pc = 0x110960u;
}
