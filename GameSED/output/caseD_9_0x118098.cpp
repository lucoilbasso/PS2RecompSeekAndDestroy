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

// Function: caseD_9
// Address: 0x118098 - 0x1180a8
void caseD_9_0x118098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x118098");
#endif

    ctx->pc = 0x118098u;

    // 0x118098: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11809c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x1180a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1180A0u;
    {
        const bool branch_taken_0x1180a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180A0u;
        // 0x1180a4: 0x24450180  addiu       $a1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180a0) {
            ctx->pc = 0x1180C4u;
            return;
        }
    }
    ctx->pc = 0x1180A8u;
}
