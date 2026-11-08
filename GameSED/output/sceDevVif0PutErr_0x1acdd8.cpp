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

// Function: sceDevVif0PutErr
// Address: 0x1acdd8 - 0x1acdf8
void sceDevVif0PutErr_0x1acdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVif0PutErr_0x1acdd8");
#endif

    ctx->pc = 0x1acdd8u;

    // 0x1acdd8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1acdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1acddc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1acddcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1acde0: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1acde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1acde4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1acde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1acde8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1acde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1acdec: 0x34633820  ori         $v1, $v1, 0x3820
    ctx->pc = 0x1acdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14368);
    // 0x1acdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDF0u;
        // 0x1acdf4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACDF8u;
}
