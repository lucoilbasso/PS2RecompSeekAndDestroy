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

// Function: Cmd_SPRITE_SCALING_Entry__FP15BsSCDEntControl
// Address: 0x10c6a0 - 0x10c6e0
void Cmd_SPRITE_SCALING_Entry__FP15BsSCDEntControl_0x10c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SPRITE_SCALING_Entry__FP15BsSCDEntControl_0x10c6a0");
#endif

    switch (ctx->pc) {
        case 0x10c6c4u: goto label_10c6c4;
        case 0x10c6d0u: goto label_10c6d0;
        default: break;
    }

    ctx->pc = 0x10c6a0u;

    // 0x10c6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c6a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c6b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6b8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c6bc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C6BCu;
    SET_GPR_U32(ctx, 31, 0x10C6C4u);
    ctx->pc = 0x10C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6BCu;
    // 0x10c6c0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C6BCu, 0x10C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C6C4u;
label_10c6c4:
    // 0x10c6c4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x10c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10c6c8: 0xc062d0e  jal         func_18B438
    ctx->pc = 0x10C6C8u;
    SET_GPR_U32(ctx, 31, 0x10C6D0u);
    ctx->pc = 0x10C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6C8u;
    // 0x10c6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B438u, 0x10C6C8u, 0x10C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C6D0u;
label_10c6d0:
    // 0x10c6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c6d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10c6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6D8u;
        // 0x10c6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C6E0u;
}
