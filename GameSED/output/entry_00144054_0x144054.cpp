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

// Function: entry_00144054
// Address: 0x144054 - 0x14408c
void entry_00144054_0x144054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144054_0x144054");
#endif

    switch (ctx->pc) {
        case 0x144064u: goto label_144064;
        case 0x14406cu: goto label_14406c;
        default: break;
    }

    ctx->pc = 0x144054u;

    // 0x144054: 0x681ffe0  bgez        $s4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x144054u;
    {
        const bool branch_taken_0x144054 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x144058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144054u;
        // 0x144058: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144054) {
            ctx->pc = 0x143FD8u;
            return;
        }
    }
    ctx->pc = 0x14405Cu;
    // 0x14405c: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x14405Cu;
    SET_GPR_U32(ctx, 31, 0x144064u);
    ctx->pc = 0x144060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14405Cu;
    // 0x144060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x14405Cu, 0x144064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144064u;
label_144064:
    // 0x144064: 0xc050d2e  jal         func_1434B8
    ctx->pc = 0x144064u;
    SET_GPR_U32(ctx, 31, 0x14406Cu);
    ctx->pc = 0x144068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144064u;
    // 0x144068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B8u, 0x144064u, 0x14406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14406Cu;
label_14406c:
    // 0x14406c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14406cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x144070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144074: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x144074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144078: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x144078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14407c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14407cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144080: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x144080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x144084: 0x3e00008  jr          $ra
    ctx->pc = 0x144084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144084u;
        // 0x144088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14408Cu;
}
