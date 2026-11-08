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

// Function: Cmd_FRAME_PAL_Entry__FP15BsSCDEntControl
// Address: 0x1938b0 - 0x1938fc
void Cmd_FRAME_PAL_Entry__FP15BsSCDEntControl_0x1938b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FRAME_PAL_Entry__FP15BsSCDEntControl_0x1938b0");
#endif

    switch (ctx->pc) {
        case 0x1938d8u: goto label_1938d8;
        case 0x1938e4u: goto label_1938e4;
        default: break;
    }

    ctx->pc = 0x1938b0u;

    // 0x1938b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1938b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1938b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1938b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1938b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1938b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1938bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1938bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1938c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1938c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1938c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1938c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1938cc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1938ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1938d0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1938D0u;
    SET_GPR_U32(ctx, 31, 0x1938D8u);
    ctx->pc = 0x1938D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1938D0u;
    // 0x1938d4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1938D0u, 0x1938D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938D8u;
label_1938d8:
    // 0x1938d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1938d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1938DCu;
    SET_GPR_U32(ctx, 31, 0x1938E4u);
    ctx->pc = 0x1938E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1938DCu;
    // 0x1938e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1938DCu, 0x1938E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938E4u;
label_1938e4:
    // 0x1938e4: 0xae220230  sw          $v0, 0x230($s1)
    ctx->pc = 0x1938e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 2));
    // 0x1938e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1938e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1938ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1938ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1938f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1938f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1938f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1938F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1938F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938F4u;
        // 0x1938f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1938F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1938FCu;
}
