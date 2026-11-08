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

// Function: WImageInitLocal__FP7WcImagePc
// Address: 0x17e488 - 0x17e4ac
void WImageInitLocal__FP7WcImagePc_0x17e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageInitLocal__FP7WcImagePc_0x17e488");
#endif

    switch (ctx->pc) {
        case 0x17e4a0u: goto label_17e4a0;
        default: break;
    }

    ctx->pc = 0x17e488u;

    // 0x17e488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e48c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E48Cu;
    {
        const bool branch_taken_0x17e48c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E48Cu;
        // 0x17e490: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e48c) {
            ctx->pc = 0x17E4A0u;
            goto label_17e4a0;
        }
    }
    ctx->pc = 0x17E494u;
    // 0x17e494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e498: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x17E498u;
    SET_GPR_U32(ctx, 31, 0x17E4A0u);
    ctx->pc = 0x17E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E498u;
    // 0x17e49c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x17E498u, 0x17E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4A0u;
label_17e4a0:
    // 0x17e4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4A4u;
        // 0x17e4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E4ACu;
}
