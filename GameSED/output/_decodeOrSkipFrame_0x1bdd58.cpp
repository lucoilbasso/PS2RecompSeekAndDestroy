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

// Function: _decodeOrSkipFrame
// Address: 0x1bdd58 - 0x1bde6c
void _decodeOrSkipFrame_0x1bdd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkipFrame_0x1bdd58");
#endif

    switch (ctx->pc) {
        case 0x1bddb0u: goto label_1bddb0;
        case 0x1bddc0u: goto label_1bddc0;
        case 0x1bddd4u: goto label_1bddd4;
        case 0x1bdde4u: goto label_1bdde4;
        case 0x1bddf4u: goto label_1bddf4;
        default: break;
    }

    ctx->pc = 0x1bdd58u;

    // 0x1bdd58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bdd5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdd60: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1bdd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1bdd64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1bdd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1bdd68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bdd68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bdd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bdd70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bdd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bdd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1bdd78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bdd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bdd7c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD7Cu;
    {
        const bool branch_taken_0x1bdd7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD7Cu;
        // 0x1bdd80: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd7c) {
            ctx->pc = 0x1BDD90u;
            goto label_1bdd90;
        }
    }
    ctx->pc = 0x1BDD84u;
    // 0x1bdd84: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1bdd84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1bdd88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BDD88u;
    {
        const bool branch_taken_0x1bdd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD88u;
        // 0x1bdd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd88) {
            ctx->pc = 0x1BDDCCu;
            goto label_1bddcc;
        }
    }
    ctx->pc = 0x1BDD90u;
label_1bdd90:
    // 0x1bdd90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bdd94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD94u;
    {
        const bool branch_taken_0x1bdd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD94u;
        // 0x1bdd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd94) {
            ctx->pc = 0x1BDDA8u;
            goto label_1bdda8;
        }
    }
    ctx->pc = 0x1BDD9Cu;
    // 0x1bdd9c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1bdd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1bdda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdda4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1bdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1bdda8:
    // 0x1bdda8: 0xc070b04  jal         func_1C2C10
    ctx->pc = 0x1BDDA8u;
    SET_GPR_U32(ctx, 31, 0x1BDDB0u);
    ctx->pc = 0x1BDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDA8u;
    // 0x1bddac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C10u, 0x1BDDA8u, 0x1BDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDB0u;
label_1bddb0:
    // 0x1bddb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDDB0u;
    {
        const bool branch_taken_0x1bddb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDB0u;
        // 0x1bddb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddb0) {
            ctx->pc = 0x1BDDC4u;
            goto label_1bddc4;
        }
    }
    ctx->pc = 0x1BDDB8u;
    // 0x1bddb8: 0xc070aac  jal         func_1C2AB0
    ctx->pc = 0x1BDDB8u;
    SET_GPR_U32(ctx, 31, 0x1BDDC0u);
    ctx->pc = 0x1BDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDB8u;
    // 0x1bddbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2AB0u, 0x1BDDB8u, 0x1BDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDC0u;
label_1bddc0:
    // 0x1bddc0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1bddc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bddc4:
    // 0x1bddc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDDC4u;
    {
        const bool branch_taken_0x1bddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDC4u;
        // 0x1bddc8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddc4) {
            ctx->pc = 0x1BDDE4u;
            goto label_1bdde4;
        }
    }
    ctx->pc = 0x1BDDCCu;
label_1bddcc:
    // 0x1bddcc: 0xc070b04  jal         func_1C2C10
    ctx->pc = 0x1BDDCCu;
    SET_GPR_U32(ctx, 31, 0x1BDDD4u);
    ctx->pc = 0x1BDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDCCu;
    // 0x1bddd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C10u, 0x1BDDCCu, 0x1BDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDD4u;
label_1bddd4:
    // 0x1bddd4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bddd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bddd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bddd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdddc: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1BDDDCu;
    SET_GPR_U32(ctx, 31, 0x1BDDE4u);
    ctx->pc = 0x1BDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDDCu;
    // 0x1bdde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1BDDDCu, 0x1BDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE4u;
label_1bdde4:
    // 0x1bdde4: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bdde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddec: 0xc070ae0  jal         func_1C2B80
    ctx->pc = 0x1BDDECu;
    SET_GPR_U32(ctx, 31, 0x1BDDF4u);
    ctx->pc = 0x1BDDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDECu;
    // 0x1bddf0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2B80u, 0x1BDDECu, 0x1BDDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDF4u;
label_1bddf4:
    // 0x1bddf4: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1bddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bddf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bddfc: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDDFCu;
    {
        const bool branch_taken_0x1bddfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bddfc) {
            ctx->pc = 0x1BDE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDDFCu;
            // 0x1bde00: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE1Cu;
            goto label_1bde1c;
        }
    }
    ctx->pc = 0x1BDE04u;
    // 0x1bde04: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDE04u;
    {
        const bool branch_taken_0x1bde04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bde04) {
            ctx->pc = 0x1BDE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDE04u;
            // 0x1bde08: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE1Cu;
            goto label_1bde1c;
        }
    }
    ctx->pc = 0x1BDE0Cu;
    // 0x1bde0c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1bde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1bde10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1bde10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bde14: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1bde14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1bde18: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1bde18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1bde1c:
    // 0x1bde1c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1bde1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bde20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bde20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bde24: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1bde24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1bde28: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1bde2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDE2Cu;
    {
        const bool branch_taken_0x1bde2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE2Cu;
        // 0x1bde30: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde2c) {
            ctx->pc = 0x1BDE50u;
            goto label_1bde50;
        }
    }
    ctx->pc = 0x1BDE34u;
    // 0x1bde34: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1bde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bde38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bde38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bde3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bde40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bde40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bde44: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1bde44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x1bde48: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bde48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bde4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bde4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bde50:
    // 0x1bde50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bde50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bde54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1bde54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bde58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bde58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bde5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1bde5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bde60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde64: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE64u;
        // 0x1bde68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE6Cu;
}
