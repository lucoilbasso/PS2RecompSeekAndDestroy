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

// Function: _decodeOrSkipField
// Address: 0x1bdeb8 - 0x1be014
void _decodeOrSkipField_0x1bdeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkipField_0x1bdeb8");
#endif

    switch (ctx->pc) {
        case 0x1bdf1cu: goto label_1bdf1c;
        case 0x1bdf34u: goto label_1bdf34;
        case 0x1bdf44u: goto label_1bdf44;
        case 0x1bdf54u: goto label_1bdf54;
        case 0x1bdf84u: goto label_1bdf84;
        case 0x1bdfa4u: goto label_1bdfa4;
        case 0x1bdfb8u: goto label_1bdfb8;
        case 0x1bdff0u: goto label_1bdff0;
        default: break;
    }

    ctx->pc = 0x1bdeb8u;

    // 0x1bdeb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bdeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bdebc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdec0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1bdec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1bdec4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bdec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1bdec8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bdec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdecc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bdeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bded0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bded0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bded4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1bded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1bded8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1bded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1bdedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bdedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bdee0: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x1bdee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1bdee4: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDEE4u;
    {
        const bool branch_taken_0x1bdee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEE4u;
        // 0x1bdee8: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdee4) {
            ctx->pc = 0x1BDEF8u;
            goto label_1bdef8;
        }
    }
    ctx->pc = 0x1BDEECu;
    // 0x1bdeec: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1bdeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1bdef0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDEF0u;
    {
        const bool branch_taken_0x1bdef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdef0) {
            ctx->pc = 0x1BDEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDEF0u;
            // 0x1bdef4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDF00u;
            goto label_1bdf00;
        }
    }
    ctx->pc = 0x1BDEF8u;
label_1bdef8:
    // 0x1bdef8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bdef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdefc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bdf00:
    // 0x1bdf00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDF00u;
    {
        const bool branch_taken_0x1bdf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF00u;
        // 0x1bdf04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf00) {
            ctx->pc = 0x1BDF14u;
            goto label_1bdf14;
        }
    }
    ctx->pc = 0x1BDF08u;
    // 0x1bdf08: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1bdf08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1bdf0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdf10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1bdf10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1bdf14:
    // 0x1bdf14: 0xc070b04  jal         func_1C2C10
    ctx->pc = 0x1BDF14u;
    SET_GPR_U32(ctx, 31, 0x1BDF1Cu);
    ctx->pc = 0x1BDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF14u;
    // 0x1bdf18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C10u, 0x1BDF14u, 0x1BDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF1Cu;
label_1bdf1c:
    // 0x1bdf1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF1Cu;
    {
        const bool branch_taken_0x1bdf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF1Cu;
        // 0x1bdf20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf1c) {
            ctx->pc = 0x1BDF38u;
            goto label_1bdf38;
        }
    }
    ctx->pc = 0x1BDF24u;
    // 0x1bdf24: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDF24u;
    {
        const bool branch_taken_0x1bdf24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF24u;
        // 0x1bdf28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf24) {
            ctx->pc = 0x1BDF3Cu;
            goto label_1bdf3c;
        }
    }
    ctx->pc = 0x1BDF2Cu;
    // 0x1bdf2c: 0xc070aac  jal         func_1C2AB0
    ctx->pc = 0x1BDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF34u);
    ctx->pc = 0x1BDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF2Cu;
    // 0x1bdf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2AB0u, 0x1BDF2Cu, 0x1BDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF34u;
label_1bdf34:
    // 0x1bdf34: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdf38:
    // 0x1bdf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf3c:
    // 0x1bdf3c: 0xc070884  jal         func_1C2210
    ctx->pc = 0x1BDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF44u);
    ctx->pc = 0x1BDF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF3Cu;
    // 0x1bdf40: 0xae110120  sw          $s1, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2210u, 0x1BDF3Cu, 0x1BDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF44u;
label_1bdf44:
    // 0x1bdf44: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF44u;
    {
        const bool branch_taken_0x1bdf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf44) {
            ctx->pc = 0x1BDF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDF44u;
            // 0x1bdf48: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDF60u;
            goto label_1bdf60;
        }
    }
    ctx->pc = 0x1BDF4Cu;
    // 0x1bdf4c: 0xc06f806  jal         func_1BE018
    ctx->pc = 0x1BDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF54u);
    ctx->pc = 0x1BDF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF4Cu;
    // 0x1bdf50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE018u, 0x1BDF4Cu, 0x1BDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF54u;
label_1bdf54:
    // 0x1bdf54: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1bdf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1bdf58: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BDF58u;
    {
        const bool branch_taken_0x1bdf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF58u;
        // 0x1bdf5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf58) {
            ctx->pc = 0x1BDFF4u;
            goto label_1bdff4;
        }
    }
    ctx->pc = 0x1BDF60u;
label_1bdf60:
    // 0x1bdf60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bdf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdf64: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bdf68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bdf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bdf6c: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1bdf6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x1bdf70: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BDF70u;
    {
        const bool branch_taken_0x1bdf70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF70u;
        // 0x1bdf74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf70) {
            ctx->pc = 0x1BDFF4u;
            goto label_1bdff4;
        }
    }
    ctx->pc = 0x1BDF78u;
    // 0x1bdf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf7c: 0xc070b04  jal         func_1C2C10
    ctx->pc = 0x1BDF7Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF84u);
    ctx->pc = 0x1BDF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF7Cu;
    // 0x1bdf80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C10u, 0x1BDF7Cu, 0x1BDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF84u;
label_1bdf84:
    // 0x1bdf84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bdf84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf88: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1bdf88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x1bdf8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF8Cu;
    {
        const bool branch_taken_0x1bdf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF8Cu;
        // 0x1bdf90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf8c) {
            ctx->pc = 0x1BDFA8u;
            goto label_1bdfa8;
        }
    }
    ctx->pc = 0x1BDF94u;
    // 0x1bdf94: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDF94u;
    {
        const bool branch_taken_0x1bdf94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf94) {
            ctx->pc = 0x1BDF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDF94u;
            // 0x1bdf98: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDFACu;
            goto label_1bdfac;
        }
    }
    ctx->pc = 0x1BDF9Cu;
    // 0x1bdf9c: 0xc070aac  jal         func_1C2AB0
    ctx->pc = 0x1BDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BDFA4u);
    ctx->pc = 0x1BDFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF9Cu;
    // 0x1bdfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2AB0u, 0x1BDF9Cu, 0x1BDFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFA4u;
label_1bdfa4:
    // 0x1bdfa4: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x1bdfa4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
label_1bdfa8:
    // 0x1bdfa8: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1bdfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1bdfac:
    // 0x1bdfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfb0: 0xc070ae0  jal         func_1C2B80
    ctx->pc = 0x1BDFB0u;
    SET_GPR_U32(ctx, 31, 0x1BDFB8u);
    ctx->pc = 0x1BDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFB0u;
    // 0x1bdfb4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2B80u, 0x1BDFB0u, 0x1BDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFB8u;
label_1bdfb8:
    // 0x1bdfb8: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bdfbc: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1bdfc0: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1bdfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x1bdfc4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdfc8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1bdfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1bdfcc: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bdfd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bdfd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdfd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdfdc: 0xae030118  sw          $v1, 0x118($s0)
    ctx->pc = 0x1bdfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
    // 0x1bdfe0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDFE0u;
    {
        const bool branch_taken_0x1bdfe0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFE0u;
        // 0x1bdfe4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfe0) {
            ctx->pc = 0x1BDFF0u;
            goto label_1bdff0;
        }
    }
    ctx->pc = 0x1BDFE8u;
    // 0x1bdfe8: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1BDFE8u;
    SET_GPR_U32(ctx, 31, 0x1BDFF0u);
    ctx->pc = 0x1BDFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFE8u;
    // 0x1bdfec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1BDFE8u, 0x1BDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFF0u;
label_1bdff0:
    // 0x1bdff0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1bdff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bdff4:
    // 0x1bdff4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bdff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bdff8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bdff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdffc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1bdffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be000: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1be000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be004: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1be004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be00c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE00Cu;
        // 0x1be010: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE014u;
}
