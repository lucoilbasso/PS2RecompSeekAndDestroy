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

// Function: sPanelCurrentObjectSetup__FP15BsSCDEntControl
// Address: 0x107c28 - 0x107fac
void sPanelCurrentObjectSetup__FP15BsSCDEntControl_0x107c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sPanelCurrentObjectSetup__FP15BsSCDEntControl_0x107c28");
#endif

    switch (ctx->pc) {
        case 0x107c64u: goto label_107c64;
        case 0x107c80u: goto label_107c80;
        case 0x107ca8u: goto label_107ca8;
        case 0x107cccu: goto label_107ccc;
        case 0x107ce8u: goto label_107ce8;
        case 0x107d2cu: goto label_107d2c;
        case 0x107d34u: goto label_107d34;
        case 0x107d90u: goto label_107d90;
        case 0x107db4u: goto label_107db4;
        case 0x107dd0u: goto label_107dd0;
        case 0x107ec4u: goto label_107ec4;
        case 0x107ee8u: goto label_107ee8;
        case 0x107f38u: goto label_107f38;
        case 0x107f68u: goto label_107f68;
        case 0x107f84u: goto label_107f84;
        default: break;
    }

    ctx->pc = 0x107c28u;

    // 0x107c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x107c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x107c2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x107c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107c34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x107c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x107c38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x107c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x107c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x107c40: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x107c40u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x107c44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x107c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x107c48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x107c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x107c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x107c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x107c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x107c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107c58: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x107c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x107c5c: 0xc04110c  jal         func_104430
    ctx->pc = 0x107C5Cu;
    SET_GPR_U32(ctx, 31, 0x107C64u);
    ctx->pc = 0x107C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C5Cu;
    // 0x107c60: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x107C5Cu, 0x107C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C64u;
label_107c64:
    // 0x107c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c68: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107c6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107c70: 0x507500c5  beql        $v1, $s5, . + 4 + (0xC5 << 2)
    ctx->pc = 0x107C70u;
    {
        const bool branch_taken_0x107c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x107c70) {
            ctx->pc = 0x107C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107C70u;
            // 0x107c74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F88u;
            goto label_107f88;
        }
    }
    ctx->pc = 0x107C78u;
    // 0x107c78: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107C78u;
    SET_GPR_U32(ctx, 31, 0x107C80u);
    ctx->pc = 0x107C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C78u;
    // 0x107c7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107C78u, 0x107C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C80u;
label_107c80:
    // 0x107c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c84: 0x1a200038  blez        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x107C84u;
    {
        const bool branch_taken_0x107c84 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x107C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C84u;
        // 0x107c88: 0x24021846  addiu       $v0, $zero, 0x1846 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c84) {
            ctx->pc = 0x107D68u;
            goto label_107d68;
        }
    }
    ctx->pc = 0x107C8Cu;
    // 0x107c8c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x107c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107c90: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x107C90u;
    {
        const bool branch_taken_0x107c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C90u;
        // 0x107c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c90) {
            ctx->pc = 0x107D68u;
            goto label_107d68;
        }
    }
    ctx->pc = 0x107C98u;
    // 0x107c98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ca0: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x107CA0u;
    SET_GPR_U32(ctx, 31, 0x107CA8u);
    ctx->pc = 0x107CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CA0u;
    // 0x107ca4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x107CA0u, 0x107CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CA8u;
label_107ca8:
    // 0x107ca8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x107ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cac: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x107CACu;
    {
        const bool branch_taken_0x107cac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CACu;
        // 0x107cb0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cac) {
            ctx->pc = 0x107D18u;
            goto label_107d18;
        }
    }
    ctx->pc = 0x107CB4u;
    // 0x107cb4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x107cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107cb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107cbc: 0x10550014  beq         $v0, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x107CBCu;
    {
        const bool branch_taken_0x107cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x107CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CBCu;
        // 0x107cc0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cbc) {
            ctx->pc = 0x107D10u;
            goto label_107d10;
        }
    }
    ctx->pc = 0x107CC4u;
    // 0x107cc4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107CC4u;
    SET_GPR_U32(ctx, 31, 0x107CCCu);
    ctx->pc = 0x107CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CC4u;
    // 0x107cc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107CC4u, 0x107CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CCCu;
label_107ccc:
    // 0x107ccc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107cd4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x107cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x107cd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x107CD8u;
    {
        const bool branch_taken_0x107cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CD8u;
        // 0x107cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cd8) {
            ctx->pc = 0x107D08u;
            goto label_107d08;
        }
    }
    ctx->pc = 0x107CE0u;
    // 0x107ce0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x107CE0u;
    {
        const bool branch_taken_0x107ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CE0u;
        // 0x107ce4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ce0) {
            ctx->pc = 0x107D04u;
            goto label_107d04;
        }
    }
    ctx->pc = 0x107CE8u;
label_107ce8:
    // 0x107ce8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x107ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107cec: 0x0  nop
    ctx->pc = 0x107cecu;
    // NOP
    // 0x107cf0: 0x0  nop
    ctx->pc = 0x107cf0u;
    // NOP
    // 0x107cf4: 0x0  nop
    ctx->pc = 0x107cf4u;
    // NOP
    // 0x107cf8: 0x0  nop
    ctx->pc = 0x107cf8u;
    // NOP
    // 0x107cfc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107CFCu;
    {
        const bool branch_taken_0x107cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CFCu;
        // 0x107d00: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cfc) {
            ctx->pc = 0x107CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ce8;
        }
    }
    ctx->pc = 0x107D04u;
label_107d04:
    // 0x107d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107d08:
    // 0x107d08: 0x10800099  beqz        $a0, . + 4 + (0x99 << 2)
    ctx->pc = 0x107D08u;
    {
        const bool branch_taken_0x107d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D08u;
        // 0x107d0c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d08) {
            ctx->pc = 0x107F70u;
            goto label_107f70;
        }
    }
    ctx->pc = 0x107D10u;
label_107d10:
    // 0x107d10: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x107D10u;
    {
        const bool branch_taken_0x107d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D10u;
        // 0x107d14: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d10) {
            ctx->pc = 0x107F84u;
            goto label_107f84;
        }
    }
    ctx->pc = 0x107D18u;
label_107d18:
    // 0x107d18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x107d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x107d1c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x107d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x107d20: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107D20u;
    {
        const bool branch_taken_0x107d20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x107d20) {
            ctx->pc = 0x107D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D20u;
            // 0x107d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D34u;
            goto label_107d34;
        }
    }
    ctx->pc = 0x107D28u;
    // 0x107d28: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x107d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_107d2c:
    // 0x107d2c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x107d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x107d30: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x107d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_107d34:
    // 0x107d34: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x107d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107d38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x107d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x107d3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107d40: 0x50640090  beql        $v1, $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x107D40u;
    {
        const bool branch_taken_0x107d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x107d40) {
            ctx->pc = 0x107D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D40u;
            // 0x107d44: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F84u;
            goto label_107f84;
        }
    }
    ctx->pc = 0x107D48u;
    // 0x107d48: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x107d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x107d4c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x107D4Cu;
    {
        const bool branch_taken_0x107d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D4Cu;
        // 0x107d50: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d4c) {
            ctx->pc = 0x107E80u;
            goto label_107e80;
        }
    }
    ctx->pc = 0x107D54u;
    // 0x107d54: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x107d58: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x107d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x107d5c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x107D5Cu;
    {
        const bool branch_taken_0x107d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D5Cu;
        // 0x107d60: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d5c) {
            ctx->pc = 0x107E84u;
            goto label_107e84;
        }
    }
    ctx->pc = 0x107D64u;
    // 0x107d64: 0x0  nop
    ctx->pc = 0x107d64u;
    // NOP
label_107d68:
    // 0x107d68: 0x620002f  bltz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x107D68u;
    {
        const bool branch_taken_0x107d68 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x107D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D68u;
        // 0x107d6c: 0x24022846  addiu       $v0, $zero, 0x2846 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d68) {
            ctx->pc = 0x107E28u;
            goto label_107e28;
        }
    }
    ctx->pc = 0x107D70u;
    // 0x107d70: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x107d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107d74: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x107D74u;
    {
        const bool branch_taken_0x107d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107d74) {
            ctx->pc = 0x107D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D74u;
            // 0x107d78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107E2Cu;
            goto label_107e2c;
        }
    }
    ctx->pc = 0x107D7Cu;
    // 0x107d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d88: 0xc05ac0a  jal         func_16B028
    ctx->pc = 0x107D88u;
    SET_GPR_U32(ctx, 31, 0x107D90u);
    ctx->pc = 0x107D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D88u;
    // 0x107d8c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B028u, 0x107D88u, 0x107D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D90u;
label_107d90:
    // 0x107d90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x107d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d94: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x107D94u;
    {
        const bool branch_taken_0x107d94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D94u;
        // 0x107d98: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d94) {
            ctx->pc = 0x107E08u;
            goto label_107e08;
        }
    }
    ctx->pc = 0x107D9Cu;
    // 0x107d9c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x107d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107da0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107da4: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x107DA4u;
    {
        const bool branch_taken_0x107da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x107DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DA4u;
        // 0x107da8: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107da4) {
            ctx->pc = 0x107DFCu;
            goto label_107dfc;
        }
    }
    ctx->pc = 0x107DACu;
    // 0x107dac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107DACu;
    SET_GPR_U32(ctx, 31, 0x107DB4u);
    ctx->pc = 0x107DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DACu;
    // 0x107db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107DACu, 0x107DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DB4u;
label_107db4:
    // 0x107db4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107db4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107db8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x107db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107dbc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x107dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x107dc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x107DC0u;
    {
        const bool branch_taken_0x107dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC0u;
        // 0x107dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dc0) {
            ctx->pc = 0x107DF0u;
            goto label_107df0;
        }
    }
    ctx->pc = 0x107DC8u;
    // 0x107dc8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x107DC8u;
    {
        const bool branch_taken_0x107dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC8u;
        // 0x107dcc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dc8) {
            ctx->pc = 0x107DECu;
            goto label_107dec;
        }
    }
    ctx->pc = 0x107DD0u;
label_107dd0:
    // 0x107dd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x107dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107dd4: 0x0  nop
    ctx->pc = 0x107dd4u;
    // NOP
    // 0x107dd8: 0x0  nop
    ctx->pc = 0x107dd8u;
    // NOP
    // 0x107ddc: 0x0  nop
    ctx->pc = 0x107ddcu;
    // NOP
    // 0x107de0: 0x0  nop
    ctx->pc = 0x107de0u;
    // NOP
    // 0x107de4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107DE4u;
    {
        const bool branch_taken_0x107de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DE4u;
        // 0x107de8: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107de4) {
            ctx->pc = 0x107DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107dd0;
        }
    }
    ctx->pc = 0x107DECu;
label_107dec:
    // 0x107dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107df0:
    // 0x107df0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x107df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107df4: 0x50a0005e  beql        $a1, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x107DF4u;
    {
        const bool branch_taken_0x107df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x107df4) {
            ctx->pc = 0x107DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107DF4u;
            // 0x107df8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F70u;
            goto label_107f70;
        }
    }
    ctx->pc = 0x107DFCu;
label_107dfc:
    // 0x107dfc: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x107DFCu;
    {
        const bool branch_taken_0x107dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DFCu;
        // 0x107e00: 0x8cb00014  lw          $s0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dfc) {
            ctx->pc = 0x107F84u;
            goto label_107f84;
        }
    }
    ctx->pc = 0x107E04u;
    // 0x107e04: 0x0  nop
    ctx->pc = 0x107e04u;
    // NOP
label_107e08:
    // 0x107e08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x107e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x107e0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107e10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x107e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x107e14: 0x8c420c0c  lw          $v0, 0xC0C($v0)
    ctx->pc = 0x107e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3084)));
    // 0x107e18: 0x5043ffc6  beql        $v0, $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x107E18u;
    {
        const bool branch_taken_0x107e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107e18) {
            ctx->pc = 0x107E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107E18u;
            // 0x107e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107d34;
        }
    }
    ctx->pc = 0x107E20u;
    // 0x107e20: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x107E20u;
    {
        const bool branch_taken_0x107e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E20u;
        // 0x107e24: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e20) {
            ctx->pc = 0x107D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107d2c;
        }
    }
    ctx->pc = 0x107E28u;
label_107e28:
    // 0x107e28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107e2c:
    // 0x107e2c: 0x24030846  addiu       $v1, $zero, 0x846
    ctx->pc = 0x107e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    // 0x107e30: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x107e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x107e34: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x107E34u;
    {
        const bool branch_taken_0x107e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x107E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E34u;
        // 0x107e38: 0x24020946  addiu       $v0, $zero, 0x946 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e34) {
            ctx->pc = 0x107E90u;
            goto label_107e90;
        }
    }
    ctx->pc = 0x107E3Cu;
    // 0x107e3c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x107e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107e40: 0x111823  negu        $v1, $s1
    ctx->pc = 0x107e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x107e44: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x107e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107e48: 0x8e0701b4  lw          $a3, 0x1B4($s0)
    ctx->pc = 0x107e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x107e4c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x107e4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x107e50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x107e54: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x107e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107e58: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x107e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x107e5c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x107e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x107e60: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x107E60u;
    {
        const bool branch_taken_0x107e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x107E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E60u;
        // 0x107e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e60) {
            ctx->pc = 0x107F10u;
            goto label_107f10;
        }
    }
    ctx->pc = 0x107E68u;
    // 0x107e68: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x107e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x107e6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107E6Cu;
    {
        const bool branch_taken_0x107e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E6Cu;
        // 0x107e70: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e6c) {
            ctx->pc = 0x107E80u;
            goto label_107e80;
        }
    }
    ctx->pc = 0x107E74u;
    // 0x107e74: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x107e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x107e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107E78u;
    {
        const bool branch_taken_0x107e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E78u;
        // 0x107e7c: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e78) {
            ctx->pc = 0x107E84u;
            goto label_107e84;
        }
    }
    ctx->pc = 0x107E80u;
label_107e80:
    // 0x107e80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107e84:
    // 0x107e84: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x107E84u;
    {
        const bool branch_taken_0x107e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E84u;
        // 0x107e88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e84) {
            ctx->pc = 0x107F84u;
            goto label_107f84;
        }
    }
    ctx->pc = 0x107E8Cu;
    // 0x107e8c: 0x0  nop
    ctx->pc = 0x107e8cu;
    // NOP
label_107e90:
    // 0x107e90: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x107E90u;
    {
        const bool branch_taken_0x107e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E90u;
        // 0x107e94: 0x24020346  addiu       $v0, $zero, 0x346 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e90) {
            ctx->pc = 0x107F18u;
            goto label_107f18;
        }
    }
    ctx->pc = 0x107E98u;
    // 0x107e98: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x107e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x107e9c: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x107E9Cu;
    {
        const bool branch_taken_0x107e9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x107EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E9Cu;
        // 0x107ea0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e9c) {
            ctx->pc = 0x107ED8u;
            goto label_107ed8;
        }
    }
    ctx->pc = 0x107EA4u;
    // 0x107ea4: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x107ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107ea8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x107ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x107eac: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x107eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x107eb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x107eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107eb4: 0x10650033  beq         $v1, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x107EB4u;
    {
        const bool branch_taken_0x107eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x107EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EB4u;
        // 0x107eb8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107eb4) {
            ctx->pc = 0x107F84u;
            goto label_107f84;
        }
    }
    ctx->pc = 0x107EBCu;
    // 0x107ebc: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x107EBCu;
    SET_GPR_U32(ctx, 31, 0x107EC4u);
    ctx->pc = 0x107EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EBCu;
    // 0x107ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x107EBCu, 0x107EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EC4u;
label_107ec4:
    // 0x107ec4: 0x8e4301c4  lw          $v1, 0x1C4($s2)
    ctx->pc = 0x107ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x107ec8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x107ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x107ecc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x107ECCu;
    {
        const bool branch_taken_0x107ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ECCu;
        // 0x107ed0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ecc) {
            ctx->pc = 0x107F84u;
            goto label_107f84;
        }
    }
    ctx->pc = 0x107ED4u;
    // 0x107ed4: 0x0  nop
    ctx->pc = 0x107ed4u;
    // NOP
label_107ed8:
    // 0x107ed8: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x107ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x107edc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x107EDCu;
    {
        const bool branch_taken_0x107edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EDCu;
        // 0x107ee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107edc) {
            ctx->pc = 0x107F0Cu;
            goto label_107f0c;
        }
    }
    ctx->pc = 0x107EE4u;
    // 0x107ee4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107ee8:
    // 0x107ee8: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x107EE8u;
    {
        const bool branch_taken_0x107ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x107EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EE8u;
        // 0x107eec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ee8) {
            ctx->pc = 0x107F10u;
            goto label_107f10;
        }
    }
    ctx->pc = 0x107EF0u;
    // 0x107ef0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x107ef4: 0x0  nop
    ctx->pc = 0x107ef4u;
    // NOP
    // 0x107ef8: 0x0  nop
    ctx->pc = 0x107ef8u;
    // NOP
    // 0x107efc: 0x0  nop
    ctx->pc = 0x107efcu;
    // NOP
    // 0x107f00: 0x0  nop
    ctx->pc = 0x107f00u;
    // NOP
    // 0x107f04: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x107F04u;
    {
        const bool branch_taken_0x107f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x107f04) {
            ctx->pc = 0x107F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F04u;
            // 0x107f08: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ee8;
        }
    }
    ctx->pc = 0x107F0Cu;
label_107f0c:
    // 0x107f0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x107f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107f10:
    // 0x107f10: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x107F10u;
    {
        const bool branch_taken_0x107f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F10u;
        // 0x107f14: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f10) {
            ctx->pc = 0x107F84u;
            goto label_107f84;
        }
    }
    ctx->pc = 0x107F18u;
label_107f18:
    // 0x107f18: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x107F18u;
    {
        const bool branch_taken_0x107f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x107F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F18u;
        // 0x107f1c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f18) {
            ctx->pc = 0x107F70u;
            goto label_107f70;
        }
    }
    ctx->pc = 0x107F20u;
    // 0x107f20: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x107f24: 0x56220013  bnel        $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x107F24u;
    {
        const bool branch_taken_0x107f24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x107f24) {
            ctx->pc = 0x107F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F24u;
            // 0x107f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F74u;
            goto label_107f74;
        }
    }
    ctx->pc = 0x107F2Cu;
    // 0x107f2c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x107f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x107f30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x107f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f34: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_107f38:
    // 0x107f38: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F38u;
        // 0x107f3c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107F60u;
            goto label_107f60;
        }
    }
    ctx->pc = 0x107F40u;
    // 0x107f40: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x107f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107f44: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x107f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x107f48: 0x0  nop
    ctx->pc = 0x107f48u;
    // NOP
    // 0x107f4c: 0x0  nop
    ctx->pc = 0x107f4cu;
    // NOP
    // 0x107f50: 0x0  nop
    ctx->pc = 0x107f50u;
    // NOP
    // 0x107f54: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x107F54u;
    {
        const bool branch_taken_0x107f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F54u;
        // 0x107f58: 0x8c63001c  lw          $v1, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f54) {
            ctx->pc = 0x107F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107f38;
        }
    }
    ctx->pc = 0x107F5Cu;
    // 0x107f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107f60:
    // 0x107f60: 0xc04171a  jal         func_105C68
    ctx->pc = 0x107F60u;
    SET_GPR_U32(ctx, 31, 0x107F68u);
    ctx->pc = 0x107F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F60u;
    // 0x107f64: 0x10202b  sltu        $a0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x107F60u, 0x107F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F68u;
label_107f68:
    // 0x107f68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107F68u;
    {
        const bool branch_taken_0x107f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F68u;
        // 0x107f6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f68) {
            ctx->pc = 0x107F88u;
            goto label_107f88;
        }
    }
    ctx->pc = 0x107F70u;
label_107f70:
    // 0x107f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107f74:
    // 0x107f74: 0x24a53b18  addiu       $a1, $a1, 0x3B18
    ctx->pc = 0x107f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15128));
    // 0x107f78: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x107f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x107f7c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x107F7Cu;
    SET_GPR_U32(ctx, 31, 0x107F84u);
    ctx->pc = 0x107F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F7Cu;
    // 0x107f80: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x107F7Cu, 0x107F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F84u;
label_107f84:
    // 0x107f84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x107f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107f88:
    // 0x107f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107f8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x107f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x107f90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x107f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107f94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x107f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x107f98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x107f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107f9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x107f9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x107fa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x107fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x107FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FA4u;
        // 0x107fa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107FACu;
}
