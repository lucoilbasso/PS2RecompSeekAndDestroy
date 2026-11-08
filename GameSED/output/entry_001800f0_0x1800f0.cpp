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

// Function: entry_001800f0
// Address: 0x1800f0 - 0x1800f8
void entry_001800f0_0x1800f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001800f0_0x1800f0");
#endif

    ctx->pc = 0x1800f0u;

    // 0x1800f0: 0x55a00001  bnel        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1800F0u;
    {
        const bool branch_taken_0x1800f0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1800f0) {
            ctx->pc = 0x1800F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800F0u;
            // 0x1800f4: 0x358c0004  ori         $t4, $t4, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800F8u;
            return;
        }
    }
    ctx->pc = 0x1800F8u;
}
