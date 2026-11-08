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

// Function: CtrlObjClose__8WcDaemon
// Address: 0x1e0da0 - 0x1e0de0
void CtrlObjClose__8WcDaemon_0x1e0da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CtrlObjClose__8WcDaemon_0x1e0da0");
#endif

    switch (ctx->pc) {
        case 0x1e0dc8u: goto label_1e0dc8;
        default: break;
    }

    ctx->pc = 0x1e0da0u;

    // 0x1e0da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e0db0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0db4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1e0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e0db8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0DB8u;
    {
        const bool branch_taken_0x1e0db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB8u;
        // 0x1e0dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db8) {
            ctx->pc = 0x1E0DC8u;
            goto label_1e0dc8;
        }
    }
    ctx->pc = 0x1E0DC0u;
    // 0x1e0dc0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1E0DC0u;
    SET_GPR_U32(ctx, 31, 0x1E0DC8u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1E0DC0u, 0x1E0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DC8u;
label_1e0dc8:
    // 0x1e0dc8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1e0dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1e0dcc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e0dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1e0dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DD8u;
        // 0x1e0ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0DE0u;
}
