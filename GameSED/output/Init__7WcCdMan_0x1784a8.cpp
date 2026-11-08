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

// Function: Init__7WcCdMan
// Address: 0x1784a8 - 0x1784dc
void Init__7WcCdMan_0x1784a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcCdMan_0x1784a8");
#endif

    switch (ctx->pc) {
        case 0x1784d0u: goto label_1784d0;
        default: break;
    }

    ctx->pc = 0x1784a8u;

    // 0x1784a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1784a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1784acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1784b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1784b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1784b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1784b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1784b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1784b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1784bc: 0xac401040  sw          $zero, 0x1040($v0)
    ctx->pc = 0x1784bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4160), GPR_U32(ctx, 0));
    // 0x1784c0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1784c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1784c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1784c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1784c8: 0xc05e138  jal         func_1784E0
    ctx->pc = 0x1784C8u;
    SET_GPR_U32(ctx, 31, 0x1784D0u);
    ctx->pc = 0x1784CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1784C8u;
    // 0x1784cc: 0xac401044  sw          $zero, 0x1044($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784E0u, 0x1784C8u, 0x1784D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784D0u;
label_1784d0:
    // 0x1784d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1784d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1784d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1784D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784D4u;
        // 0x1784d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1784D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784DCu;
}
