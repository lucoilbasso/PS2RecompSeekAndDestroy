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

// Function: WSequenceJobBankExec__FP10WcSequencei
// Address: 0x199b88 - 0x199cbc
void WSequenceJobBankExec__FP10WcSequencei_0x199b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSequenceJobBankExec__FP10WcSequencei_0x199b88");
#endif

    switch (ctx->pc) {
        case 0x199b88u: goto label_199b88;
        case 0x199b8cu: goto label_199b8c;
        case 0x199b90u: goto label_199b90;
        case 0x199b94u: goto label_199b94;
        case 0x199b98u: goto label_199b98;
        case 0x199b9cu: goto label_199b9c;
        case 0x199ba0u: goto label_199ba0;
        case 0x199ba4u: goto label_199ba4;
        case 0x199ba8u: goto label_199ba8;
        case 0x199bacu: goto label_199bac;
        case 0x199bb0u: goto label_199bb0;
        case 0x199bb4u: goto label_199bb4;
        case 0x199bb8u: goto label_199bb8;
        case 0x199bbcu: goto label_199bbc;
        case 0x199bc0u: goto label_199bc0;
        case 0x199bc4u: goto label_199bc4;
        case 0x199bc8u: goto label_199bc8;
        case 0x199bccu: goto label_199bcc;
        case 0x199bd0u: goto label_199bd0;
        case 0x199bd4u: goto label_199bd4;
        case 0x199bd8u: goto label_199bd8;
        case 0x199bdcu: goto label_199bdc;
        case 0x199be0u: goto label_199be0;
        case 0x199be4u: goto label_199be4;
        case 0x199be8u: goto label_199be8;
        case 0x199becu: goto label_199bec;
        case 0x199bf0u: goto label_199bf0;
        case 0x199bf4u: goto label_199bf4;
        case 0x199bf8u: goto label_199bf8;
        case 0x199bfcu: goto label_199bfc;
        case 0x199c00u: goto label_199c00;
        case 0x199c04u: goto label_199c04;
        case 0x199c08u: goto label_199c08;
        case 0x199c0cu: goto label_199c0c;
        case 0x199c10u: goto label_199c10;
        case 0x199c14u: goto label_199c14;
        case 0x199c18u: goto label_199c18;
        case 0x199c1cu: goto label_199c1c;
        case 0x199c20u: goto label_199c20;
        case 0x199c24u: goto label_199c24;
        case 0x199c28u: goto label_199c28;
        case 0x199c2cu: goto label_199c2c;
        case 0x199c30u: goto label_199c30;
        case 0x199c34u: goto label_199c34;
        case 0x199c38u: goto label_199c38;
        case 0x199c3cu: goto label_199c3c;
        case 0x199c40u: goto label_199c40;
        case 0x199c44u: goto label_199c44;
        case 0x199c48u: goto label_199c48;
        case 0x199c4cu: goto label_199c4c;
        case 0x199c50u: goto label_199c50;
        case 0x199c54u: goto label_199c54;
        case 0x199c58u: goto label_199c58;
        case 0x199c5cu: goto label_199c5c;
        case 0x199c60u: goto label_199c60;
        case 0x199c64u: goto label_199c64;
        case 0x199c68u: goto label_199c68;
        case 0x199c6cu: goto label_199c6c;
        case 0x199c70u: goto label_199c70;
        case 0x199c74u: goto label_199c74;
        case 0x199c78u: goto label_199c78;
        case 0x199c7cu: goto label_199c7c;
        case 0x199c80u: goto label_199c80;
        case 0x199c84u: goto label_199c84;
        case 0x199c88u: goto label_199c88;
        case 0x199c8cu: goto label_199c8c;
        case 0x199c90u: goto label_199c90;
        case 0x199c94u: goto label_199c94;
        case 0x199c98u: goto label_199c98;
        case 0x199c9cu: goto label_199c9c;
        case 0x199ca0u: goto label_199ca0;
        case 0x199ca4u: goto label_199ca4;
        case 0x199ca8u: goto label_199ca8;
        case 0x199cacu: goto label_199cac;
        case 0x199cb0u: goto label_199cb0;
        case 0x199cb4u: goto label_199cb4;
        case 0x199cb8u: goto label_199cb8;
        default: break;
    }

    ctx->pc = 0x199b88u;

label_199b88:
    // 0x199b88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_199b8c:
    // 0x199b8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_199b90:
    // 0x199b90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x199b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199b94:
    // 0x199b94: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x199b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_199b98:
    // 0x199b98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x199b98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199b9c:
    // 0x199b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199ba0:
    // 0x199ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_199ba4:
    // 0x199ba4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x199ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_199ba8:
    // 0x199ba8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x199ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_199bac:
    // 0x199bac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x199bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_199bb0:
    // 0x199bb0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x199bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_199bb4:
    // 0x199bb4: 0x8e54002c  lw          $s4, 0x2C($s2)
    ctx->pc = 0x199bb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_199bb8:
    // 0x199bb8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x199bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_199bbc:
    // 0x199bbc: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x199bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_199bc0:
    // 0x199bc0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_199bc4:
    if (ctx->pc == 0x199BC4u) {
        ctx->pc = 0x199BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BC0u;
        // 0x199bc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199BC8u;
        goto label_199bc8;
    }
    ctx->pc = 0x199BC0u;
    {
        const bool branch_taken_0x199bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BC0u;
        // 0x199bc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bc0) {
            ctx->pc = 0x199C98u;
            goto label_199c98;
        }
    }
    ctx->pc = 0x199BC8u;
label_199bc8:
    // 0x199bc8: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x199bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_199bcc:
    // 0x199bcc: 0x26930004  addiu       $s3, $s4, 0x4
    ctx->pc = 0x199bccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_199bd0:
    // 0x199bd0: 0x2c560002  sltiu       $s6, $v0, 0x2
    ctx->pc = 0x199bd0u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_199bd4:
    // 0x199bd4: 0x0  nop
    ctx->pc = 0x199bd4u;
    // NOP
label_199bd8:
    // 0x199bd8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x199bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_199bdc:
    // 0x199bdc: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x199bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_199be0:
    // 0x199be0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_199be4:
    // 0x199be4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x199be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_199be8:
    // 0x199be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_199bec:
    // 0x199bec: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x199becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_199bf0:
    // 0x199bf0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x199bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_199bf4:
    // 0x199bf4: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
label_199bf8:
    if (ctx->pc == 0x199BF8u) {
        ctx->pc = 0x199BFCu;
        goto label_199bfc;
    }
    ctx->pc = 0x199BF4u;
    {
        const bool branch_taken_0x199bf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x199bf4) {
            ctx->pc = 0x199C88u;
            goto label_199c88;
        }
    }
    ctx->pc = 0x199BFCu;
label_199bfc:
    // 0x199bfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199c00:
    // 0x199c00: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x199c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_199c04:
    // 0x199c04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_199c08:
    if (ctx->pc == 0x199C08u) {
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C0Cu;
        goto label_199c0c;
    }
    ctx->pc = 0x199C04u;
    {
        const bool branch_taken_0x199c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c04) {
            ctx->pc = 0x199C14u;
            goto label_199c14;
        }
    }
    ctx->pc = 0x199C0Cu;
label_199c0c:
    // 0x199c0c: 0x16a0001e  bnez        $s5, . + 4 + (0x1E << 2)
label_199c10:
    if (ctx->pc == 0x199C10u) {
        ctx->pc = 0x199C14u;
        goto label_199c14;
    }
    ctx->pc = 0x199C0Cu;
    {
        const bool branch_taken_0x199c0c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x199c0c) {
            ctx->pc = 0x199C88u;
            goto label_199c88;
        }
    }
    ctx->pc = 0x199C14u;
label_199c14:
    // 0x199c14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_199c18:
    if (ctx->pc == 0x199C18u) {
        ctx->pc = 0x199C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C14u;
        // 0x199c18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C1Cu;
        goto label_199c1c;
    }
    ctx->pc = 0x199C14u;
    {
        const bool branch_taken_0x199c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C14u;
        // 0x199c18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c14) {
            ctx->pc = 0x199C24u;
            goto label_199c24;
        }
    }
    ctx->pc = 0x199C1Cu;
label_199c1c:
    // 0x199c1c: 0x16c0001a  bnez        $s6, . + 4 + (0x1A << 2)
label_199c20:
    if (ctx->pc == 0x199C20u) {
        ctx->pc = 0x199C24u;
        goto label_199c24;
    }
    ctx->pc = 0x199C1Cu;
    {
        const bool branch_taken_0x199c1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x199c1c) {
            ctx->pc = 0x199C88u;
            goto label_199c88;
        }
    }
    ctx->pc = 0x199C24u;
label_199c24:
    // 0x199c24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x199c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199c28:
    // 0x199c28: 0xc05dd1a  jal         func_177468
label_199c2c:
    if (ctx->pc == 0x199C2Cu) {
        ctx->pc = 0x199C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C28u;
        // 0x199c2c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C30u;
        goto label_199c30;
    }
    ctx->pc = 0x199C28u;
    SET_GPR_U32(ctx, 31, 0x199C30u);
    ctx->pc = 0x199C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C28u;
    // 0x199c2c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177468u, 0x199C28u, 0x199C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C30u;
label_199c30:
    // 0x199c30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199c34:
    // 0x199c34: 0x0  nop
    ctx->pc = 0x199c34u;
    // NOP
label_199c38:
    // 0x199c38: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x199c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_199c3c:
    // 0x199c3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x199c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_199c40:
    // 0x199c40: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_199c44:
    if (ctx->pc == 0x199C44u) {
        ctx->pc = 0x199C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C40u;
        // 0x199c44: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C48u;
        goto label_199c48;
    }
    ctx->pc = 0x199C40u;
    {
        const bool branch_taken_0x199c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C40u;
        // 0x199c44: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c40) {
            ctx->pc = 0x199C70u;
            goto label_199c70;
        }
    }
    ctx->pc = 0x199C48u;
label_199c48:
    // 0x199c48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_199c4c:
    // 0x199c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_199c50:
    if (ctx->pc == 0x199C50u) {
        ctx->pc = 0x199C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C4Cu;
        // 0x199c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C54u;
        goto label_199c54;
    }
    ctx->pc = 0x199C4Cu;
    {
        const bool branch_taken_0x199c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C4Cu;
        // 0x199c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c4c) {
            ctx->pc = 0x199C68u;
            goto label_199c68;
        }
    }
    ctx->pc = 0x199C54u;
label_199c54:
    // 0x199c54: 0x40f809  jalr        $v0
label_199c58:
    if (ctx->pc == 0x199C58u) {
        ctx->pc = 0x199C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C54u;
        // 0x199c58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C5Cu;
        goto label_199c5c;
    }
    ctx->pc = 0x199C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199C5Cu);
        ctx->pc = 0x199C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C54u;
        // 0x199c58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C54u, 0x199C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199C5Cu;
label_199c5c:
    // 0x199c5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_199c60:
    if (ctx->pc == 0x199C60u) {
        ctx->pc = 0x199C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C5Cu;
        // 0x199c60: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C64u;
        goto label_199c64;
    }
    ctx->pc = 0x199C5Cu;
    {
        const bool branch_taken_0x199c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C5Cu;
        // 0x199c60: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c5c) {
            ctx->pc = 0x199C74u;
            goto label_199c74;
        }
    }
    ctx->pc = 0x199C64u;
label_199c64:
    // 0x199c64: 0x0  nop
    ctx->pc = 0x199c64u;
    // NOP
label_199c68:
    // 0x199c68: 0xc0685ca  jal         func_1A1728
label_199c6c:
    if (ctx->pc == 0x199C6Cu) {
        ctx->pc = 0x199C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C68u;
        // 0x199c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C70u;
        goto label_199c70;
    }
    ctx->pc = 0x199C68u;
    SET_GPR_U32(ctx, 31, 0x199C70u);
    ctx->pc = 0x199C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C68u;
    // 0x199c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1728u, 0x199C68u, 0x199C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C70u;
label_199c70:
    // 0x199c70: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x199c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_199c74:
    // 0x199c74: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x199c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_199c78:
    // 0x199c78: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
label_199c7c:
    if (ctx->pc == 0x199C7Cu) {
        ctx->pc = 0x199C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C78u;
        // 0x199c7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C80u;
        goto label_199c80;
    }
    ctx->pc = 0x199C78u;
    {
        const bool branch_taken_0x199c78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x199c78) {
            ctx->pc = 0x199C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199C78u;
            // 0x199c7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199c38;
        }
    }
    ctx->pc = 0x199C80u;
label_199c80:
    // 0x199c80: 0xc05dd1c  jal         func_177470
label_199c84:
    if (ctx->pc == 0x199C84u) {
        ctx->pc = 0x199C88u;
        goto label_199c88;
    }
    ctx->pc = 0x199C80u;
    SET_GPR_U32(ctx, 31, 0x199C88u);
    ctx->pc = 0x177470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177470u, 0x199C80u, 0x199C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C88u;
label_199c88:
    // 0x199c88: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x199c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_199c8c:
    // 0x199c8c: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x199c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_199c90:
    // 0x199c90: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_199c94:
    if (ctx->pc == 0x199C94u) {
        ctx->pc = 0x199C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C90u;
        // 0x199c94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C98u;
        goto label_199c98;
    }
    ctx->pc = 0x199C90u;
    {
        const bool branch_taken_0x199c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C90u;
        // 0x199c94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c90) {
            ctx->pc = 0x199BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199bd8;
        }
    }
    ctx->pc = 0x199C98u;
label_199c98:
    // 0x199c98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199c9c:
    // 0x199c9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199ca0:
    // 0x199ca0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x199ca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_199ca4:
    // 0x199ca4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x199ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_199ca8:
    // 0x199ca8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x199ca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_199cac:
    // 0x199cac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x199cacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_199cb0:
    // 0x199cb0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x199cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_199cb4:
    // 0x199cb4: 0x3e00008  jr          $ra
label_199cb8:
    if (ctx->pc == 0x199CB8u) {
        ctx->pc = 0x199CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CB4u;
        // 0x199cb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199CBCu;
        goto label_fallthrough_0x199cb4;
    }
    ctx->pc = 0x199CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CB4u;
        // 0x199cb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199cb4:
    ctx->pc = 0x199CBCu;
}
