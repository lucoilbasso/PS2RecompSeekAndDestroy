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

// Function: Cmd_LOAD_BG_Entry__FP15BsSCDEntControl
// Address: 0x144960 - 0x144a64
void Cmd_LOAD_BG_Entry__FP15BsSCDEntControl_0x144960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_BG_Entry__FP15BsSCDEntControl_0x144960");
#endif

    switch (ctx->pc) {
        case 0x1449acu: goto label_1449ac;
        case 0x1449b8u: goto label_1449b8;
        case 0x1449e0u: goto label_1449e0;
        case 0x1449ecu: goto label_1449ec;
        case 0x144a04u: goto label_144a04;
        case 0x144a18u: goto label_144a18;
        case 0x144a28u: goto label_144a28;
        case 0x144a30u: goto label_144a30;
        case 0x144a3cu: goto label_144a3c;
        case 0x144a44u: goto label_144a44;
        default: break;
    }

    ctx->pc = 0x144960u;

    // 0x144960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x144964: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x144964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144968: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x144968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x14496c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14496cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144970: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x144970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x144974: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x144974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x144978: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x144978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x14497c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x144980: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x144980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x144984: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x144984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x144988: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x144988u;
    {
        const bool branch_taken_0x144988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144988u;
        // 0x14498c: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144988) {
            ctx->pc = 0x144A10u;
            goto label_144a10;
        }
    }
    ctx->pc = 0x144990u;
    // 0x144990: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x144994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144998: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x144998u;
    {
        const bool branch_taken_0x144998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144998u;
        // 0x14499c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144998) {
            ctx->pc = 0x1449D0u;
            goto label_1449d0;
        }
    }
    ctx->pc = 0x1449A0u;
    // 0x1449a0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1449a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1449a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1449A4u;
    SET_GPR_U32(ctx, 31, 0x1449ACu);
    ctx->pc = 0x1449A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449A4u;
    // 0x1449a8: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1449A4u, 0x1449ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449ACu;
label_1449ac:
    // 0x1449ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1449acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449b0: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1449B0u;
    SET_GPR_U32(ctx, 31, 0x1449B8u);
    ctx->pc = 0x1449B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449B0u;
    // 0x1449b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1449B0u, 0x1449B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449B8u;
label_1449b8:
    // 0x1449b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1449b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1449bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449c0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1449c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1449c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1449C4u;
    {
        const bool branch_taken_0x1449c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449C4u;
        // 0x1449c8: 0x2605000a  addiu       $a1, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449c4) {
            ctx->pc = 0x1449F8u;
            goto label_1449f8;
        }
    }
    ctx->pc = 0x1449CCu;
    // 0x1449cc: 0x0  nop
    ctx->pc = 0x1449ccu;
    // NOP
label_1449d0:
    // 0x1449d0: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1449D0u;
    {
        const bool branch_taken_0x1449d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1449D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449D0u;
        // 0x1449d4: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449d0) {
            ctx->pc = 0x144A34u;
            goto label_144a34;
        }
    }
    ctx->pc = 0x1449D8u;
    // 0x1449d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1449D8u;
    SET_GPR_U32(ctx, 31, 0x1449E0u);
    ctx->pc = 0x1449DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449D8u;
    // 0x1449dc: 0x8c510388  lw          $s1, 0x388($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1449D8u, 0x1449E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449E0u;
label_1449e0:
    // 0x1449e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449e4: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1449E4u;
    SET_GPR_U32(ctx, 31, 0x1449ECu);
    ctx->pc = 0x1449E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449E4u;
    // 0x1449e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1449E4u, 0x1449ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449ECu;
label_1449ec:
    // 0x1449ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1449ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1449f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449f4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1449f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1449f8:
    // 0x1449f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1449f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449fc: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1449FCu;
    SET_GPR_U32(ctx, 31, 0x144A04u);
    ctx->pc = 0x144A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449FCu;
    // 0x144a00: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1449FCu, 0x144A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A04u;
label_144a04:
    // 0x144a04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x144A04u;
    {
        const bool branch_taken_0x144a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144a04) {
            ctx->pc = 0x144A34u;
            goto label_144a34;
        }
    }
    ctx->pc = 0x144A0Cu;
    // 0x144a0c: 0x0  nop
    ctx->pc = 0x144a0cu;
    // NOP
label_144a10:
    // 0x144a10: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144A10u;
    SET_GPR_U32(ctx, 31, 0x144A18u);
    ctx->pc = 0x144A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A10u;
    // 0x144a14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144A10u, 0x144A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A18u;
label_144a18:
    // 0x144a18: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x144a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x144a1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a20: 0xc067392  jal         func_19CE48
    ctx->pc = 0x144A20u;
    SET_GPR_U32(ctx, 31, 0x144A28u);
    ctx->pc = 0x144A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A20u;
    // 0x144a24: 0x24a5d2d8  addiu       $a1, $a1, -0x2D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x144A20u, 0x144A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A28u;
label_144a28:
    // 0x144a28: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x144A28u;
    SET_GPR_U32(ctx, 31, 0x144A30u);
    ctx->pc = 0x144A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A28u;
    // 0x144a2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x144A28u, 0x144A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A30u;
label_144a30:
    // 0x144a30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a34:
    // 0x144a34: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144A34u;
    SET_GPR_U32(ctx, 31, 0x144A3Cu);
    ctx->pc = 0x144A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A34u;
    // 0x144a38: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144A34u, 0x144A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A3Cu;
label_144a3c:
    // 0x144a3c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x144A3Cu;
    SET_GPR_U32(ctx, 31, 0x144A44u);
    ctx->pc = 0x144A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A3Cu;
    // 0x144a40: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x144A3Cu, 0x144A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A44u;
label_144a44:
    // 0x144a44: 0xae720068  sw          $s2, 0x68($s3)
    ctx->pc = 0x144a44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 18));
    // 0x144a48: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144a4c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x144a50: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x144a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144a54: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x144a54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x144a58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x144a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x144A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A5Cu;
        // 0x144a60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144A64u;
}
