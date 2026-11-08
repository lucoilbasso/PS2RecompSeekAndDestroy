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

// Function: __tf8WcDaemon
// Address: 0x1e0c38 - 0x1e0c84
void ps2___tf8WcDaemon_0x1e0c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8WcDaemon_0x1e0c38");
#endif

    switch (ctx->pc) {
        case 0x1e0c5cu: goto label_1e0c5c;
        case 0x1e0c70u: goto label_1e0c70;
        default: break;
    }

    ctx->pc = 0x1e0c38u;

    // 0x1e0c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0c3c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e0c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0c44: 0x24501cb0  addiu       $s0, $v0, 0x1CB0
    ctx->pc = 0x1e0c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7344));
    // 0x1e0c48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411CB0u));
    // 0x1e0c4c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0C4Cu;
    {
        const bool branch_taken_0x1e0c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C4Cu;
        // 0x1e0c50: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c4c) {
            ctx->pc = 0x1E0C70u;
            goto label_1e0c70;
        }
    }
    ctx->pc = 0x1E0C54u;
    // 0x1e0c54: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1E0C54u;
    SET_GPR_U32(ctx, 31, 0x1E0C5Cu);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1E0C54u, 0x1E0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0C5Cu;
label_1e0c5c:
    // 0x1e0c5c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e0c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e0c60: 0x24a584a8  addiu       $a1, $a1, -0x7B58
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935720));
    // 0x1e0c64: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1e0c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1e0c68: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E0C68u;
    SET_GPR_U32(ctx, 31, 0x1E0C70u);
    ctx->pc = 0x1E0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0C68u;
    // 0x1e0c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E0C68u, 0x1E0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0C70u;
label_1e0c70:
    // 0x1e0c70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C7Cu;
        // 0x1e0c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0C84u;
}
