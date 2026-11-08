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

// Function: Cmd_PARTS_STRUCT_Entry__FP15BsSCDEntControl
// Address: 0x16a258 - 0x16a3fc
void Cmd_PARTS_STRUCT_Entry__FP15BsSCDEntControl_0x16a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTS_STRUCT_Entry__FP15BsSCDEntControl_0x16a258");
#endif

    switch (ctx->pc) {
        case 0x16a290u: goto label_16a290;
        case 0x16a2b0u: goto label_16a2b0;
        case 0x16a2bcu: goto label_16a2bc;
        case 0x16a2c8u: goto label_16a2c8;
        case 0x16a2d4u: goto label_16a2d4;
        case 0x16a2f0u: goto label_16a2f0;
        case 0x16a328u: goto label_16a328;
        case 0x16a33cu: goto label_16a33c;
        case 0x16a348u: goto label_16a348;
        case 0x16a354u: goto label_16a354;
        case 0x16a360u: goto label_16a360;
        case 0x16a36cu: goto label_16a36c;
        case 0x16a38cu: goto label_16a38c;
        case 0x16a3a0u: goto label_16a3a0;
        case 0x16a3acu: goto label_16a3ac;
        case 0x16a3c0u: goto label_16a3c0;
        case 0x16a3d0u: goto label_16a3d0;
        default: break;
    }

    ctx->pc = 0x16a258u;

    // 0x16a258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16a258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a25c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a264: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x16a268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a26c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a270: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16a274: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16a278: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16a27c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16a280: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16a284: 0x8e350024  lw          $s5, 0x24($s1)
    ctx->pc = 0x16a284u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16a288: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A288u;
    SET_GPR_U32(ctx, 31, 0x16A290u);
    ctx->pc = 0x16A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A288u;
    // 0x16a28c: 0x8eb60044  lw          $s6, 0x44($s5) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A288u, 0x16A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A290u;
label_16a290:
    // 0x16a290: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x16a290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16a294: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x16a294u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a298: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2a0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A2A0u;
    {
        const bool branch_taken_0x16a2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2A0u;
        // 0x16a2a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2a0) {
            ctx->pc = 0x16A2E0u;
            goto label_16a2e0;
        }
    }
    ctx->pc = 0x16A2A8u;
    // 0x16a2a8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A2A8u;
    SET_GPR_U32(ctx, 31, 0x16A2B0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A2A8u, 0x16A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2B0u;
label_16a2b0:
    // 0x16a2b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2b4: 0xc04106a  jal         func_1041A8
    ctx->pc = 0x16A2B4u;
    SET_GPR_U32(ctx, 31, 0x16A2BCu);
    ctx->pc = 0x16A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2B4u;
    // 0x16a2b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041A8u, 0x16A2B4u, 0x16A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2BCu;
label_16a2bc:
    // 0x16a2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2c0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A2C0u;
    SET_GPR_U32(ctx, 31, 0x16A2C8u);
    ctx->pc = 0x16A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2C0u;
    // 0x16a2c4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A2C0u, 0x16A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2C8u;
label_16a2c8:
    // 0x16a2c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2cc: 0xc040fea  jal         func_103FA8
    ctx->pc = 0x16A2CCu;
    SET_GPR_U32(ctx, 31, 0x16A2D4u);
    ctx->pc = 0x16A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2CCu;
    // 0x16a2d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FA8u, 0x16A2CCu, 0x16A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2D4u;
label_16a2d4:
    // 0x16a2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2d8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16A2D8u;
    {
        const bool branch_taken_0x16a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2D8u;
        // 0x16a2dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2d8) {
            ctx->pc = 0x16A334u;
            goto label_16a334;
        }
    }
    ctx->pc = 0x16A2E0u;
label_16a2e0:
    // 0x16a2e0: 0x1465002d  bne         $v1, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x16A2E0u;
    {
        const bool branch_taken_0x16a2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x16a2e0) {
            ctx->pc = 0x16A398u;
            goto label_16a398;
        }
    }
    ctx->pc = 0x16A2E8u;
    // 0x16a2e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A2E8u;
    SET_GPR_U32(ctx, 31, 0x16A2F0u);
    ctx->pc = 0x16A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2E8u;
    // 0x16a2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A2E8u, 0x16A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2F0u;
label_16a2f0:
    // 0x16a2f0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16a2f4: 0x8ec30040  lw          $v1, 0x40($s6)
    ctx->pc = 0x16a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x16a2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16a300: 0x24a57320  addiu       $a1, $a1, 0x7320
    ctx->pc = 0x16a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29472));
    // 0x16a304: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x16a304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a308: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x16a308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x16a30c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A30Cu;
    {
        const bool branch_taken_0x16a30c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A30Cu;
        // 0x16a310: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a30c) {
            ctx->pc = 0x16A320u;
            goto label_16a320;
        }
    }
    ctx->pc = 0x16A314u;
    // 0x16a314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a318: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A318u;
    {
        const bool branch_taken_0x16a318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a318) {
            ctx->pc = 0x16A31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A318u;
            // 0x16a31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A32Cu;
            goto label_16a32c;
        }
    }
    ctx->pc = 0x16A320u;
label_16a320:
    // 0x16a320: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x16A320u;
    SET_GPR_U32(ctx, 31, 0x16A328u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16A320u, 0x16A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A328u;
label_16a328:
    // 0x16a328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a32c:
    // 0x16a32c: 0x8e130008  lw          $s3, 0x8($s0)
    ctx->pc = 0x16a32cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16a330: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x16a330u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16a334:
    // 0x16a334: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16A334u;
    SET_GPR_U32(ctx, 31, 0x16A33Cu);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16A334u, 0x16A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A33Cu;
label_16a33c:
    // 0x16a33c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a340: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x16A340u;
    SET_GPR_U32(ctx, 31, 0x16A348u);
    ctx->pc = 0x16A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A340u;
    // 0x16a344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x16A340u, 0x16A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A348u;
label_16a348:
    // 0x16a348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a34c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16A34Cu;
    SET_GPR_U32(ctx, 31, 0x16A354u);
    ctx->pc = 0x16A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A34Cu;
    // 0x16a350: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16A34Cu, 0x16A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A354u;
label_16a354:
    // 0x16a354: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a358: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x16A358u;
    SET_GPR_U32(ctx, 31, 0x16A360u);
    ctx->pc = 0x16A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A358u;
    // 0x16a35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x16A358u, 0x16A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A360u;
label_16a360:
    // 0x16a360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a364: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16A364u;
    SET_GPR_U32(ctx, 31, 0x16A36Cu);
    ctx->pc = 0x16A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A364u;
    // 0x16a368: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16A364u, 0x16A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A36Cu;
label_16a36c:
    // 0x16a36c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x16a36cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a370: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a378: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16a378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a37c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16a37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a380: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16a380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a384: 0xc05a664  jal         func_169990
    ctx->pc = 0x16A384u;
    SET_GPR_U32(ctx, 31, 0x16A38Cu);
    ctx->pc = 0x16A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A384u;
    // 0x16a388: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169990u, 0x16A384u, 0x16A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A38Cu;
label_16a38c:
    // 0x16a38c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16A38Cu;
    {
        const bool branch_taken_0x16a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A38Cu;
        // 0x16a390: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a38c) {
            ctx->pc = 0x16A3C4u;
            goto label_16a3c4;
        }
    }
    ctx->pc = 0x16A394u;
    // 0x16a394: 0x0  nop
    ctx->pc = 0x16a394u;
    // NOP
label_16a398:
    // 0x16a398: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A398u;
    SET_GPR_U32(ctx, 31, 0x16A3A0u);
    ctx->pc = 0x16A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A398u;
    // 0x16a39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A398u, 0x16A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3A0u;
label_16a3a0:
    // 0x16a3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A3A4u;
    SET_GPR_U32(ctx, 31, 0x16A3ACu);
    ctx->pc = 0x16A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3A4u;
    // 0x16a3a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A3A4u, 0x16A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3ACu;
label_16a3ac:
    // 0x16a3ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16a3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16a3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16a3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b8: 0xc05a840  jal         func_16A100
    ctx->pc = 0x16A3B8u;
    SET_GPR_U32(ctx, 31, 0x16A3C0u);
    ctx->pc = 0x16A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3B8u;
    // 0x16a3bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A100u, 0x16A3B8u, 0x16A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3C0u;
label_16a3c0:
    // 0x16a3c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16a3c4:
    // 0x16a3c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3c8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x16A3C8u;
    SET_GPR_U32(ctx, 31, 0x16A3D0u);
    ctx->pc = 0x16A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3C8u;
    // 0x16a3cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16A3C8u, 0x16A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3D0u;
label_16a3d0:
    // 0x16a3d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a3d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a3d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a3dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16a3dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a3e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16a3e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a3e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16a3e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a3e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16a3e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a3ec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16a3ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a3f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16a3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3F4u;
        // 0x16a3f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A3FCu;
}
