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

// Function: Cmd_OBJ_CLR_Entry__FP15BsSCDEntControl
// Address: 0x107b50 - 0x107c24
void Cmd_OBJ_CLR_Entry__FP15BsSCDEntControl_0x107b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_CLR_Entry__FP15BsSCDEntControl_0x107b50");
#endif

    switch (ctx->pc) {
        case 0x107b50u: goto label_107b50;
        case 0x107b54u: goto label_107b54;
        case 0x107b58u: goto label_107b58;
        case 0x107b5cu: goto label_107b5c;
        case 0x107b60u: goto label_107b60;
        case 0x107b64u: goto label_107b64;
        case 0x107b68u: goto label_107b68;
        case 0x107b6cu: goto label_107b6c;
        case 0x107b70u: goto label_107b70;
        case 0x107b74u: goto label_107b74;
        case 0x107b78u: goto label_107b78;
        case 0x107b7cu: goto label_107b7c;
        case 0x107b80u: goto label_107b80;
        case 0x107b84u: goto label_107b84;
        case 0x107b88u: goto label_107b88;
        case 0x107b8cu: goto label_107b8c;
        case 0x107b90u: goto label_107b90;
        case 0x107b94u: goto label_107b94;
        case 0x107b98u: goto label_107b98;
        case 0x107b9cu: goto label_107b9c;
        case 0x107ba0u: goto label_107ba0;
        case 0x107ba4u: goto label_107ba4;
        case 0x107ba8u: goto label_107ba8;
        case 0x107bacu: goto label_107bac;
        case 0x107bb0u: goto label_107bb0;
        case 0x107bb4u: goto label_107bb4;
        case 0x107bb8u: goto label_107bb8;
        case 0x107bbcu: goto label_107bbc;
        case 0x107bc0u: goto label_107bc0;
        case 0x107bc4u: goto label_107bc4;
        case 0x107bc8u: goto label_107bc8;
        case 0x107bccu: goto label_107bcc;
        case 0x107bd0u: goto label_107bd0;
        case 0x107bd4u: goto label_107bd4;
        case 0x107bd8u: goto label_107bd8;
        case 0x107bdcu: goto label_107bdc;
        case 0x107be0u: goto label_107be0;
        case 0x107be4u: goto label_107be4;
        case 0x107be8u: goto label_107be8;
        case 0x107becu: goto label_107bec;
        case 0x107bf0u: goto label_107bf0;
        case 0x107bf4u: goto label_107bf4;
        case 0x107bf8u: goto label_107bf8;
        case 0x107bfcu: goto label_107bfc;
        case 0x107c00u: goto label_107c00;
        case 0x107c04u: goto label_107c04;
        case 0x107c08u: goto label_107c08;
        case 0x107c0cu: goto label_107c0c;
        case 0x107c10u: goto label_107c10;
        case 0x107c14u: goto label_107c14;
        case 0x107c18u: goto label_107c18;
        case 0x107c1cu: goto label_107c1c;
        case 0x107c20u: goto label_107c20;
        default: break;
    }

    ctx->pc = 0x107b50u;

label_107b50:
    // 0x107b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_107b54:
    // 0x107b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_107b58:
    // 0x107b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107b5c:
    // 0x107b5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x107b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_107b60:
    // 0x107b60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x107b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_107b64:
    // 0x107b64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x107b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_107b68:
    // 0x107b68: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x107b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107b6c:
    // 0x107b6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x107b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_107b70:
    // 0x107b70: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_107b74:
    if (ctx->pc == 0x107B74u) {
        ctx->pc = 0x107B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B70u;
        // 0x107b74: 0x8c510044  lw          $s1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B78u;
        goto label_107b78;
    }
    ctx->pc = 0x107B70u;
    {
        const bool branch_taken_0x107b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B70u;
        // 0x107b74: 0x8c510044  lw          $s1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b70) {
            ctx->pc = 0x107BD8u;
            goto label_107bd8;
        }
    }
    ctx->pc = 0x107B78u;
label_107b78:
    // 0x107b78: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x107b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_107b7c:
    // 0x107b7c: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_107b80:
    if (ctx->pc == 0x107B80u) {
        ctx->pc = 0x107B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B7Cu;
        // 0x107b80: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B84u;
        goto label_107b84;
    }
    ctx->pc = 0x107B7Cu;
    {
        const bool branch_taken_0x107b7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x107B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B7Cu;
        // 0x107b80: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b7c) {
            ctx->pc = 0x107C0Cu;
            goto label_107c0c;
        }
    }
    ctx->pc = 0x107B84u;
label_107b84:
    // 0x107b84: 0x0  nop
    ctx->pc = 0x107b84u;
    // NOP
label_107b88:
    // 0x107b88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x107b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_107b8c:
    // 0x107b8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x107b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_107b90:
    // 0x107b90: 0xc0410e4  jal         func_104390
label_107b94:
    if (ctx->pc == 0x107B94u) {
        ctx->pc = 0x107B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B90u;
        // 0x107b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B98u;
        goto label_107b98;
    }
    ctx->pc = 0x107B90u;
    SET_GPR_U32(ctx, 31, 0x107B98u);
    ctx->pc = 0x107B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B90u;
    // 0x107b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x107B90u, 0x107B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B98u;
label_107b98:
    // 0x107b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107b9c:
    // 0x107b9c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x107b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107ba0:
    // 0x107ba0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_107ba4:
    if (ctx->pc == 0x107BA4u) {
        ctx->pc = 0x107BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BA0u;
        // 0x107ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BA8u;
        goto label_107ba8;
    }
    ctx->pc = 0x107BA0u;
    {
        const bool branch_taken_0x107ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BA0u;
        // 0x107ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ba0) {
            ctx->pc = 0x107BC0u;
            goto label_107bc0;
        }
    }
    ctx->pc = 0x107BA8u;
label_107ba8:
    // 0x107ba8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_107bac:
    // 0x107bac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x107bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_107bb0:
    // 0x107bb0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107bb4:
    // 0x107bb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107bb8:
    // 0x107bb8: 0x60f809  jalr        $v1
label_107bbc:
    if (ctx->pc == 0x107BBCu) {
        ctx->pc = 0x107BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BB8u;
        // 0x107bbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BC0u;
        goto label_107bc0;
    }
    ctx->pc = 0x107BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107BC0u);
        ctx->pc = 0x107BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BB8u;
        // 0x107bbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107BB8u, 0x107BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107BC0u;
label_107bc0:
    // 0x107bc0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x107bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_107bc4:
    // 0x107bc4: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x107bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_107bc8:
    // 0x107bc8: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
label_107bcc:
    if (ctx->pc == 0x107BCCu) {
        ctx->pc = 0x107BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BC8u;
        // 0x107bcc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BD0u;
        goto label_107bd0;
    }
    ctx->pc = 0x107BC8u;
    {
        const bool branch_taken_0x107bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BC8u;
        // 0x107bcc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bc8) {
            ctx->pc = 0x107B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107b88;
        }
    }
    ctx->pc = 0x107BD0u;
label_107bd0:
    // 0x107bd0: 0x1000000f  b           . + 4 + (0xF << 2)
label_107bd4:
    if (ctx->pc == 0x107BD4u) {
        ctx->pc = 0x107BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BD0u;
        // 0x107bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BD8u;
        goto label_107bd8;
    }
    ctx->pc = 0x107BD0u;
    {
        const bool branch_taken_0x107bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BD0u;
        // 0x107bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bd0) {
            ctx->pc = 0x107C10u;
            goto label_107c10;
        }
    }
    ctx->pc = 0x107BD8u;
label_107bd8:
    // 0x107bd8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_107bdc:
    // 0x107bdc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_107be0:
    if (ctx->pc == 0x107BE0u) {
        ctx->pc = 0x107BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BDCu;
        // 0x107be0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BE4u;
        goto label_107be4;
    }
    ctx->pc = 0x107BDCu;
    {
        const bool branch_taken_0x107bdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x107BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BDCu;
        // 0x107be0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bdc) {
            ctx->pc = 0x107C0Cu;
            goto label_107c0c;
        }
    }
    ctx->pc = 0x107BE4u;
label_107be4:
    // 0x107be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107be8:
    // 0x107be8: 0xc06a26e  jal         func_1A89B8
label_107bec:
    if (ctx->pc == 0x107BECu) {
        ctx->pc = 0x107BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BE8u;
        // 0x107bec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BF0u;
        goto label_107bf0;
    }
    ctx->pc = 0x107BE8u;
    SET_GPR_U32(ctx, 31, 0x107BF0u);
    ctx->pc = 0x107BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BE8u;
    // 0x107bec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107BE8u, 0x107BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BF0u;
label_107bf0:
    // 0x107bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107bf4:
    // 0x107bf4: 0xc040d98  jal         func_103660
label_107bf8:
    if (ctx->pc == 0x107BF8u) {
        ctx->pc = 0x107BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BF4u;
        // 0x107bf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BFCu;
        goto label_107bfc;
    }
    ctx->pc = 0x107BF4u;
    SET_GPR_U32(ctx, 31, 0x107BFCu);
    ctx->pc = 0x107BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BF4u;
    // 0x107bf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103660u, 0x107BF4u, 0x107BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BFCu;
label_107bfc:
    // 0x107bfc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_107c00:
    // 0x107c00: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x107c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_107c04:
    // 0x107c04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_107c08:
    if (ctx->pc == 0x107C08u) {
        ctx->pc = 0x107C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C04u;
        // 0x107c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C0Cu;
        goto label_107c0c;
    }
    ctx->pc = 0x107C04u;
    {
        const bool branch_taken_0x107c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C04u;
        // 0x107c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c04) {
            ctx->pc = 0x107BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107be8;
        }
    }
    ctx->pc = 0x107C0Cu;
label_107c0c:
    // 0x107c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107c10:
    // 0x107c10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x107c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_107c14:
    // 0x107c14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x107c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_107c18:
    // 0x107c18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x107c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_107c1c:
    // 0x107c1c: 0x3e00008  jr          $ra
label_107c20:
    if (ctx->pc == 0x107C20u) {
        ctx->pc = 0x107C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C1Cu;
        // 0x107c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C24u;
        goto label_fallthrough_0x107c1c;
    }
    ctx->pc = 0x107C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C1Cu;
        // 0x107c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x107c1c:
    ctx->pc = 0x107C24u;
}
