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

// Function: Cmd_SPRITE_ALPHING_Entry__FP15BsSCDEntControl
// Address: 0x10c6e0 - 0x10c720
void Cmd_SPRITE_ALPHING_Entry__FP15BsSCDEntControl_0x10c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SPRITE_ALPHING_Entry__FP15BsSCDEntControl_0x10c6e0");
#endif

    switch (ctx->pc) {
        case 0x10c704u: goto label_10c704;
        case 0x10c710u: goto label_10c710;
        default: break;
    }

    ctx->pc = 0x10c6e0u;

    // 0x10c6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c6e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c6f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c6fc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C6FCu;
    SET_GPR_U32(ctx, 31, 0x10C704u);
    ctx->pc = 0x10C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6FCu;
    // 0x10c700: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C6FCu, 0x10C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C704u;
label_10c704:
    // 0x10c704: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x10c704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10c708: 0xc062d18  jal         func_18B460
    ctx->pc = 0x10C708u;
    SET_GPR_U32(ctx, 31, 0x10C710u);
    ctx->pc = 0x10C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C708u;
    // 0x10c70c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B460u, 0x10C708u, 0x10C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C710u;
label_10c710:
    // 0x10c710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c714: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10c714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c718: 0x3e00008  jr          $ra
    ctx->pc = 0x10C718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C718u;
        // 0x10c71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C720u;
}
