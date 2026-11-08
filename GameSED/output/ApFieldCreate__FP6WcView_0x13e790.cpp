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

// Function: ApFieldCreate__FP6WcView
// Address: 0x13e790 - 0x13e7f8
void ApFieldCreate__FP6WcView_0x13e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldCreate__FP6WcView_0x13e790");
#endif

    switch (ctx->pc) {
        case 0x13e7acu: goto label_13e7ac;
        case 0x13e7b8u: goto label_13e7b8;
        case 0x13e7d4u: goto label_13e7d4;
        case 0x13e7e0u: goto label_13e7e0;
        default: break;
    }

    ctx->pc = 0x13e790u;

    // 0x13e790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13e798: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e7a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e7a4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x13E7A4u;
    SET_GPR_U32(ctx, 31, 0x13E7ACu);
    ctx->pc = 0x13E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7A4u;
    // 0x13e7a8: 0x24041116  addiu       $a0, $zero, 0x1116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13E7A4u, 0x13E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7ACu;
label_13e7ac:
    // 0x13e7ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x13e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x13e7b0: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x13E7B0u;
    SET_GPR_U32(ctx, 31, 0x13E7B8u);
    ctx->pc = 0x13E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7B0u;
    // 0x13e7b4: 0x34840220  ori         $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)544);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x13E7B0u, 0x13E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7B8u;
label_13e7b8:
    // 0x13e7b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13e7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7c0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13e7c4: 0x2442ecf0  addiu       $v0, $v0, -0x1310
    ctx->pc = 0x13e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962416));
    // 0x13e7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7cc: 0xc04f9fe  jal         func_13E7F8
    ctx->pc = 0x13E7CCu;
    SET_GPR_U32(ctx, 31, 0x13E7D4u);
    ctx->pc = 0x13E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7CCu;
    // 0x13e7d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E7F8u, 0x13E7CCu, 0x13E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7D4u;
label_13e7d4:
    // 0x13e7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7d8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x13E7D8u;
    SET_GPR_U32(ctx, 31, 0x13E7E0u);
    ctx->pc = 0x13E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7D8u;
    // 0x13e7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x13E7D8u, 0x13E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7E0u;
label_13e7e0:
    // 0x13e7e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e7ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7F0u;
        // 0x13e7f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E7F8u;
}
