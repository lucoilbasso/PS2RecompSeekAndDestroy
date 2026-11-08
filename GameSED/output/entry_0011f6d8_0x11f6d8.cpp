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

// Function: entry_0011f6d8
// Address: 0x11f6d8 - 0x11f6e0
void entry_0011f6d8_0x11f6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f6d8_0x11f6d8");
#endif

    ctx->pc = 0x11f6d8u;

    // 0x11f6d8: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x11F6D8u;
    {
        const bool branch_taken_0x11f6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6D8u;
        // 0x11f6dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6d8) {
            ctx->pc = 0x11F4F8u;
            return;
        }
    }
    ctx->pc = 0x11F6E0u;
}
