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

// Function: ApSCDEntError__FP15BsSCDEntControliPci
// Address: 0x105818 - 0x105878
void ApSCDEntError__FP15BsSCDEntControliPci_0x105818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntError__FP15BsSCDEntControliPci_0x105818");
#endif

    switch (ctx->pc) {
        case 0x105850u: goto label_105850;
        case 0x105860u: goto label_105860;
        default: break;
    }

    ctx->pc = 0x105818u;

    // 0x105818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10581c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105820: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x105820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105824: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10582c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105830: 0x8c900028  lw          $s0, 0x28($a0)
    ctx->pc = 0x105830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x105834: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105834u;
    {
        const bool branch_taken_0x105834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x105838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105834u;
        // 0x105838: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105834) {
            ctx->pc = 0x105844u;
            goto label_105844;
        }
    }
    ctx->pc = 0x10583Cu;
    // 0x10583c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x10583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105840: 0x8c50038c  lw          $s0, 0x38C($v0)
    ctx->pc = 0x105840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
label_105844:
    // 0x105844: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x105844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x105848: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x105848u;
    SET_GPR_U32(ctx, 31, 0x105850u);
    ctx->pc = 0x10584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105848u;
    // 0x10584c: 0x24843818  addiu       $a0, $a0, 0x3818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x105848u, 0x105850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105850u;
label_105850:
    // 0x105850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105854: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105858: 0xc068186  jal         func_1A0618
    ctx->pc = 0x105858u;
    SET_GPR_U32(ctx, 31, 0x105860u);
    ctx->pc = 0x10585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105858u;
    // 0x10585c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x105858u, 0x105860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105860u;
label_105860:
    // 0x105860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105864: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105868: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10586c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10586cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105870: 0x3e00008  jr          $ra
    ctx->pc = 0x105870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105870u;
        // 0x105874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105878u;
}
