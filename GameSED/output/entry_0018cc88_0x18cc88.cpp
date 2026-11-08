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

// Function: entry_0018cc88
// Address: 0x18cc88 - 0x18cc90
void entry_0018cc88_0x18cc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cc88_0x18cc88");
#endif

    ctx->pc = 0x18cc88u;

    // 0x18cc88: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x18CC88u;
    {
        const bool branch_taken_0x18cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC88u;
        // 0x18cc8c: 0x431804  sllv        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc88) {
            ctx->pc = 0x18CC14u;
            return;
        }
    }
    ctx->pc = 0x18CC90u;
}
