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

// Function: ApMCardInitLocal__FP8ApcMCardP22W_MCARD_INIT_PARAMETER
// Address: 0x11c888 - 0x11c8b4
void ApMCardInitLocal__FP8ApcMCardP22W_MCARD_INIT_PARAMETER_0x11c888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMCardInitLocal__FP8ApcMCardP22W_MCARD_INIT_PARAMETER_0x11c888");
#endif

    switch (ctx->pc) {
        case 0x11c8a8u: goto label_11c8a8;
        default: break;
    }

    ctx->pc = 0x11c888u;

    // 0x11c888: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11c888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c88c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c894: 0x24a64e00  addiu       $a2, $a1, 0x4E00
    ctx->pc = 0x11c894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 19968));
    // 0x11c898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c89c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c8a0: 0xc0460e6  jal         func_118398
    ctx->pc = 0x11C8A0u;
    SET_GPR_U32(ctx, 31, 0x11C8A8u);
    ctx->pc = 0x11C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8A0u;
    // 0x11c8a4: 0x24a54600  addiu       $a1, $a1, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118398u, 0x11C8A0u, 0x11C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8A8u;
label_11c8a8:
    // 0x11c8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11C8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8ACu;
        // 0x11c8b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C8B4u;
}
