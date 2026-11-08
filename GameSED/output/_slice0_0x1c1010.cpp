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

// Function: _slice0
// Address: 0x1c1010 - 0x1c1200
void _slice0_0x1c1010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_slice0_0x1c1010");
#endif

    switch (ctx->pc) {
        case 0x1c1048u: goto label_1c1048;
        case 0x1c1058u: goto label_1c1058;
        case 0x1c1088u: goto label_1c1088;
        case 0x1c10acu: goto label_1c10ac;
        case 0x1c10d4u: goto label_1c10d4;
        case 0x1c1100u: goto label_1c1100;
        case 0x1c1138u: goto label_1c1138;
        case 0x1c1164u: goto label_1c1164;
        case 0x1c1190u: goto label_1c1190;
        case 0x1c11bcu: goto label_1c11bc;
        default: break;
    }

    ctx->pc = 0x1c1010u;

    // 0x1c1010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c1010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c1014: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x1c1014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x1c1018: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c1018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c101c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1c101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1c1020: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c1020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1028: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1c1028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1c102c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1c102cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1c1030: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1c1030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c1034: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1c1034u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1038: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c1038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c103c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1c103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1c1040: 0xc0703b8  jal         func_1C0EE0
    ctx->pc = 0x1C1040u;
    SET_GPR_U32(ctx, 31, 0x1C1048u);
    ctx->pc = 0x1C1044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1040u;
    // 0x1c1044: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0EE0u, 0x1C1040u, 0x1C1048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1048u;
label_1c1048:
    // 0x1c1048: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1C1048u;
    {
        const bool branch_taken_0x1c1048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1048u;
        // 0x1c104c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1048) {
            ctx->pc = 0x1C11E8u;
            goto label_1c11e8;
        }
    }
    ctx->pc = 0x1C1050u;
    // 0x1c1050: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x1c1050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x1c1054: 0x0  nop
    ctx->pc = 0x1c1054u;
    // NOP
label_1c1058:
    // 0x1c1058: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c105c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1c105cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c1060: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1060u;
    {
        const bool branch_taken_0x1c1060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1060) {
            ctx->pc = 0x1C1064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1060u;
            // 0x1c1064: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1070u;
            goto label_1c1070;
        }
    }
    ctx->pc = 0x1C1068u;
    // 0x1c1068: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1C1068u;
    {
        const bool branch_taken_0x1c1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1068u;
        // 0x1c106c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1068) {
            ctx->pc = 0x1C11E4u;
            goto label_1c11e4;
        }
    }
    ctx->pc = 0x1C1070u;
label_1c1070:
    // 0x1c1070: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c1070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c1074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1078: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1c1078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c107c: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1c107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1c1080: 0xc070248  jal         func_1C0920
    ctx->pc = 0x1C1080u;
    SET_GPR_U32(ctx, 31, 0x1C1088u);
    ctx->pc = 0x1C1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1080u;
    // 0x1c1084: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0920u, 0x1C1080u, 0x1C1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1088u;
label_1c1088:
    // 0x1c1088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1088u;
    {
        const bool branch_taken_0x1c1088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1088u;
        // 0x1c108c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1088) {
            ctx->pc = 0x1C1098u;
            goto label_1c1098;
        }
    }
    ctx->pc = 0x1C1090u;
    // 0x1c1090: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1C1090u;
    {
        const bool branch_taken_0x1c1090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1090u;
        // 0x1c1094: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1090) {
            ctx->pc = 0x1C11E4u;
            goto label_1c11e4;
        }
    }
    ctx->pc = 0x1C1098u;
label_1c1098:
    // 0x1c1098: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C1098u;
    {
        const bool branch_taken_0x1c1098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1098u;
        // 0x1c109c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1098) {
            ctx->pc = 0x1C10E4u;
            goto label_1c10e4;
        }
    }
    ctx->pc = 0x1C10A0u;
    // 0x1c10a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10a4: 0xc070778  jal         func_1C1DE0
    ctx->pc = 0x1C10A4u;
    SET_GPR_U32(ctx, 31, 0x1C10ACu);
    ctx->pc = 0x1C10A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10A4u;
    // 0x1c10a8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C10A4u, 0x1C10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10ACu;
label_1c10ac:
    // 0x1c10ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C10ACu;
    {
        const bool branch_taken_0x1c10ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10ac) {
            ctx->pc = 0x1C10B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C10ACu;
            // 0x1c10b0: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C10C4u;
            goto label_1c10c4;
        }
    }
    ctx->pc = 0x1C10B4u;
    // 0x1c10b4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1c10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1c10b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C10B8u;
    {
        const bool branch_taken_0x1c10b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10b8) {
            ctx->pc = 0x1C10CCu;
            goto label_1c10cc;
        }
    }
    ctx->pc = 0x1C10C0u;
    // 0x1c10c0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x1c10c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_1c10c4:
    // 0x1c10c4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C10C4u;
    {
        const bool branch_taken_0x1c10c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10C4u;
        // 0x1c10c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10c4) {
            ctx->pc = 0x1C11E4u;
            goto label_1c11e4;
        }
    }
    ctx->pc = 0x1C10CCu;
label_1c10cc:
    // 0x1c10cc: 0xc070332  jal         func_1C0CC8
    ctx->pc = 0x1C10CCu;
    SET_GPR_U32(ctx, 31, 0x1C10D4u);
    ctx->pc = 0x1C10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10CCu;
    // 0x1c10d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0CC8u, 0x1C10CCu, 0x1C10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10D4u;
label_1c10d4:
    // 0x1c10d4: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1c10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1c10d8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C10D8u;
    {
        const bool branch_taken_0x1c10d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10D8u;
        // 0x1c10dc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10d8) {
            ctx->pc = 0x1C1140u;
            goto label_1c1140;
        }
    }
    ctx->pc = 0x1C10E0u;
    // 0x1c10e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c10e4:
    // 0x1c10e4: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1c10e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c10e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C10E8u;
    {
        const bool branch_taken_0x1c10e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10E8u;
        // 0x1c10ec: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10e8) {
            ctx->pc = 0x1C1108u;
            goto label_1c1108;
        }
    }
    ctx->pc = 0x1C10F0u;
    // 0x1c10f0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c10f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10f8: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C10F8u;
    SET_GPR_U32(ctx, 31, 0x1C1100u);
    ctx->pc = 0x1C10FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10F8u;
    // 0x1c10fc: 0x24a5b5b0  addiu       $a1, $a1, -0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C10F8u, 0x1C1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1100u;
label_1c1100:
    // 0x1c1100: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C1100u;
    {
        const bool branch_taken_0x1c1100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1100u;
        // 0x1c1104: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1100) {
            ctx->pc = 0x1C11E4u;
            goto label_1c11e4;
        }
    }
    ctx->pc = 0x1C1108u;
label_1c1108:
    // 0x1c1108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c110c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C110Cu;
    {
        const bool branch_taken_0x1c110c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C110Cu;
        // 0x1c1110: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c110c) {
            ctx->pc = 0x1C114Cu;
            goto label_1c114c;
        }
    }
    ctx->pc = 0x1C1114u;
    // 0x1c1114: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1c1114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c111c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1c111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1c1120: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1c1120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c1124: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1c1124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1128: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1c1128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c112c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1c112cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1130: 0xc0704b0  jal         func_1C12C0
    ctx->pc = 0x1C1130u;
    SET_GPR_U32(ctx, 31, 0x1C1138u);
    ctx->pc = 0x1C1134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1130u;
    // 0x1c1134: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C12C0u, 0x1C1130u, 0x1C1138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1138u;
label_1c1138:
    // 0x1c1138: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1138u;
    {
        const bool branch_taken_0x1c1138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1138u;
        // 0x1c113c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1138) {
            ctx->pc = 0x1C1170u;
            goto label_1c1170;
        }
    }
    ctx->pc = 0x1C1140u;
label_1c1140:
    // 0x1c1140: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x1c1140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x1c1144: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C1144u;
    {
        const bool branch_taken_0x1c1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1144u;
        // 0x1c1148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1144) {
            ctx->pc = 0x1C11E4u;
            goto label_1c11e4;
        }
    }
    ctx->pc = 0x1C114Cu;
label_1c114c:
    // 0x1c114c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1150: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1154: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1c1154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c1158: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c1158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c115c: 0xc070480  jal         func_1C1200
    ctx->pc = 0x1C115Cu;
    SET_GPR_U32(ctx, 31, 0x1C1164u);
    ctx->pc = 0x1C1160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C115Cu;
    // 0x1c1160: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1200u, 0x1C115Cu, 0x1C1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1164u;
label_1c1164:
    // 0x1c1164: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1164u;
    {
        const bool branch_taken_0x1c1164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1164u;
        // 0x1c1168: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1164) {
            ctx->pc = 0x1C1198u;
            goto label_1c1198;
        }
    }
    ctx->pc = 0x1C116Cu;
    // 0x1c116c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c116cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c1170:
    // 0x1c1170: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1c1170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1174: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1c1174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1c1178: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1c1178u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c117c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c117cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1184: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c1188: 0xc06faec  jal         func_1BEBB0
    ctx->pc = 0x1C1188u;
    SET_GPR_U32(ctx, 31, 0x1C1190u);
    ctx->pc = 0x1C118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1188u;
    // 0x1c118c: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB0u, 0x1C1188u, 0x1C1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1190u;
label_1c1190:
    // 0x1c1190: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1190u;
    {
        const bool branch_taken_0x1c1190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1190u;
        // 0x1c1194: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1190) {
            ctx->pc = 0x1C11A4u;
            goto label_1c11a4;
        }
    }
    ctx->pc = 0x1C1198u;
label_1c1198:
    // 0x1c1198: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x1c1198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x1c119c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C119Cu;
    {
        const bool branch_taken_0x1c119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C119Cu;
        // 0x1c11a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c119c) {
            ctx->pc = 0x1C11E4u;
            goto label_1c11e4;
        }
    }
    ctx->pc = 0x1C11A4u;
label_1c11a4:
    // 0x1c11a4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C11A4u;
    {
        const bool branch_taken_0x1c11a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11a4) {
            ctx->pc = 0x1C11A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C11A4u;
            // 0x1c11a8: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C11C4u;
            goto label_1c11c4;
        }
    }
    ctx->pc = 0x1C11ACu;
    // 0x1c11ac: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x1c11acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c11b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11b4: 0xc06fe4a  jal         func_1BF928
    ctx->pc = 0x1C11B4u;
    SET_GPR_U32(ctx, 31, 0x1C11BCu);
    ctx->pc = 0x1C11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11B4u;
    // 0x1c11b8: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF928u, 0x1C11B4u, 0x1C11BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11BCu;
label_1c11bc:
    // 0x1c11bc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c11bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c11c0: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1c11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_1c11c4:
    // 0x1c11c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c11c8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1c11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1c11cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c11ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c11d0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1c11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1c11d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c11d8: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x1c11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
    // 0x1c11dc: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x1C11DCu;
    {
        const bool branch_taken_0x1c11dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11DCu;
        // 0x1c11e0: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11dc) {
            ctx->pc = 0x1C1058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1058;
        }
    }
    ctx->pc = 0x1C11E4u;
label_1c11e4:
    // 0x1c11e4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c11e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1c11e8:
    // 0x1c11e8: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x1c11e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c11ec: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1c11ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c11f0: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x1c11f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c11f4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1c11f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c11f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11F8u;
        // 0x1c11fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1200u;
}
