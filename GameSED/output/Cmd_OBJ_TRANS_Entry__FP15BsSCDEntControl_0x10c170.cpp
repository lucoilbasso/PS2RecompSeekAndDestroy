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

// Function: Cmd_OBJ_TRANS_Entry__FP15BsSCDEntControl
// Address: 0x10c170 - 0x10c1b4
void Cmd_OBJ_TRANS_Entry__FP15BsSCDEntControl_0x10c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_TRANS_Entry__FP15BsSCDEntControl_0x10c170");
#endif

    switch (ctx->pc) {
        case 0x10c194u: goto label_10c194;
        case 0x10c1a4u: goto label_10c1a4;
        default: break;
    }

    ctx->pc = 0x10c170u;

    // 0x10c170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c174: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c188: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c18c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C18Cu;
    SET_GPR_U32(ctx, 31, 0x10C194u);
    ctx->pc = 0x10C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C18Cu;
    // 0x10c190: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C18Cu, 0x10C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C194u;
label_10c194:
    // 0x10c194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c19c: 0xc041da8  jal         func_1076A0
    ctx->pc = 0x10C19Cu;
    SET_GPR_U32(ctx, 31, 0x10C1A4u);
    ctx->pc = 0x10C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C19Cu;
    // 0x10c1a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x10C19Cu, 0x10C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1A4u;
label_10c1a4:
    // 0x10c1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c1a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10c1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1ACu;
        // 0x10c1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C1B4u;
}
