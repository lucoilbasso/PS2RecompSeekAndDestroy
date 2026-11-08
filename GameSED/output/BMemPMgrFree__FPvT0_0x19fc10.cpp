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

// Function: BMemPMgrFree__FPvT0
// Address: 0x19fc10 - 0x19fecc
void BMemPMgrFree__FPvT0_0x19fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrFree__FPvT0_0x19fc10");
#endif

    switch (ctx->pc) {
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc5cu: goto label_19fc5c;
        case 0x19fcb8u: goto label_19fcb8;
        case 0x19fd14u: goto label_19fd14;
        case 0x19fd48u: goto label_19fd48;
        case 0x19fd94u: goto label_19fd94;
        case 0x19fdf8u: goto label_19fdf8;
        case 0x19fe20u: goto label_19fe20;
        case 0x19fe30u: goto label_19fe30;
        case 0x19fe7cu: goto label_19fe7c;
        case 0x19fe8cu: goto label_19fe8c;
        case 0x19fe9cu: goto label_19fe9c;
        case 0x19fea8u: goto label_19fea8;
        case 0x19feb0u: goto label_19feb0;
        default: break;
    }

    ctx->pc = 0x19fc10u;

    // 0x19fc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fc14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19fc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19fc18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19fc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc1c: 0x8f848e08  lw          $a0, -0x71F8($gp)
    ctx->pc = 0x19fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    // 0x19fc20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fc24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19fc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19fc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19fc2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19fc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19fc30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fc34: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19FC34u;
    SET_GPR_U32(ctx, 31, 0x19FC3Cu);
    ctx->pc = 0x19FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC34u;
    // 0x19fc38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19FC34u, 0x19FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC3Cu;
label_19fc3c:
    // 0x19fc3c: 0x12400052  beqz        $s2, . + 4 + (0x52 << 2)
    ctx->pc = 0x19FC3Cu;
    {
        const bool branch_taken_0x19fc3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC3Cu;
        // 0x19fc40: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc3c) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FC44u;
    // 0x19fc44: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x19fc44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x19fc48: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FC48u;
    {
        const bool branch_taken_0x19fc48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC48u;
        // 0x19fc4c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc48) {
            ctx->pc = 0x19FC68u;
            goto label_19fc68;
        }
    }
    ctx->pc = 0x19FC50u;
    // 0x19fc50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19fc50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc54: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x19FC54u;
    SET_GPR_U32(ctx, 31, 0x19FC5Cu);
    ctx->pc = 0x19FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC54u;
    // 0x19fc58: 0x248487c8  addiu       $a0, $a0, -0x7838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x19FC54u, 0x19FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC5Cu;
label_19fc5c:
    // 0x19fc5c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x19FC5Cu;
    {
        const bool branch_taken_0x19fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC5Cu;
        // 0x19fc60: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc5c) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FC64u;
    // 0x19fc64: 0x0  nop
    ctx->pc = 0x19fc64u;
    // NOP
label_19fc68:
    // 0x19fc68: 0x8f938dd8  lw          $s3, -0x7228($gp)
    ctx->pc = 0x19fc68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x19fc6c: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FC6Cu;
    {
        const bool branch_taken_0x19fc6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc6c) {
            ctx->pc = 0x19FC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC6Cu;
            // 0x19fc70: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FC80u;
            goto label_19fc80;
        }
    }
    ctx->pc = 0x19FC74u;
    // 0x19fc74: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fc78: 0x8c53f640  lw          $s3, -0x9C0($v0)
    ctx->pc = 0x19fc78u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x23F640u));
    // 0x19fc7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x19fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19fc80:
    // 0x19fc80: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x19fc80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19fc84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FC84u;
    {
        const bool branch_taken_0x19fc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC84u;
        // 0x19fc88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc84) {
            ctx->pc = 0x19FC98u;
            goto label_19fc98;
        }
    }
    ctx->pc = 0x19FC8Cu;
    // 0x19fc8c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x19fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x19fc90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19fc94: 0x242202b  sltu        $a0, $s2, $v0
    ctx->pc = 0x19fc94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19fc98:
    // 0x19fc98: 0x54800021  bnel        $a0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x19FC98u;
    {
        const bool branch_taken_0x19fc98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc98) {
            ctx->pc = 0x19FC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC98u;
            // 0x19fc9c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD20u;
            goto label_19fd20;
        }
    }
    ctx->pc = 0x19FCA0u;
    // 0x19fca0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fca4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19fca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fca8: 0x2448f640  addiu       $t0, $v0, -0x9C0
    ctx->pc = 0x19fca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x19fcac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19fcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcb0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x19fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F640u));
    // 0x19fcb4: 0x0  nop
    ctx->pc = 0x19fcb4u;
    // NOP
label_19fcb8:
    // 0x19fcb8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19FCB8u;
    {
        const bool branch_taken_0x19fcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB8u;
        // 0x19fcbc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcb8) {
            ctx->pc = 0x19FCE4u;
            goto label_19fce4;
        }
    }
    ctx->pc = 0x19FCC0u;
    // 0x19fcc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fcc4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x19fcc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19fcc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FCC8u;
    {
        const bool branch_taken_0x19fcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC8u;
        // 0x19fccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcc8) {
            ctx->pc = 0x19FCDCu;
            goto label_19fcdc;
        }
    }
    ctx->pc = 0x19FCD0u;
    // 0x19fcd0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19fcd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19fcd8: 0xc2282b  sltu        $a1, $a2, $v0
    ctx->pc = 0x19fcd8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19fcdc:
    // 0x19fcdc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FCDCu;
    {
        const bool branch_taken_0x19fcdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCDCu;
        // 0x19fce0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcdc) {
            ctx->pc = 0x19FCF8u;
            goto label_19fcf8;
        }
    }
    ctx->pc = 0x19FCE4u;
label_19fce4:
    // 0x19fce4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19fce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19fce8: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x19fce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19fcec: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x19FCECu;
    {
        const bool branch_taken_0x19fcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fcec) {
            ctx->pc = 0x19FCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FCECu;
            // 0x19fcf0: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fcb8;
        }
    }
    ctx->pc = 0x19FCF4u;
    // 0x19fcf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19fcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fcf8:
    // 0x19fcf8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19fcf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcfc: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FCFCu;
    {
        const bool branch_taken_0x19fcfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fcfc) {
            ctx->pc = 0x19FD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FCFCu;
            // 0x19fd00: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD20u;
            goto label_19fd20;
        }
    }
    ctx->pc = 0x19FD04u;
    // 0x19fd04: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19fd08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19fd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd0c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x19FD0Cu;
    SET_GPR_U32(ctx, 31, 0x19FD14u);
    ctx->pc = 0x19FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD0Cu;
    // 0x19fd10: 0x248487f0  addiu       $a0, $a0, -0x7810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x19FD0Cu, 0x19FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD14u;
label_19fd14:
    // 0x19fd14: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19FD14u;
    {
        const bool branch_taken_0x19fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD14u;
        // 0x19fd18: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd14) {
            ctx->pc = 0x19FD88u;
            goto label_19fd88;
        }
    }
    ctx->pc = 0x19FD1Cu;
    // 0x19fd1c: 0x0  nop
    ctx->pc = 0x19fd1cu;
    // NOP
label_19fd20:
    // 0x19fd20: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19fd24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19fd28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fd2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19fd30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19FD30u;
    {
        const bool branch_taken_0x19fd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD30u;
        // 0x19fd34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd30) {
            ctx->pc = 0x19FD78u;
            goto label_19fd78;
        }
    }
    ctx->pc = 0x19FD38u;
    // 0x19fd38: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x19fd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x19fd3c: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x19fd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x19fd40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x19fd44: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x19fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_19fd48:
    // 0x19fd48: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FD48u;
    {
        const bool branch_taken_0x19fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fd48) {
            ctx->pc = 0x19FD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FD48u;
            // 0x19fd4c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD60u;
            goto label_19fd60;
        }
    }
    ctx->pc = 0x19FD50u;
    // 0x19fd50: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x19fd54: 0x10460009  beq         $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FD54u;
    {
        const bool branch_taken_0x19fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD54u;
        // 0x19fd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd54) {
            ctx->pc = 0x19FD7Cu;
            goto label_19fd7c;
        }
    }
    ctx->pc = 0x19FD5Cu;
    // 0x19fd5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19fd60:
    // 0x19fd60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x19fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x19fd64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19fd68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fd6c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x19fd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x19fd70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19FD70u;
    {
        const bool branch_taken_0x19fd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD70u;
        // 0x19fd74: 0x671024  and         $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd70) {
            ctx->pc = 0x19FD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fd48;
        }
    }
    ctx->pc = 0x19FD78u;
label_19fd78:
    // 0x19fd78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fd7c:
    // 0x19fd7c: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x19FD7Cu;
    {
        const bool branch_taken_0x19fd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD7Cu;
        // 0x19fd80: 0x2645fff0  addiu       $a1, $s2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd7c) {
            ctx->pc = 0x19FEA0u;
            goto label_19fea0;
        }
    }
    ctx->pc = 0x19FD84u;
    // 0x19fd84: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_19fd88:
    // 0x19fd88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19fd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd8c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x19FD8Cu;
    SET_GPR_U32(ctx, 31, 0x19FD94u);
    ctx->pc = 0x19FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD8Cu;
    // 0x19fd90: 0x24848810  addiu       $a0, $a0, -0x77F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x19FD8Cu, 0x19FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD94u;
label_19fd94:
    // 0x19fd94: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x19FD94u;
    {
        const bool branch_taken_0x19fd94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD94u;
        // 0x19fd98: 0x3c03fff0  lui         $v1, 0xFFF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd94) {
            ctx->pc = 0x19FDC0u;
            goto label_19fdc0;
        }
    }
    ctx->pc = 0x19FD9Cu;
    // 0x19fd9c: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x19fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x19fda0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x19fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19fda4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19fda8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x19fda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19fdac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FDACu;
    {
        const bool branch_taken_0x19fdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDACu;
        // 0x19fdb0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdac) {
            ctx->pc = 0x19FDC4u;
            goto label_19fdc4;
        }
    }
    ctx->pc = 0x19FDB4u;
    // 0x19fdb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FDB4u;
    {
        const bool branch_taken_0x19fdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDB4u;
        // 0x19fdb8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdb4) {
            ctx->pc = 0x19FDC4u;
            goto label_19fdc4;
        }
    }
    ctx->pc = 0x19FDBCu;
    // 0x19fdbc: 0x0  nop
    ctx->pc = 0x19fdbcu;
    // NOP
label_19fdc0:
    // 0x19fdc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19fdc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fdc4:
    // 0x19fdc4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x19fdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdc8: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x19fdcc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fdd0: 0x2464e120  addiu       $a0, $v1, -0x1EE0
    ctx->pc = 0x19fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959392));
    // 0x19fdd4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FDD4u;
    {
        const bool branch_taken_0x19fdd4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x19FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDD4u;
        // 0x19fdd8: 0x2451f6a8  addiu       $s1, $v0, -0x958 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdd4) {
            ctx->pc = 0x19FDE8u;
            goto label_19fde8;
        }
    }
    ctx->pc = 0x19FDDCu;
    // 0x19fddc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19fde0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FDE0u;
    {
        const bool branch_taken_0x19fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE0u;
        // 0x19fde4: 0x2445d658  addiu       $a1, $v0, -0x29A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fde0) {
            ctx->pc = 0x19FDF0u;
            goto label_19fdf0;
        }
    }
    ctx->pc = 0x19FDE8u;
label_19fde8:
    // 0x19fde8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19fdec: 0x2445d660  addiu       $a1, $v0, -0x29A0
    ctx->pc = 0x19fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956640));
label_19fdf0:
    // 0x19fdf0: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x19FDF0u;
    SET_GPR_U32(ctx, 31, 0x19FDF8u);
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x19FDF0u, 0x19FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDF8u;
label_19fdf8:
    // 0x19fdf8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x19fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x19fdfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19fe00: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x19fe00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x19fe04: 0x56000012  bnel        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x19FE04u;
    {
        const bool branch_taken_0x19fe04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe04) {
            ctx->pc = 0x19FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE04u;
            // 0x19fe08: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE50u;
            goto label_19fe50;
        }
    }
    ctx->pc = 0x19FE0Cu;
    // 0x19fe0c: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x19fe0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x19fe10: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x19fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19fe14: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x19fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x19fe18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19FE18u;
    {
        const bool branch_taken_0x19fe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE18u;
        // 0x19fe1c: 0x24a58750  addiu       $a1, $a1, -0x78B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe18) {
            ctx->pc = 0x19FE74u;
            goto label_19fe74;
        }
    }
    ctx->pc = 0x19FE20u;
label_19fe20:
    // 0x19fe20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19fe24: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19FE24u;
    {
        const bool branch_taken_0x19fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE24u;
        // 0x19fe28: 0x2610e120  addiu       $s0, $s0, -0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe24) {
            ctx->pc = 0x19FE74u;
            goto label_19fe74;
        }
    }
    ctx->pc = 0x19FE2Cu;
    // 0x19fe2c: 0x0  nop
    ctx->pc = 0x19fe2cu;
    // NOP
label_19fe30:
    // 0x19fe30: 0x0  nop
    ctx->pc = 0x19fe30u;
    // NOP
    // 0x19fe34: 0x0  nop
    ctx->pc = 0x19fe34u;
    // NOP
    // 0x19fe38: 0x0  nop
    ctx->pc = 0x19fe38u;
    // NOP
    // 0x19fe3c: 0x0  nop
    ctx->pc = 0x19fe3cu;
    // NOP
    // 0x19fe40: 0x5050fff7  beql        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19FE40u;
    {
        const bool branch_taken_0x19fe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x19fe40) {
            ctx->pc = 0x19FE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE40u;
            // 0x19fe44: 0x3c100027  lui         $s0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fe20;
        }
    }
    ctx->pc = 0x19FE48u;
    // 0x19fe48: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19fe48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19fe4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19fe50:
    // 0x19fe50: 0x0  nop
    ctx->pc = 0x19fe50u;
    // NOP
    // 0x19fe54: 0x0  nop
    ctx->pc = 0x19fe54u;
    // NOP
    // 0x19fe58: 0x0  nop
    ctx->pc = 0x19fe58u;
    // NOP
    // 0x19fe5c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x19FE5Cu;
    {
        const bool branch_taken_0x19fe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe5c) {
            ctx->pc = 0x19FE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE5Cu;
            // 0x19fe60: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fe30;
        }
    }
    ctx->pc = 0x19FE64u;
    // 0x19fe64: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x19fe64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x19fe68: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x19fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19fe6c: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x19fe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x19fe70: 0x24a5d668  addiu       $a1, $a1, -0x2998
    ctx->pc = 0x19fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956648));
label_19fe74:
    // 0x19fe74: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x19FE74u;
    SET_GPR_U32(ctx, 31, 0x19FE7Cu);
    ctx->pc = 0x19FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE74u;
    // 0x19fe78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x19FE74u, 0x19FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE7Cu;
label_19fe7c:
    // 0x19fe7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fe7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe80: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19fe84: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x19FE84u;
    SET_GPR_U32(ctx, 31, 0x19FE8Cu);
    ctx->pc = 0x19FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE84u;
    // 0x19fe88: 0x24848830  addiu       $a0, $a0, -0x77D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x19FE84u, 0x19FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE8Cu;
label_19fe8c:
    // 0x19fe8c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19fe90: 0x24848810  addiu       $a0, $a0, -0x77F0
    ctx->pc = 0x19fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936592));
    // 0x19fe94: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x19FE94u;
    SET_GPR_U32(ctx, 31, 0x19FE9Cu);
    ctx->pc = 0x19FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE94u;
    // 0x19fe98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F328u, 0x19FE94u, 0x19FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE9Cu;
label_19fe9c:
    // 0x19fe9c: 0x2645fff0  addiu       $a1, $s2, -0x10
    ctx->pc = 0x19fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_19fea0:
    // 0x19fea0: 0xc067d58  jal         func_19F560
    ctx->pc = 0x19FEA0u;
    SET_GPR_U32(ctx, 31, 0x19FEA8u);
    ctx->pc = 0x19FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FEA0u;
    // 0x19fea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F560u, 0x19FEA0u, 0x19FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEA8u;
label_19fea8:
    // 0x19fea8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19FEA8u;
    SET_GPR_U32(ctx, 31, 0x19FEB0u);
    ctx->pc = 0x19FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FEA8u;
    // 0x19feac: 0x8f848e08  lw          $a0, -0x71F8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19FEA8u, 0x19FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEB0u;
label_19feb0:
    // 0x19feb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19feb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19feb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19feb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19feb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19feb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19febc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19febcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19fec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fec4: 0x3e00008  jr          $ra
    ctx->pc = 0x19FEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEC4u;
        // 0x19fec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FECCu;
}
