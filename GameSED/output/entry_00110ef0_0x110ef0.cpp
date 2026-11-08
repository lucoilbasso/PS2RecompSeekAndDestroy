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

// Function: entry_00110ef0
// Address: 0x110ef0 - 0x110ef8
void entry_00110ef0_0x110ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ef0_0x110ef0");
#endif

    ctx->pc = 0x110ef0u;

    // 0x110ef0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x110EF0u;
    {
        const bool branch_taken_0x110ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EF0u;
        // 0x110ef4: 0x2694fffa  addiu       $s4, $s4, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ef0) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110EF8u;
}
