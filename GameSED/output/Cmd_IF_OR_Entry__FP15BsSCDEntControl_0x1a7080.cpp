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

// Function: Cmd_IF_OR_Entry__FP15BsSCDEntControl
// Address: 0x1a7080 - 0x1a7240
void Cmd_IF_OR_Entry__FP15BsSCDEntControl_0x1a7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IF_OR_Entry__FP15BsSCDEntControl_0x1a7080");
#endif

    switch (ctx->pc) {
        case 0x1a70d8u: goto label_1a70d8;
        case 0x1a70fcu: goto label_1a70fc;
        case 0x1a7174u: goto label_1a7174;
        case 0x1a71b4u: goto label_1a71b4;
        case 0x1a7200u: goto label_1a7200;
        default: break;
    }

    ctx->pc = 0x1a7080u;

    // 0x1a7080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7088: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a708c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a708cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7090: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a7090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a7094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7098: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a709c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a70a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a70a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a70a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a70a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1a70a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a70a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a70ac: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a70b0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1a70b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a70b4: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A70B4u;
    {
        const bool branch_taken_0x1a70b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70B4u;
        // 0x1a70b8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70b4) {
            ctx->pc = 0x1A7184u;
            goto label_1a7184;
        }
    }
    ctx->pc = 0x1A70BCu;
    // 0x1a70bc: 0x3c157ffe  lui         $s5, 0x7FFE
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32766 << 16));
    // 0x1a70c0: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a70c4: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a70c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1a70c8: 0x3c170024  lui         $s7, 0x24
    ctx->pc = 0x1a70c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)36 << 16));
    // 0x1a70cc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a70ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a70d0: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x1a70d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x1a70d4: 0x0  nop
    ctx->pc = 0x1a70d4u;
    // NOP
label_1a70d8:
    // 0x1a70d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a70dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a70e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a70e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a70e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a70e8: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a70e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a70ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A70ECu;
    {
        const bool branch_taken_0x1a70ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70ECu;
        // 0x1a70f0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70ec) {
            ctx->pc = 0x1A7100u;
            goto label_1a7100;
        }
    }
    ctx->pc = 0x1A70F4u;
    // 0x1a70f4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A70F4u;
    SET_GPR_U32(ctx, 31, 0x1A70FCu);
    ctx->pc = 0x1A70F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A70F4u;
    // 0x1a70f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A70F4u, 0x1A70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70FCu;
label_1a70fc:
    // 0x1a70fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a70fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7100:
    // 0x1a7100: 0x28a20c00  slti        $v0, $a1, 0xC00
    ctx->pc = 0x1a7100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a7104: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7104u;
    {
        const bool branch_taken_0x1a7104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7104) {
            ctx->pc = 0x1A7108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7104u;
            // 0x1a7108: 0x28a20c40  slti        $v0, $a1, 0xC40 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3136) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7138u;
            goto label_1a7138;
        }
    }
    ctx->pc = 0x1A710Cu;
    // 0x1a710c: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x1a7110: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x1a7110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a7114: 0x26e4fb30  addiu       $a0, $s7, -0x4D0
    ctx->pc = 0x1a7114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966064));
    // 0x1a7118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a711c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7120: 0xb32804  sllv        $a1, $s3, $a1
    ctx->pc = 0x1a7120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a7124: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7128: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a7128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a712c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A712Cu;
    {
        const bool branch_taken_0x1a712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A712Cu;
        // 0x1a7130: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a712c) {
            ctx->pc = 0x1A7178u;
            goto label_1a7178;
        }
    }
    ctx->pc = 0x1A7134u;
    // 0x1a7134: 0x0  nop
    ctx->pc = 0x1a7134u;
    // NOP
label_1a7138:
    // 0x1a7138: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7138u;
    {
        const bool branch_taken_0x1a7138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7138u;
        // 0x1a713c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7138) {
            ctx->pc = 0x1A7168u;
            goto label_1a7168;
        }
    }
    ctx->pc = 0x1A7140u;
    // 0x1a7140: 0x24a2f400  addiu       $v0, $a1, -0xC00
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x1a7144: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a7148: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a7148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a714c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a714cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7150: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x1a7150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a7154: 0x9c1821  addu        $v1, $a0, $gp
    ctx->pc = 0x1a7154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x1a7158: 0x8c6390e0  lw          $v1, -0x6F20($v1)
    ctx->pc = 0x1a7158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938848)));
    // 0x1a715c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a7160: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7160u;
    {
        const bool branch_taken_0x1a7160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7160u;
        // 0x1a7164: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7160) {
            ctx->pc = 0x1A7178u;
            goto label_1a7178;
        }
    }
    ctx->pc = 0x1A7168u;
label_1a7168:
    // 0x1a7168: 0x26c593d8  addiu       $a1, $s6, -0x6C28
    ctx->pc = 0x1a7168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939608));
    // 0x1a716c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A716Cu;
    SET_GPR_U32(ctx, 31, 0x1A7174u);
    ctx->pc = 0x1A7170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A716Cu;
    // 0x1a7170: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A716Cu, 0x1A7174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7174u;
label_1a7174:
    // 0x1a7174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7178:
    // 0x1a7178: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a7178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a717c: 0x1600ffd6  bnez        $s0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1A717Cu;
    {
        const bool branch_taken_0x1a717c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A717Cu;
        // 0x1a7180: 0x262a00b  movn        $s4, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a717c) {
            ctx->pc = 0x1A70D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a70d8;
        }
    }
    ctx->pc = 0x1A7184u;
label_1a7184:
    // 0x1a7184: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A7184u;
    {
        const bool branch_taken_0x1a7184 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7184u;
        // 0x1a7188: 0x2644001c  addiu       $a0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7184) {
            ctx->pc = 0x1A7214u;
            goto label_1a7214;
        }
    }
    ctx->pc = 0x1A718Cu;
    // 0x1a718c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a718cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7190: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7198: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a719c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a71a0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a71a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a71a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A71A4u;
    {
        const bool branch_taken_0x1a71a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71A4u;
        // 0x1a71a8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71a4) {
            ctx->pc = 0x1A71C0u;
            goto label_1a71c0;
        }
    }
    ctx->pc = 0x1A71ACu;
    // 0x1a71ac: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A71ACu;
    SET_GPR_U32(ctx, 31, 0x1A71B4u);
    ctx->pc = 0x1A71B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71ACu;
    // 0x1a71b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A71ACu, 0x1A71B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A71B4u;
label_1a71b4:
    // 0x1a71b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A71B4u;
    {
        const bool branch_taken_0x1a71b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71B4u;
        // 0x1a71b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71b4) {
            ctx->pc = 0x1A71C4u;
            goto label_1a71c4;
        }
    }
    ctx->pc = 0x1A71BCu;
    // 0x1a71bc: 0x0  nop
    ctx->pc = 0x1a71bcu;
    // NOP
label_1a71c0:
    // 0x1a71c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a71c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a71c4:
    // 0x1a71c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a71c8: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A71C8u;
    {
        const bool branch_taken_0x1a71c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a71c8) {
            ctx->pc = 0x1A71CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A71C8u;
            // 0x1a71cc: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A71E0u;
            goto label_1a71e0;
        }
    }
    ctx->pc = 0x1A71D0u;
    // 0x1a71d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a71d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a71d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a71d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A71D8u;
    {
        const bool branch_taken_0x1a71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71D8u;
        // 0x1a71dc: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71d8) {
            ctx->pc = 0x1A7214u;
            goto label_1a7214;
        }
    }
    ctx->pc = 0x1A71E0u;
label_1a71e0:
    // 0x1a71e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a71e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a71e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a71e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A71E8u;
    {
        const bool branch_taken_0x1a71e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71E8u;
        // 0x1a71ec: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71e8) {
            ctx->pc = 0x1A7200u;
            goto label_1a7200;
        }
    }
    ctx->pc = 0x1A71F0u;
    // 0x1a71f0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a71f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a71f4: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a71f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a71f8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A71F8u;
    SET_GPR_U32(ctx, 31, 0x1A7200u);
    ctx->pc = 0x1A71FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71F8u;
    // 0x1a71fc: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A71F8u, 0x1A7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7200u;
label_1a7200:
    // 0x1a7200: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a7200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a7204: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a7208: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a720c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a7210: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a7210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1a7214:
    // 0x1a7214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a721c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a721cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7224: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a7224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7228: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a7228u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a722c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a722cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7230: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a7230u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a7234: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a7234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7238: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7238u;
        // 0x1a723c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7240u;
}
