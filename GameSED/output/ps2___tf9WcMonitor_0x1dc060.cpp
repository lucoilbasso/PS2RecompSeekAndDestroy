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

// Function: __tf9WcMonitor
// Address: 0x1dc060 - 0x1dc0ac
void ps2___tf9WcMonitor_0x1dc060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9WcMonitor_0x1dc060");
#endif

    switch (ctx->pc) {
        case 0x1dc084u: goto label_1dc084;
        case 0x1dc098u: goto label_1dc098;
        default: break;
    }

    ctx->pc = 0x1dc060u;

    // 0x1dc060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc064: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dc068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc06c: 0x24501470  addiu       $s0, $v0, 0x1470
    ctx->pc = 0x1dc06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x1dc070: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc070u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411470u));
    // 0x1dc074: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC074u;
    {
        const bool branch_taken_0x1dc074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC074u;
        // 0x1dc078: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc074) {
            ctx->pc = 0x1DC098u;
            goto label_1dc098;
        }
    }
    ctx->pc = 0x1DC07Cu;
    // 0x1dc07c: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1DC07Cu;
    SET_GPR_U32(ctx, 31, 0x1DC084u);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1DC07Cu, 0x1DC084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC084u;
label_1dc084:
    // 0x1dc084: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dc084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dc088: 0x24a578e8  addiu       $a1, $a1, 0x78E8
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30952));
    // 0x1dc08c: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1dc08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1dc090: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DC090u;
    SET_GPR_U32(ctx, 31, 0x1DC098u);
    ctx->pc = 0x1DC094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC090u;
    // 0x1dc094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DC090u, 0x1DC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC098u;
label_1dc098:
    // 0x1dc098: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc09c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc0a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0A4u;
        // 0x1dc0a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC0ACu;
}
