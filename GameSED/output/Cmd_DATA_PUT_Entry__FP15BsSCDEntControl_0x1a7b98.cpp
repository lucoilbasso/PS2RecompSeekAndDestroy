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

// Function: Cmd_DATA_PUT_Entry__FP15BsSCDEntControl
// Address: 0x1a7b98 - 0x1a7cd4
void Cmd_DATA_PUT_Entry__FP15BsSCDEntControl_0x1a7b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DATA_PUT_Entry__FP15BsSCDEntControl_0x1a7b98");
#endif

    switch (ctx->pc) {
        case 0x1a7be0u: goto label_1a7be0;
        case 0x1a7c1cu: goto label_1a7c1c;
        case 0x1a7c4cu: goto label_1a7c4c;
        case 0x1a7ca4u: goto label_1a7ca4;
        default: break;
    }

    ctx->pc = 0x1a7b98u;

    // 0x1a7b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7b9c: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7bac: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a7bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7bb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7bb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a7bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a7bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7bbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7bc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7bc4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7bc8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7bcc: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7bd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7BD0u;
    {
        const bool branch_taken_0x1a7bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BD0u;
        // 0x1a7bd4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bd0) {
            ctx->pc = 0x1A7BE8u;
            goto label_1a7be8;
        }
    }
    ctx->pc = 0x1A7BD8u;
    // 0x1a7bd8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7BD8u;
    SET_GPR_U32(ctx, 31, 0x1A7BE0u);
    ctx->pc = 0x1A7BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BD8u;
    // 0x1a7bdc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7BD8u, 0x1A7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BE0u;
label_1a7be0:
    // 0x1a7be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7BE0u;
    {
        const bool branch_taken_0x1a7be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BE0u;
        // 0x1a7be4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7be0) {
            ctx->pc = 0x1A7BECu;
            goto label_1a7bec;
        }
    }
    ctx->pc = 0x1A7BE8u;
label_1a7be8:
    // 0x1a7be8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7bec:
    // 0x1a7bec: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7bf0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7bf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7bf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a7bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7c00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7c04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7c08: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a7c08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7c0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7C0Cu;
    {
        const bool branch_taken_0x1a7c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C0Cu;
        // 0x1a7c10: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c0c) {
            ctx->pc = 0x1A7C20u;
            goto label_1a7c20;
        }
    }
    ctx->pc = 0x1A7C14u;
    // 0x1a7c14: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7C14u;
    SET_GPR_U32(ctx, 31, 0x1A7C1Cu);
    ctx->pc = 0x1A7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C14u;
    // 0x1a7c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7C14u, 0x1A7C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C1Cu;
label_1a7c1c:
    // 0x1a7c1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7c20:
    // 0x1a7c20: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A7C20u;
    {
        const bool branch_taken_0x1a7c20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C20u;
        // 0x1a7c24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c20) {
            ctx->pc = 0x1A7C68u;
            goto label_1a7c68;
        }
    }
    ctx->pc = 0x1A7C28u;
    // 0x1a7c28: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1a7c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a7c2c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7c30: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a7c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7c34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7C34u;
    {
        const bool branch_taken_0x1a7c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C34u;
        // 0x1a7c38: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c34) {
            ctx->pc = 0x1A7C4Cu;
            goto label_1a7c4c;
        }
    }
    ctx->pc = 0x1A7C3Cu;
    // 0x1a7c3c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7c40: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7c44: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7C44u;
    SET_GPR_U32(ctx, 31, 0x1A7C4Cu);
    ctx->pc = 0x1A7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C44u;
    // 0x1a7c48: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7C44u, 0x1A7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C4Cu;
label_1a7c4c:
    // 0x1a7c4c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a7c50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7c54: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7c58: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a7c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7C5Cu;
    {
        const bool branch_taken_0x1a7c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C5Cu;
        // 0x1a7c60: 0x24670004  addiu       $a3, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c5c) {
            ctx->pc = 0x1A7C6Cu;
            goto label_1a7c6c;
        }
    }
    ctx->pc = 0x1A7C64u;
    // 0x1a7c64: 0x0  nop
    ctx->pc = 0x1a7c64u;
    // NOP
label_1a7c68:
    // 0x1a7c68: 0x8e270038  lw          $a3, 0x38($s1)
    ctx->pc = 0x1a7c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1a7c6c:
    // 0x1a7c6c: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7c70: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7c74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7c78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7c7c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1a7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a7c80: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a7c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7c84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7c88: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a7c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7c8c: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a7c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7c90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7C90u;
    {
        const bool branch_taken_0x1a7c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C90u;
        // 0x1a7c94: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c90) {
            ctx->pc = 0x1A7CB0u;
            goto label_1a7cb0;
        }
    }
    ctx->pc = 0x1A7C98u;
    // 0x1a7c98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c9c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7CA4u);
    ctx->pc = 0x1A7CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C9Cu;
    // 0x1a7ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7C9Cu, 0x1A7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CA4u;
label_1a7ca4:
    // 0x1a7ca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7CA4u;
    {
        const bool branch_taken_0x1a7ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CA4u;
        // 0x1a7ca8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ca4) {
            ctx->pc = 0x1A7CB4u;
            goto label_1a7cb4;
        }
    }
    ctx->pc = 0x1A7CACu;
    // 0x1a7cac: 0x0  nop
    ctx->pc = 0x1a7cacu;
    // NOP
label_1a7cb0:
    // 0x1a7cb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cb4:
    // 0x1a7cb4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1a7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1a7cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7cc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CCCu;
        // 0x1a7cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7CD4u;
}
