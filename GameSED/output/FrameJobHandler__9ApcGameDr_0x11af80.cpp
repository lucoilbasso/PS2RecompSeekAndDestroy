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

// Function: FrameJobHandler__9ApcGameDr
// Address: 0x11af80 - 0x11b024
void FrameJobHandler__9ApcGameDr_0x11af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FrameJobHandler__9ApcGameDr_0x11af80");
#endif

    switch (ctx->pc) {
        case 0x11af80u: goto label_11af80;
        case 0x11af84u: goto label_11af84;
        case 0x11af88u: goto label_11af88;
        case 0x11af8cu: goto label_11af8c;
        case 0x11af90u: goto label_11af90;
        case 0x11af94u: goto label_11af94;
        case 0x11af98u: goto label_11af98;
        case 0x11af9cu: goto label_11af9c;
        case 0x11afa0u: goto label_11afa0;
        case 0x11afa4u: goto label_11afa4;
        case 0x11afa8u: goto label_11afa8;
        case 0x11afacu: goto label_11afac;
        case 0x11afb0u: goto label_11afb0;
        case 0x11afb4u: goto label_11afb4;
        case 0x11afb8u: goto label_11afb8;
        case 0x11afbcu: goto label_11afbc;
        case 0x11afc0u: goto label_11afc0;
        case 0x11afc4u: goto label_11afc4;
        case 0x11afc8u: goto label_11afc8;
        case 0x11afccu: goto label_11afcc;
        case 0x11afd0u: goto label_11afd0;
        case 0x11afd4u: goto label_11afd4;
        case 0x11afd8u: goto label_11afd8;
        case 0x11afdcu: goto label_11afdc;
        case 0x11afe0u: goto label_11afe0;
        case 0x11afe4u: goto label_11afe4;
        case 0x11afe8u: goto label_11afe8;
        case 0x11afecu: goto label_11afec;
        case 0x11aff0u: goto label_11aff0;
        case 0x11aff4u: goto label_11aff4;
        case 0x11aff8u: goto label_11aff8;
        case 0x11affcu: goto label_11affc;
        case 0x11b000u: goto label_11b000;
        case 0x11b004u: goto label_11b004;
        case 0x11b008u: goto label_11b008;
        case 0x11b00cu: goto label_11b00c;
        case 0x11b010u: goto label_11b010;
        case 0x11b014u: goto label_11b014;
        case 0x11b018u: goto label_11b018;
        case 0x11b01cu: goto label_11b01c;
        case 0x11b020u: goto label_11b020;
        default: break;
    }

    ctx->pc = 0x11af80u;

label_11af80:
    // 0x11af80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11af84:
    // 0x11af84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11af88:
    // 0x11af88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11af88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11af8c:
    // 0x11af8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_11af90:
    // 0x11af90: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x11af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_11af94:
    // 0x11af94: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x11af94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11af98:
    // 0x11af98: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x11af98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_11af9c:
    // 0x11af9c: 0xc041a64  jal         func_106990
label_11afa0:
    if (ctx->pc == 0x11AFA0u) {
        ctx->pc = 0x11AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF9Cu;
        // 0x11afa0: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFA4u;
        goto label_11afa4;
    }
    ctx->pc = 0x11AF9Cu;
    SET_GPR_U32(ctx, 31, 0x11AFA4u);
    ctx->pc = 0x11AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF9Cu;
    // 0x11afa0: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106990u, 0x11AF9Cu, 0x11AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFA4u;
label_11afa4:
    // 0x11afa4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_11afa8:
    // 0x11afa8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x11afa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_11afac:
    // 0x11afac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_11afb0:
    if (ctx->pc == 0x11AFB0u) {
        ctx->pc = 0x11AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFACu;
        // 0x11afb0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFB4u;
        goto label_11afb4;
    }
    ctx->pc = 0x11AFACu;
    {
        const bool branch_taken_0x11afac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11afac) {
            ctx->pc = 0x11AFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AFACu;
            // 0x11afb0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AFD8u;
            goto label_11afd8;
        }
    }
    ctx->pc = 0x11AFB4u;
label_11afb4:
    // 0x11afb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11afb8:
    // 0x11afb8: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_11afbc:
    // 0x11afbc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11afc0:
    // 0x11afc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11afc4:
    // 0x11afc4: 0x60f809  jalr        $v1
label_11afc8:
    if (ctx->pc == 0x11AFC8u) {
        ctx->pc = 0x11AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFC4u;
        // 0x11afc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFCCu;
        goto label_11afcc;
    }
    ctx->pc = 0x11AFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11AFCCu);
        ctx->pc = 0x11AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFC4u;
        // 0x11afc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AFC4u, 0x11AFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11AFCCu;
label_11afcc:
    // 0x11afcc: 0x10000012  b           . + 4 + (0x12 << 2)
label_11afd0:
    if (ctx->pc == 0x11AFD0u) {
        ctx->pc = 0x11AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFCCu;
        // 0x11afd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFD4u;
        goto label_11afd4;
    }
    ctx->pc = 0x11AFCCu;
    {
        const bool branch_taken_0x11afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFCCu;
        // 0x11afd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afcc) {
            ctx->pc = 0x11B018u;
            goto label_11b018;
        }
    }
    ctx->pc = 0x11AFD4u;
label_11afd4:
    // 0x11afd4: 0x0  nop
    ctx->pc = 0x11afd4u;
    // NOP
label_11afd8:
    // 0x11afd8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11afd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11afdc:
    // 0x11afdc: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_11afe0:
    if (ctx->pc == 0x11AFE0u) {
        ctx->pc = 0x11AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFDCu;
        // 0x11afe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFE4u;
        goto label_11afe4;
    }
    ctx->pc = 0x11AFDCu;
    {
        const bool branch_taken_0x11afdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11afdc) {
            ctx->pc = 0x11AFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AFDCu;
            // 0x11afe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B018u;
            goto label_11b018;
        }
    }
    ctx->pc = 0x11AFE4u;
label_11afe4:
    // 0x11afe4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11afe8:
    // 0x11afe8: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x11afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_11afec:
    // 0x11afec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11afecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11aff0:
    // 0x11aff0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11aff4:
    // 0x11aff4: 0x60f809  jalr        $v1
label_11aff8:
    if (ctx->pc == 0x11AFF8u) {
        ctx->pc = 0x11AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFF4u;
        // 0x11aff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFFCu;
        goto label_11affc;
    }
    ctx->pc = 0x11AFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11AFFCu);
        ctx->pc = 0x11AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFF4u;
        // 0x11aff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AFF4u, 0x11AFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11AFFCu;
label_11affc:
    // 0x11affc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11b000:
    // 0x11b000: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x11b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_11b004:
    // 0x11b004: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b008:
    // 0x11b008: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b00c:
    // 0x11b00c: 0x60f809  jalr        $v1
label_11b010:
    if (ctx->pc == 0x11B010u) {
        ctx->pc = 0x11B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B00Cu;
        // 0x11b010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B014u;
        goto label_11b014;
    }
    ctx->pc = 0x11B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B014u);
        ctx->pc = 0x11B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B00Cu;
        // 0x11b010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B00Cu, 0x11B014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B014u;
label_11b014:
    // 0x11b014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b018:
    // 0x11b018: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11b01c:
    // 0x11b01c: 0x3e00008  jr          $ra
label_11b020:
    if (ctx->pc == 0x11B020u) {
        ctx->pc = 0x11B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B01Cu;
        // 0x11b020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B024u;
        goto label_fallthrough_0x11b01c;
    }
    ctx->pc = 0x11B01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B01Cu;
        // 0x11b020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11b01c:
    ctx->pc = 0x11B024u;
}
