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

// Function: TargetRelate__8WcDaemonP8WcDaemon
// Address: 0x19a0c8 - 0x19a10c
void TargetRelate__8WcDaemonP8WcDaemon_0x19a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TargetRelate__8WcDaemonP8WcDaemon_0x19a0c8");
#endif

    switch (ctx->pc) {
        case 0x19a0e0u: goto label_19a0e0;
        case 0x19a0fcu: goto label_19a0fc;
        default: break;
    }

    ctx->pc = 0x19a0c8u;

    // 0x19a0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a0d8: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x19A0D8u;
    SET_GPR_U32(ctx, 31, 0x19A0E0u);
    ctx->pc = 0x19A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0D8u;
    // 0x19a0dc: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x19A0D8u, 0x19A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0E0u;
label_19a0e0:
    // 0x19a0e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x19a0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19a0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0e8: 0x24a58498  addiu       $a1, $a1, -0x7B68
    ctx->pc = 0x19a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935704));
    // 0x19a0ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A0ECu;
    {
        const bool branch_taken_0x19a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0ECu;
        // 0x19a0f0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0ec) {
            ctx->pc = 0x19A0FCu;
            goto label_19a0fc;
        }
    }
    ctx->pc = 0x19A0F4u;
    // 0x19a0f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19A0F4u;
    SET_GPR_U32(ctx, 31, 0x19A0FCu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19A0F4u, 0x19A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0FCu;
label_19a0fc:
    // 0x19a0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a104: 0x3e00008  jr          $ra
    ctx->pc = 0x19A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A104u;
        // 0x19a108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A10Cu;
}
