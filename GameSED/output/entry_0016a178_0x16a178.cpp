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

// Function: entry_0016a178
// Address: 0x16a178 - 0x16a180
void entry_0016a178_0x16a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a178_0x16a178");
#endif

    ctx->pc = 0x16a178u;

    // 0x16a178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16A178u;
    {
        const bool branch_taken_0x16a178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A178u;
        // 0x16a17c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a178) {
            ctx->pc = 0x16A18Cu;
            return;
        }
    }
    ctx->pc = 0x16A180u;
}
