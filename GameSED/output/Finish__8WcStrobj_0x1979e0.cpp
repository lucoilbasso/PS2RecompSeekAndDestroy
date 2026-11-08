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

// Function: Finish__8WcStrobj
// Address: 0x1979e0 - 0x197aa8
void Finish__8WcStrobj_0x1979e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8WcStrobj_0x1979e0");
#endif

    switch (ctx->pc) {
        case 0x1979e0u: goto label_1979e0;
        case 0x1979e4u: goto label_1979e4;
        case 0x1979e8u: goto label_1979e8;
        case 0x1979ecu: goto label_1979ec;
        case 0x1979f0u: goto label_1979f0;
        case 0x1979f4u: goto label_1979f4;
        case 0x1979f8u: goto label_1979f8;
        case 0x1979fcu: goto label_1979fc;
        case 0x197a00u: goto label_197a00;
        case 0x197a04u: goto label_197a04;
        case 0x197a08u: goto label_197a08;
        case 0x197a0cu: goto label_197a0c;
        case 0x197a10u: goto label_197a10;
        case 0x197a14u: goto label_197a14;
        case 0x197a18u: goto label_197a18;
        case 0x197a1cu: goto label_197a1c;
        case 0x197a20u: goto label_197a20;
        case 0x197a24u: goto label_197a24;
        case 0x197a28u: goto label_197a28;
        case 0x197a2cu: goto label_197a2c;
        case 0x197a30u: goto label_197a30;
        case 0x197a34u: goto label_197a34;
        case 0x197a38u: goto label_197a38;
        case 0x197a3cu: goto label_197a3c;
        case 0x197a40u: goto label_197a40;
        case 0x197a44u: goto label_197a44;
        case 0x197a48u: goto label_197a48;
        case 0x197a4cu: goto label_197a4c;
        case 0x197a50u: goto label_197a50;
        case 0x197a54u: goto label_197a54;
        case 0x197a58u: goto label_197a58;
        case 0x197a5cu: goto label_197a5c;
        case 0x197a60u: goto label_197a60;
        case 0x197a64u: goto label_197a64;
        case 0x197a68u: goto label_197a68;
        case 0x197a6cu: goto label_197a6c;
        case 0x197a70u: goto label_197a70;
        case 0x197a74u: goto label_197a74;
        case 0x197a78u: goto label_197a78;
        case 0x197a7cu: goto label_197a7c;
        case 0x197a80u: goto label_197a80;
        case 0x197a84u: goto label_197a84;
        case 0x197a88u: goto label_197a88;
        case 0x197a8cu: goto label_197a8c;
        case 0x197a90u: goto label_197a90;
        case 0x197a94u: goto label_197a94;
        case 0x197a98u: goto label_197a98;
        case 0x197a9cu: goto label_197a9c;
        case 0x197aa0u: goto label_197aa0;
        case 0x197aa4u: goto label_197aa4;
        default: break;
    }

    ctx->pc = 0x1979e0u;

label_1979e0:
    // 0x1979e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1979e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1979e4:
    // 0x1979e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1979e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1979e8:
    // 0x1979e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1979e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1979ec:
    // 0x1979ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1979ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1979f0:
    // 0x1979f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1979f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1979f4:
    // 0x1979f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1979f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1979f8:
    // 0x1979f8: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x1979f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_1979fc:
    // 0x1979fc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_197a00:
    if (ctx->pc == 0x197A00u) {
        ctx->pc = 0x197A04u;
        goto label_197a04;
    }
    ctx->pc = 0x1979FCu;
    {
        const bool branch_taken_0x1979fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979fc) {
            ctx->pc = 0x197A88u;
            goto label_197a88;
        }
    }
    ctx->pc = 0x197A04u;
label_197a04:
    // 0x197a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x197a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197a08:
    // 0x197a08: 0xc05bedc  jal         func_16FB70
label_197a0c:
    if (ctx->pc == 0x197A0Cu) {
        ctx->pc = 0x197A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A08u;
        // 0x197a0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A10u;
        goto label_197a10;
    }
    ctx->pc = 0x197A08u;
    SET_GPR_U32(ctx, 31, 0x197A10u);
    ctx->pc = 0x197A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A08u;
    // 0x197a0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x197A08u, 0x197A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A10u;
label_197a10:
    // 0x197a10: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x197a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_197a14:
    // 0x197a14: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
label_197a18:
    if (ctx->pc == 0x197A18u) {
        ctx->pc = 0x197A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A14u;
        // 0x197a18: 0x8e2401b4  lw          $a0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A1Cu;
        goto label_197a1c;
    }
    ctx->pc = 0x197A14u;
    {
        const bool branch_taken_0x197a14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x197a14) {
            ctx->pc = 0x197A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197A14u;
            // 0x197a18: 0x8e2401b4  lw          $a0, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197A78u;
            goto label_197a78;
        }
    }
    ctx->pc = 0x197A1Cu;
label_197a1c:
    // 0x197a1c: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x197a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_197a20:
    // 0x197a20: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x197a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_197a24:
    // 0x197a24: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x197a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_197a28:
    // 0x197a28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x197a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_197a2c:
    // 0x197a2c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_197a30:
    if (ctx->pc == 0x197A30u) {
        ctx->pc = 0x197A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A2Cu;
        // 0x197a30: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A34u;
        goto label_197a34;
    }
    ctx->pc = 0x197A2Cu;
    {
        const bool branch_taken_0x197a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A2Cu;
        // 0x197a30: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a2c) {
            ctx->pc = 0x197A50u;
            goto label_197a50;
        }
    }
    ctx->pc = 0x197A34u;
label_197a34:
    // 0x197a34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x197a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_197a38:
    // 0x197a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197a3c:
    // 0x197a3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x197a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_197a40:
    // 0x197a40: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x197a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_197a44:
    // 0x197a44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x197a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_197a48:
    // 0x197a48: 0x60f809  jalr        $v1
label_197a4c:
    if (ctx->pc == 0x197A4Cu) {
        ctx->pc = 0x197A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A48u;
        // 0x197a4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A50u;
        goto label_197a50;
    }
    ctx->pc = 0x197A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197A50u);
        ctx->pc = 0x197A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A48u;
        // 0x197a4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A48u, 0x197A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197A50u;
label_197a50:
    // 0x197a50: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_197a54:
    // 0x197a54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_197a58:
    if (ctx->pc == 0x197A58u) {
        ctx->pc = 0x197A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A54u;
        // 0x197a58: 0x8e2201b0  lw          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A5Cu;
        goto label_197a5c;
    }
    ctx->pc = 0x197A54u;
    {
        const bool branch_taken_0x197a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197a54) {
            ctx->pc = 0x197A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197A54u;
            // 0x197a58: 0x8e2201b0  lw          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197A68u;
            goto label_197a68;
        }
    }
    ctx->pc = 0x197A5Cu;
label_197a5c:
    // 0x197a5c: 0xc067f04  jal         func_19FC10
label_197a60:
    if (ctx->pc == 0x197A60u) {
        ctx->pc = 0x197A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A5Cu;
        // 0x197a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A64u;
        goto label_197a64;
    }
    ctx->pc = 0x197A5Cu;
    SET_GPR_U32(ctx, 31, 0x197A64u);
    ctx->pc = 0x197A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A5Cu;
    // 0x197a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x197A5Cu, 0x197A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A64u;
label_197a64:
    // 0x197a64: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x197a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_197a68:
    // 0x197a68: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x197a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_197a6c:
    // 0x197a6c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_197a70:
    if (ctx->pc == 0x197A70u) {
        ctx->pc = 0x197A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A6Cu;
        // 0x197a70: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A74u;
        goto label_197a74;
    }
    ctx->pc = 0x197A6Cu;
    {
        const bool branch_taken_0x197a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197a6c) {
            ctx->pc = 0x197A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197A6Cu;
            // 0x197a70: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197a20;
        }
    }
    ctx->pc = 0x197A74u;
label_197a74:
    // 0x197a74: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x197a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_197a78:
    // 0x197a78: 0xc067f04  jal         func_19FC10
label_197a7c:
    if (ctx->pc == 0x197A7Cu) {
        ctx->pc = 0x197A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A78u;
        // 0x197a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A80u;
        goto label_197a80;
    }
    ctx->pc = 0x197A78u;
    SET_GPR_U32(ctx, 31, 0x197A80u);
    ctx->pc = 0x197A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A78u;
    // 0x197a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x197A78u, 0x197A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A80u;
label_197a80:
    // 0x197a80: 0xc05bedc  jal         func_16FB70
label_197a84:
    if (ctx->pc == 0x197A84u) {
        ctx->pc = 0x197A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A80u;
        // 0x197a84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A88u;
        goto label_197a88;
    }
    ctx->pc = 0x197A80u;
    SET_GPR_U32(ctx, 31, 0x197A88u);
    ctx->pc = 0x197A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A80u;
    // 0x197a84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x197A80u, 0x197A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A88u;
label_197a88:
    // 0x197a88: 0xc064e8e  jal         func_193A38
label_197a8c:
    if (ctx->pc == 0x197A8Cu) {
        ctx->pc = 0x197A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A88u;
        // 0x197a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A90u;
        goto label_197a90;
    }
    ctx->pc = 0x197A88u;
    SET_GPR_U32(ctx, 31, 0x197A90u);
    ctx->pc = 0x197A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A88u;
    // 0x197a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A38u, 0x197A88u, 0x197A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A90u;
label_197a90:
    // 0x197a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197a94:
    // 0x197a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_197a98:
    // 0x197a98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x197a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_197a9c:
    // 0x197a9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x197a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_197aa0:
    // 0x197aa0: 0x3e00008  jr          $ra
label_197aa4:
    if (ctx->pc == 0x197AA4u) {
        ctx->pc = 0x197AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AA0u;
        // 0x197aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AA8u;
        goto label_fallthrough_0x197aa0;
    }
    ctx->pc = 0x197AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AA0u;
        // 0x197aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197aa0:
    ctx->pc = 0x197AA8u;
}
