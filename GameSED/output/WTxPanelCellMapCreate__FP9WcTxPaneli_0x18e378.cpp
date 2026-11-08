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

// Function: WTxPanelCellMapCreate__FP9WcTxPaneli
// Address: 0x18e378 - 0x18e3fc
void WTxPanelCellMapCreate__FP9WcTxPaneli_0x18e378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellMapCreate__FP9WcTxPaneli_0x18e378");
#endif

    switch (ctx->pc) {
        case 0x18e3b0u: goto label_18e3b0;
        case 0x18e3d0u: goto label_18e3d0;
        case 0x18e3e0u: goto label_18e3e0;
        default: break;
    }

    ctx->pc = 0x18e378u;

    // 0x18e378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e37c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18e37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18e380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18e388: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18e388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e38c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e394: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18e398: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x18e398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x18e39c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E39Cu;
    {
        const bool branch_taken_0x18e39c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E39Cu;
        // 0x18e3a0: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e39c) {
            ctx->pc = 0x18E3A8u;
            goto label_18e3a8;
        }
    }
    ctx->pc = 0x18E3A4u;
    // 0x18e3a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e3a8:
    // 0x18e3a8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18E3A8u;
    SET_GPR_U32(ctx, 31, 0x18E3B0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18E3A8u, 0x18E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3B0u;
label_18e3b0:
    // 0x18e3b0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18e3b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3b8: 0x24a580a0  addiu       $a1, $a1, -0x7F60
    ctx->pc = 0x18e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934688));
    // 0x18e3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3c0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E3C0u;
    {
        const bool branch_taken_0x18e3c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3C0u;
        // 0x18e3c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3c0) {
            ctx->pc = 0x18E3D4u;
            goto label_18e3d4;
        }
    }
    ctx->pc = 0x18E3C8u;
    // 0x18e3c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18E3C8u;
    SET_GPR_U32(ctx, 31, 0x18E3D0u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18E3C8u, 0x18E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3D0u;
label_18e3d0:
    // 0x18e3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e3d4:
    // 0x18e3d4: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x18e3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18e3d8: 0xc063930  jal         func_18E4C0
    ctx->pc = 0x18E3D8u;
    SET_GPR_U32(ctx, 31, 0x18E3E0u);
    ctx->pc = 0x18E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3D8u;
    // 0x18e3dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E4C0u, 0x18E3D8u, 0x18E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3E0u;
label_18e3e0:
    // 0x18e3e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18e3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e3ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18e3ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e3f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18e3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18e3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x18E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3F4u;
        // 0x18e3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E3FCu;
}
