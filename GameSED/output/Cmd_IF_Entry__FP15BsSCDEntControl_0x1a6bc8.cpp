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

// Function: Cmd_IF_Entry__FP15BsSCDEntControl
// Address: 0x1a6bc8 - 0x1a6d44
void Cmd_IF_Entry__FP15BsSCDEntControl_0x1a6bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IF_Entry__FP15BsSCDEntControl_0x1a6bc8");
#endif

    switch (ctx->pc) {
        case 0x1a6c0cu: goto label_1a6c0c;
        case 0x1a6c4cu: goto label_1a6c4c;
        case 0x1a6cd0u: goto label_1a6cd0;
        case 0x1a6d18u: goto label_1a6d18;
        default: break;
    }

    ctx->pc = 0x1a6bc8u;

    // 0x1a6bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6bcc: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6bdc: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a6bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6be0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6be4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a6be8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6bec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a6becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a6bf0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6bf4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a6bf8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a6bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a6bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6BFCu;
    {
        const bool branch_taken_0x1a6bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BFCu;
        // 0x1a6c00: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bfc) {
            ctx->pc = 0x1A6C18u;
            goto label_1a6c18;
        }
    }
    ctx->pc = 0x1A6C04u;
    // 0x1a6c04: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6C04u;
    SET_GPR_U32(ctx, 31, 0x1A6C0Cu);
    ctx->pc = 0x1A6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C04u;
    // 0x1a6c08: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6C04u, 0x1A6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C0Cu;
label_1a6c0c:
    // 0x1a6c0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6C0Cu;
    {
        const bool branch_taken_0x1a6c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C0Cu;
        // 0x1a6c10: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c0c) {
            ctx->pc = 0x1A6C1Cu;
            goto label_1a6c1c;
        }
    }
    ctx->pc = 0x1A6C14u;
    // 0x1a6c14: 0x0  nop
    ctx->pc = 0x1a6c14u;
    // NOP
label_1a6c18:
    // 0x1a6c18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a6c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6c1c:
    // 0x1a6c1c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6c20: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6c24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6c28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6c30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6c34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6c38: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6c3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6C3Cu;
    {
        const bool branch_taken_0x1a6c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C3Cu;
        // 0x1a6c40: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c3c) {
            ctx->pc = 0x1A6C50u;
            goto label_1a6c50;
        }
    }
    ctx->pc = 0x1A6C44u;
    // 0x1a6c44: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6C44u;
    SET_GPR_U32(ctx, 31, 0x1A6C4Cu);
    ctx->pc = 0x1A6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C44u;
    // 0x1a6c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6C44u, 0x1A6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C4Cu;
label_1a6c4c:
    // 0x1a6c4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6c50:
    // 0x1a6c50: 0x2a020c00  slti        $v0, $s0, 0xC00
    ctx->pc = 0x1a6c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a6c54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6C54u;
    {
        const bool branch_taken_0x1a6c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C54u;
        // 0x1a6c58: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c54) {
            ctx->pc = 0x1A6C88u;
            goto label_1a6c88;
        }
    }
    ctx->pc = 0x1A6C5Cu;
    // 0x1a6c5c: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x1a6c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1a6c60: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x1a6c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a6c64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6c6c: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a6c70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6c74: 0x8c63fb30  lw          $v1, -0x4D0($v1)
    ctx->pc = 0x1a6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966064)));
    // 0x1a6c78: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1a6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a6c7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a6c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a6c80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A6C80u;
    {
        const bool branch_taken_0x1a6c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C80u;
        // 0x1a6c84: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c80) {
            ctx->pc = 0x1A6CD4u;
            goto label_1a6cd4;
        }
    }
    ctx->pc = 0x1A6C88u;
label_1a6c88:
    // 0x1a6c88: 0x2a020c40  slti        $v0, $s0, 0xC40
    ctx->pc = 0x1a6c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3136) ? 1 : 0);
    // 0x1a6c8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6C8Cu;
    {
        const bool branch_taken_0x1a6c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C8Cu;
        // 0x1a6c90: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c8c) {
            ctx->pc = 0x1A6CC0u;
            goto label_1a6cc0;
        }
    }
    ctx->pc = 0x1A6C94u;
    // 0x1a6c94: 0x2603f400  addiu       $v1, $s0, -0xC00
    ctx->pc = 0x1a6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964224));
    // 0x1a6c98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6c9c: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x1a6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1a6ca0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a6ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a6ca4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6ca8: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1a6ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a6cac: 0x9c1021  addu        $v0, $a0, $gp
    ctx->pc = 0x1a6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x1a6cb0: 0x8c4290e0  lw          $v0, -0x6F20($v0)
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938848)));
    // 0x1a6cb4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a6cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a6cb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6CB8u;
    {
        const bool branch_taken_0x1a6cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CB8u;
        // 0x1a6cbc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cb8) {
            ctx->pc = 0x1A6CD4u;
            goto label_1a6cd4;
        }
    }
    ctx->pc = 0x1A6CC0u;
label_1a6cc0:
    // 0x1a6cc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6cc4: 0x24a593d8  addiu       $a1, $a1, -0x6C28
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
    // 0x1a6cc8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6CC8u;
    SET_GPR_U32(ctx, 31, 0x1A6CD0u);
    ctx->pc = 0x1A6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6CC8u;
    // 0x1a6ccc: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6CC8u, 0x1A6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CD0u;
label_1a6cd0:
    // 0x1a6cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6cd4:
    // 0x1a6cd4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A6CD4u;
    {
        const bool branch_taken_0x1a6cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD4u;
        // 0x1a6cd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cd4) {
            ctx->pc = 0x1A6D2Cu;
            goto label_1a6d2c;
        }
    }
    ctx->pc = 0x1A6CDCu;
    // 0x1a6cdc: 0x56420006  bnel        $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6CDCu;
    {
        const bool branch_taken_0x1a6cdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6cdc) {
            ctx->pc = 0x1A6CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6CDCu;
            // 0x1a6ce0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6CF8u;
            goto label_1a6cf8;
        }
    }
    ctx->pc = 0x1A6CE4u;
    // 0x1a6ce4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1a6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a6ce8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a6ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a6cec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A6CECu;
    {
        const bool branch_taken_0x1a6cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CECu;
        // 0x1a6cf0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cec) {
            ctx->pc = 0x1A6D2Cu;
            goto label_1a6d2c;
        }
    }
    ctx->pc = 0x1A6CF4u;
    // 0x1a6cf4: 0x0  nop
    ctx->pc = 0x1a6cf4u;
    // NOP
label_1a6cf8:
    // 0x1a6cf8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a6cfc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a6cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a6d00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6D00u;
    {
        const bool branch_taken_0x1a6d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D00u;
        // 0x1a6d04: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d00) {
            ctx->pc = 0x1A6D18u;
            goto label_1a6d18;
        }
    }
    ctx->pc = 0x1A6D08u;
    // 0x1a6d08: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a6d0c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a6d10: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6D10u;
    SET_GPR_U32(ctx, 31, 0x1A6D18u);
    ctx->pc = 0x1A6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D10u;
    // 0x1a6d14: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6D10u, 0x1A6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D18u;
label_1a6d18:
    // 0x1a6d18: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a6d1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6d20: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a6d24: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a6d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a6d28: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1a6d2c:
    // 0x1a6d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D3Cu;
        // 0x1a6d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6D44u;
}
