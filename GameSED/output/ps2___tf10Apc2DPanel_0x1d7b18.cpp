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

// Function: __tf10Apc2DPanel
// Address: 0x1d7b18 - 0x1d7b64
void ps2___tf10Apc2DPanel_0x1d7b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf10Apc2DPanel_0x1d7b18");
#endif

    switch (ctx->pc) {
        case 0x1d7b3cu: goto label_1d7b3c;
        case 0x1d7b50u: goto label_1d7b50;
        default: break;
    }

    ctx->pc = 0x1d7b18u;

    // 0x1d7b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7b1c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d7b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7b24: 0x24500720  addiu       $s0, $v0, 0x720
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1824));
    // 0x1d7b28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410720u));
    // 0x1d7b2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7B2Cu;
    {
        const bool branch_taken_0x1d7b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B2Cu;
        // 0x1d7b30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b2c) {
            ctx->pc = 0x1D7B50u;
            goto label_1d7b50;
        }
    }
    ctx->pc = 0x1D7B34u;
    // 0x1d7b34: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1D7B34u;
    SET_GPR_U32(ctx, 31, 0x1D7B3Cu);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1D7B34u, 0x1D7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B3Cu;
label_1d7b3c:
    // 0x1d7b3c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7b40: 0x24a53c48  addiu       $a1, $a1, 0x3C48
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15432));
    // 0x1d7b44: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1d7b48: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D7B48u;
    SET_GPR_U32(ctx, 31, 0x1D7B50u);
    ctx->pc = 0x1D7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B48u;
    // 0x1d7b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D7B48u, 0x1D7B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B50u;
label_1d7b50:
    // 0x1d7b50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B5Cu;
        // 0x1d7b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7B64u;
}
