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

// Function: videoDecDelete
// Address: 0x1717b0 - 0x1717e4
void videoDecDelete_0x1717b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecDelete_0x1717b0");
#endif

    switch (ctx->pc) {
        case 0x1717c8u: goto label_1717c8;
        case 0x1717d0u: goto label_1717d0;
        default: break;
    }

    ctx->pc = 0x1717b0u;

    // 0x1717b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1717b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1717b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1717b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1717b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1717b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1717bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1717c0: 0xc05d69a  jal         func_175A68
    ctx->pc = 0x1717C0u;
    SET_GPR_U32(ctx, 31, 0x1717C8u);
    ctx->pc = 0x1717C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717C0u;
    // 0x1717c4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A68u, 0x1717C0u, 0x1717C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717C8u;
label_1717c8:
    // 0x1717c8: 0xc06f5f6  jal         func_1BD7D8
    ctx->pc = 0x1717C8u;
    SET_GPR_U32(ctx, 31, 0x1717D0u);
    ctx->pc = 0x1717CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717C8u;
    // 0x1717cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD7D8u, 0x1717C8u, 0x1717D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717D0u;
label_1717d0:
    // 0x1717d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1717d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1717d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1717d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1717d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1717d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1717dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1717DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1717E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717DCu;
        // 0x1717e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1717DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1717E4u;
}
