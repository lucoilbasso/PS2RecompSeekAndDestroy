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

// Function: entry_00155f20
// Address: 0x155f20 - 0x155f28
void entry_00155f20_0x155f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155f20_0x155f20");
#endif

    ctx->pc = 0x155f20u;

    // 0x155f20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155F20u;
    {
        const bool branch_taken_0x155f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F20u;
        // 0x155f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f20) {
            ctx->pc = 0x155F30u;
            return;
        }
    }
    ctx->pc = 0x155F28u;
}
