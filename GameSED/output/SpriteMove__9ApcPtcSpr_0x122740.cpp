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

// Function: SpriteMove__9ApcPtcSpr
// Address: 0x122740 - 0x122838
void SpriteMove__9ApcPtcSpr_0x122740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpriteMove__9ApcPtcSpr_0x122740");
#endif

    switch (ctx->pc) {
        case 0x122780u: goto label_122780;
        case 0x1227b0u: goto label_1227b0;
        case 0x1227f0u: goto label_1227f0;
        case 0x1227f8u: goto label_1227f8;
        case 0x122800u: goto label_122800;
        default: break;
    }

    ctx->pc = 0x122740u;

    // 0x122740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122744: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122748: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12274c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122754: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122758: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12275c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12275cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x122760: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x122764: 0x8e51015c  lw          $s1, 0x15C($s2)
    ctx->pc = 0x122764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x122768: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x122768u;
    {
        const bool branch_taken_0x122768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122768u;
        // 0x12276c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122768) {
            ctx->pc = 0x122814u;
            goto label_122814;
        }
    }
    ctx->pc = 0x122770u;
    // 0x122770: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x122770u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122774: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x122774u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x122778: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x122778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12277c: 0x0  nop
    ctx->pc = 0x12277cu;
    // NOP
label_122780:
    // 0x122780: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x122780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x122784: 0x10530018  beq         $v0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x122784u;
    {
        const bool branch_taken_0x122784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x122784) {
            ctx->pc = 0x1227E8u;
            goto label_1227e8;
        }
    }
    ctx->pc = 0x12278Cu;
    // 0x12278c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12278Cu;
    {
        const bool branch_taken_0x12278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12278c) {
            ctx->pc = 0x122790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12278Cu;
            // 0x122790: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1227B8u;
            goto label_1227b8;
        }
    }
    ctx->pc = 0x122794u;
    // 0x122794: 0x5055001c  beql        $v0, $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x122794u;
    {
        const bool branch_taken_0x122794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x122794) {
            ctx->pc = 0x122798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122794u;
            // 0x122798: 0xae140014  sw          $s4, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122808u;
            goto label_122808;
        }
    }
    ctx->pc = 0x12279Cu;
    // 0x12279c: 0x1454001b  bne         $v0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x12279Cu;
    {
        const bool branch_taken_0x12279c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1227A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12279Cu;
        // 0x1227a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12279c) {
            ctx->pc = 0x12280Cu;
            goto label_12280c;
        }
    }
    ctx->pc = 0x1227A4u;
    // 0x1227a4: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1227a8: 0xc04899e  jal         func_122678
    ctx->pc = 0x1227A8u;
    SET_GPR_U32(ctx, 31, 0x1227B0u);
    ctx->pc = 0x1227ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227A8u;
    // 0x1227ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122678u, 0x1227A8u, 0x1227B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227B0u;
label_1227b0:
    // 0x1227b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1227B0u;
    {
        const bool branch_taken_0x1227b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1227b0) {
            ctx->pc = 0x12280Cu;
            goto label_12280c;
        }
    }
    ctx->pc = 0x1227B8u;
label_1227b8:
    // 0x1227b8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1227B8u;
    {
        const bool branch_taken_0x1227b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1227BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227B8u;
        // 0x1227bc: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227b8) {
            ctx->pc = 0x1227C8u;
            goto label_1227c8;
        }
    }
    ctx->pc = 0x1227C0u;
    // 0x1227c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1227C0u;
    {
        const bool branch_taken_0x1227c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227C0u;
        // 0x1227c4: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227c0) {
            ctx->pc = 0x1227D4u;
            goto label_1227d4;
        }
    }
    ctx->pc = 0x1227C8u;
label_1227c8:
    // 0x1227c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1227c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1227cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1227ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1227d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1227d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1227d4:
    // 0x1227d4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1227d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1227d8: 0x1053000c  beq         $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1227D8u;
    {
        const bool branch_taken_0x1227d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1227d8) {
            ctx->pc = 0x12280Cu;
            goto label_12280c;
        }
    }
    ctx->pc = 0x1227E0u;
    // 0x1227e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1227E0u;
    {
        const bool branch_taken_0x1227e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227E0u;
        // 0x1227e4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227e0) {
            ctx->pc = 0x12280Cu;
            goto label_12280c;
        }
    }
    ctx->pc = 0x1227E8u;
label_1227e8:
    // 0x1227e8: 0xc047ac8  jal         func_11EB20
    ctx->pc = 0x1227E8u;
    SET_GPR_U32(ctx, 31, 0x1227F0u);
    ctx->pc = 0x1227ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227E8u;
    // 0x1227ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB20u, 0x1227E8u, 0x1227F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F0u;
label_1227f0:
    // 0x1227f0: 0xc047a6a  jal         func_11E9A8
    ctx->pc = 0x1227F0u;
    SET_GPR_U32(ctx, 31, 0x1227F8u);
    ctx->pc = 0x1227F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227F0u;
    // 0x1227f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9A8u, 0x1227F0u, 0x1227F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F8u;
label_1227f8:
    // 0x1227f8: 0xc0486f8  jal         func_121BE0
    ctx->pc = 0x1227F8u;
    SET_GPR_U32(ctx, 31, 0x122800u);
    ctx->pc = 0x1227FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227F8u;
    // 0x1227fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121BE0u, 0x1227F8u, 0x122800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122800u;
label_122800:
    // 0x122800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122800u;
    {
        const bool branch_taken_0x122800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122800u;
        // 0x122804: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122800) {
            ctx->pc = 0x12280Cu;
            goto label_12280c;
        }
    }
    ctx->pc = 0x122808u;
label_122808:
    // 0x122808: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x122808u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12280c:
    // 0x12280c: 0x1620ffdc  bnez        $s1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x12280Cu;
    {
        const bool branch_taken_0x12280c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x122810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12280Cu;
        // 0x122810: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12280c) {
            ctx->pc = 0x122780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122780;
        }
    }
    ctx->pc = 0x122814u;
label_122814:
    // 0x122814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12281c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12281cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122820: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x122820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122824: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x122824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122828: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12282c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12282cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122830: 0x3e00008  jr          $ra
    ctx->pc = 0x122830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122830u;
        // 0x122834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122838u;
}
