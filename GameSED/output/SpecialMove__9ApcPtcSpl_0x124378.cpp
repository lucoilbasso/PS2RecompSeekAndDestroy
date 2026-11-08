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

// Function: SpecialMove__9ApcPtcSpl
// Address: 0x124378 - 0x124478
void SpecialMove__9ApcPtcSpl_0x124378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpecialMove__9ApcPtcSpl_0x124378");
#endif

    switch (ctx->pc) {
        case 0x1243a4u: goto label_1243a4;
        case 0x1243b8u: goto label_1243b8;
        case 0x1243e8u: goto label_1243e8;
        case 0x124428u: goto label_124428;
        case 0x124434u: goto label_124434;
        case 0x12443cu: goto label_12443c;
        default: break;
    }

    ctx->pc = 0x124378u;

    // 0x124378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12437c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124380: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12438c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124390: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124394: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x124394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x124398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12439c: 0xc04afdc  jal         func_12BF70
    ctx->pc = 0x12439Cu;
    SET_GPR_U32(ctx, 31, 0x1243A4u);
    ctx->pc = 0x1243A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12439Cu;
    // 0x1243a0: 0x8e510160  lw          $s1, 0x160($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BF70u, 0x12439Cu, 0x1243A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243A4u;
label_1243a4:
    // 0x1243a4: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1243A4u;
    {
        const bool branch_taken_0x1243a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243A4u;
        // 0x1243a8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243a4) {
            ctx->pc = 0x124454u;
            goto label_124454;
        }
    }
    ctx->pc = 0x1243ACu;
    // 0x1243ac: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1243acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1243b0: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1243b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1243b4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1243b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1243b8:
    // 0x1243b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1243b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1243bc: 0x10530018  beq         $v0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1243BCu;
    {
        const bool branch_taken_0x1243bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1243bc) {
            ctx->pc = 0x124420u;
            goto label_124420;
        }
    }
    ctx->pc = 0x1243C4u;
    // 0x1243c4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1243C4u;
    {
        const bool branch_taken_0x1243c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243c4) {
            ctx->pc = 0x1243C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1243C4u;
            // 0x1243c8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1243F0u;
            goto label_1243f0;
        }
    }
    ctx->pc = 0x1243CCu;
    // 0x1243cc: 0x5055001e  beql        $v0, $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x1243CCu;
    {
        const bool branch_taken_0x1243cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1243cc) {
            ctx->pc = 0x1243D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1243CCu;
            // 0x1243d0: 0xae140014  sw          $s4, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124448u;
            goto label_124448;
        }
    }
    ctx->pc = 0x1243D4u;
    // 0x1243d4: 0x1454001d  bne         $v0, $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x1243D4u;
    {
        const bool branch_taken_0x1243d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1243D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243D4u;
        // 0x1243d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243d4) {
            ctx->pc = 0x12444Cu;
            goto label_12444c;
        }
    }
    ctx->pc = 0x1243DCu;
    // 0x1243dc: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1243dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1243e0: 0xc04901c  jal         func_124070
    ctx->pc = 0x1243E0u;
    SET_GPR_U32(ctx, 31, 0x1243E8u);
    ctx->pc = 0x1243E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243E0u;
    // 0x1243e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124070u, 0x1243E0u, 0x1243E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243E8u;
label_1243e8:
    // 0x1243e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1243E8u;
    {
        const bool branch_taken_0x1243e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243e8) {
            ctx->pc = 0x12444Cu;
            goto label_12444c;
        }
    }
    ctx->pc = 0x1243F0u;
label_1243f0:
    // 0x1243f0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1243F0u;
    {
        const bool branch_taken_0x1243f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1243F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243F0u;
        // 0x1243f4: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243f0) {
            ctx->pc = 0x124400u;
            goto label_124400;
        }
    }
    ctx->pc = 0x1243F8u;
    // 0x1243f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1243F8u;
    {
        const bool branch_taken_0x1243f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243F8u;
        // 0x1243fc: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243f8) {
            ctx->pc = 0x12440Cu;
            goto label_12440c;
        }
    }
    ctx->pc = 0x124400u;
label_124400:
    // 0x124400: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x124404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x124408: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x124408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_12440c:
    // 0x12440c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x12440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x124410: 0x1053000e  beq         $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x124410u;
    {
        const bool branch_taken_0x124410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x124410) {
            ctx->pc = 0x12444Cu;
            goto label_12444c;
        }
    }
    ctx->pc = 0x124418u;
    // 0x124418: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x124418u;
    {
        const bool branch_taken_0x124418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124418u;
        // 0x12441c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124418) {
            ctx->pc = 0x12444Cu;
            goto label_12444c;
        }
    }
    ctx->pc = 0x124420u;
label_124420:
    // 0x124420: 0xc047ac8  jal         func_11EB20
    ctx->pc = 0x124420u;
    SET_GPR_U32(ctx, 31, 0x124428u);
    ctx->pc = 0x124424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124420u;
    // 0x124424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB20u, 0x124420u, 0x124428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124428u;
label_124428:
    // 0x124428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12442c: 0xc0484ae  jal         func_1212B8
    ctx->pc = 0x12442Cu;
    SET_GPR_U32(ctx, 31, 0x124434u);
    ctx->pc = 0x124430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12442Cu;
    // 0x124430: 0x8e25010c  lw          $a1, 0x10C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1212B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1212B8u, 0x12442Cu, 0x124434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124434u;
label_124434:
    // 0x124434: 0xc048d8e  jal         func_123638
    ctx->pc = 0x124434u;
    SET_GPR_U32(ctx, 31, 0x12443Cu);
    ctx->pc = 0x124438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124434u;
    // 0x124438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123638u, 0x124434u, 0x12443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12443Cu;
label_12443c:
    // 0x12443c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12443Cu;
    {
        const bool branch_taken_0x12443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12443Cu;
        // 0x124440: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12443c) {
            ctx->pc = 0x12444Cu;
            goto label_12444c;
        }
    }
    ctx->pc = 0x124444u;
    // 0x124444: 0x0  nop
    ctx->pc = 0x124444u;
    // NOP
label_124448:
    // 0x124448: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x124448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12444c:
    // 0x12444c: 0x1620ffda  bnez        $s1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x12444Cu;
    {
        const bool branch_taken_0x12444c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x124450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12444Cu;
        // 0x124450: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12444c) {
            ctx->pc = 0x1243B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1243b8;
        }
    }
    ctx->pc = 0x124454u;
label_124454:
    // 0x124454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12445c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12445cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124460: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124464: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x124464u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124468: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x124468u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12446c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124470: 0x3e00008  jr          $ra
    ctx->pc = 0x124470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124470u;
        // 0x124474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124478u;
}
