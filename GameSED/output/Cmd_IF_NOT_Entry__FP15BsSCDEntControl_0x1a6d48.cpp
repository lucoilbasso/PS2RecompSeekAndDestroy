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

// Function: Cmd_IF_NOT_Entry__FP15BsSCDEntControl
// Address: 0x1a6d48 - 0x1a6ec4
void Cmd_IF_NOT_Entry__FP15BsSCDEntControl_0x1a6d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IF_NOT_Entry__FP15BsSCDEntControl_0x1a6d48");
#endif

    switch (ctx->pc) {
        case 0x1a6d8cu: goto label_1a6d8c;
        case 0x1a6dccu: goto label_1a6dcc;
        case 0x1a6e50u: goto label_1a6e50;
        case 0x1a6e98u: goto label_1a6e98;
        default: break;
    }

    ctx->pc = 0x1a6d48u;

    // 0x1a6d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6d4c: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6d50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6d5c: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a6d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6d60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6d64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a6d68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6d6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a6d70: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a6d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6d74: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a6d78: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a6d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a6d7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6D7Cu;
    {
        const bool branch_taken_0x1a6d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D7Cu;
        // 0x1a6d80: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d7c) {
            ctx->pc = 0x1A6D98u;
            goto label_1a6d98;
        }
    }
    ctx->pc = 0x1A6D84u;
    // 0x1a6d84: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6D84u;
    SET_GPR_U32(ctx, 31, 0x1A6D8Cu);
    ctx->pc = 0x1A6D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D84u;
    // 0x1a6d88: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6D84u, 0x1A6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D8Cu;
label_1a6d8c:
    // 0x1a6d8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6D8Cu;
    {
        const bool branch_taken_0x1a6d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D8Cu;
        // 0x1a6d90: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d8c) {
            ctx->pc = 0x1A6D9Cu;
            goto label_1a6d9c;
        }
    }
    ctx->pc = 0x1A6D94u;
    // 0x1a6d94: 0x0  nop
    ctx->pc = 0x1a6d94u;
    // NOP
label_1a6d98:
    // 0x1a6d98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a6d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6d9c:
    // 0x1a6d9c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a6d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6da0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6da4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6da8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6dac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6db0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6db4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6db8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6dbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6DBCu;
    {
        const bool branch_taken_0x1a6dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DBCu;
        // 0x1a6dc0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dbc) {
            ctx->pc = 0x1A6DD0u;
            goto label_1a6dd0;
        }
    }
    ctx->pc = 0x1A6DC4u;
    // 0x1a6dc4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6DC4u;
    SET_GPR_U32(ctx, 31, 0x1A6DCCu);
    ctx->pc = 0x1A6DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DC4u;
    // 0x1a6dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6DC4u, 0x1A6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DCCu;
label_1a6dcc:
    // 0x1a6dcc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6dd0:
    // 0x1a6dd0: 0x2a020c00  slti        $v0, $s0, 0xC00
    ctx->pc = 0x1a6dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a6dd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6DD4u;
    {
        const bool branch_taken_0x1a6dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DD4u;
        // 0x1a6dd8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dd4) {
            ctx->pc = 0x1A6E08u;
            goto label_1a6e08;
        }
    }
    ctx->pc = 0x1A6DDCu;
    // 0x1a6ddc: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x1a6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1a6de0: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x1a6de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a6de4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6dec: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a6decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a6df0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6df4: 0x8c63fb30  lw          $v1, -0x4D0($v1)
    ctx->pc = 0x1a6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966064)));
    // 0x1a6df8: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1a6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a6dfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a6dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a6e00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A6E00u;
    {
        const bool branch_taken_0x1a6e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E00u;
        // 0x1a6e04: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e00) {
            ctx->pc = 0x1A6E54u;
            goto label_1a6e54;
        }
    }
    ctx->pc = 0x1A6E08u;
label_1a6e08:
    // 0x1a6e08: 0x2a020c40  slti        $v0, $s0, 0xC40
    ctx->pc = 0x1a6e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3136) ? 1 : 0);
    // 0x1a6e0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6E0Cu;
    {
        const bool branch_taken_0x1a6e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E0Cu;
        // 0x1a6e10: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e0c) {
            ctx->pc = 0x1A6E40u;
            goto label_1a6e40;
        }
    }
    ctx->pc = 0x1A6E14u;
    // 0x1a6e14: 0x2603f400  addiu       $v1, $s0, -0xC00
    ctx->pc = 0x1a6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964224));
    // 0x1a6e18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6e1c: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1a6e20: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a6e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a6e24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6e28: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1a6e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a6e2c: 0x9c1021  addu        $v0, $a0, $gp
    ctx->pc = 0x1a6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x1a6e30: 0x8c4290e0  lw          $v0, -0x6F20($v0)
    ctx->pc = 0x1a6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938848)));
    // 0x1a6e34: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a6e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a6e38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6E38u;
    {
        const bool branch_taken_0x1a6e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E38u;
        // 0x1a6e3c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e38) {
            ctx->pc = 0x1A6E54u;
            goto label_1a6e54;
        }
    }
    ctx->pc = 0x1A6E40u;
label_1a6e40:
    // 0x1a6e40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e44: 0x24a593d8  addiu       $a1, $a1, -0x6C28
    ctx->pc = 0x1a6e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
    // 0x1a6e48: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6E48u;
    SET_GPR_U32(ctx, 31, 0x1A6E50u);
    ctx->pc = 0x1A6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E48u;
    // 0x1a6e4c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6E48u, 0x1A6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E50u;
label_1a6e50:
    // 0x1a6e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e54:
    // 0x1a6e54: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6E54u;
    {
        const bool branch_taken_0x1a6e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E54u;
        // 0x1a6e58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e54) {
            ctx->pc = 0x1A6EB0u;
            goto label_1a6eb0;
        }
    }
    ctx->pc = 0x1A6E5Cu;
    // 0x1a6e5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6e60: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6E60u;
    {
        const bool branch_taken_0x1a6e60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6e60) {
            ctx->pc = 0x1A6E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6E60u;
            // 0x1a6e64: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6E78u;
            goto label_1a6e78;
        }
    }
    ctx->pc = 0x1A6E68u;
    // 0x1a6e68: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1a6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a6e6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a6e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a6e70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A6E70u;
    {
        const bool branch_taken_0x1a6e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E70u;
        // 0x1a6e74: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e70) {
            ctx->pc = 0x1A6EB0u;
            goto label_1a6eb0;
        }
    }
    ctx->pc = 0x1A6E78u;
label_1a6e78:
    // 0x1a6e78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a6e7c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a6e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a6e80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6E80u;
    {
        const bool branch_taken_0x1a6e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E80u;
        // 0x1a6e84: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e80) {
            ctx->pc = 0x1A6E98u;
            goto label_1a6e98;
        }
    }
    ctx->pc = 0x1A6E88u;
    // 0x1a6e88: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a6e8c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a6e90: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6E90u;
    SET_GPR_U32(ctx, 31, 0x1A6E98u);
    ctx->pc = 0x1A6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E90u;
    // 0x1a6e94: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6E90u, 0x1A6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E98u;
label_1a6e98:
    // 0x1a6e98: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a6e9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6ea0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a6ea4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a6ea8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a6eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6eb0:
    // 0x1a6eb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6eb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6eb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EBCu;
        // 0x1a6ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6EC4u;
}
