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

// Function: WHitpolySetupHitPolygon__FP9WcHitpolyP10HPD_HEADER
// Address: 0x17fb88 - 0x17fd0c
void WHitpolySetupHitPolygon__FP9WcHitpolyP10HPD_HEADER_0x17fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySetupHitPolygon__FP9WcHitpolyP10HPD_HEADER_0x17fb88");
#endif

    switch (ctx->pc) {
        case 0x17fbe0u: goto label_17fbe0;
        case 0x17fc04u: goto label_17fc04;
        case 0x17fc88u: goto label_17fc88;
        case 0x17fcacu: goto label_17fcac;
        default: break;
    }

    ctx->pc = 0x17fb88u;

    // 0x17fb88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17fb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17fb8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17fb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fb90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17fb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17fb98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17fb98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17fb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17fba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17fba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fba4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17fba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17fba8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17fbac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17fbb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17fbb4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17fbb8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17fbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17fbbc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17fbc0: 0x8e760020  lw          $s6, 0x20($s3)
    ctx->pc = 0x17fbc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17fbc4: 0x8e71001c  lw          $s1, 0x1C($s3)
    ctx->pc = 0x17fbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x17fbc8: 0xa6160022  sh          $s6, 0x22($s0)
    ctx->pc = 0x17fbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 22));
    // 0x17fbcc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FBCCu;
    {
        const bool branch_taken_0x17fbcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBCCu;
        // 0x17fbd0: 0x162980  sll         $a1, $s6, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbcc) {
            ctx->pc = 0x17FBD8u;
            goto label_17fbd8;
        }
    }
    ctx->pc = 0x17FBD4u;
    // 0x17fbd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17fbd8:
    // 0x17fbd8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17FBD8u;
    SET_GPR_U32(ctx, 31, 0x17FBE0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17FBD8u, 0x17FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBE0u;
label_17fbe0:
    // 0x17fbe0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17fbe4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17fbe8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x17fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x17fbec: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fbf0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FBF0u;
    {
        const bool branch_taken_0x17fbf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBF0u;
        // 0x17fbf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbf0) {
            ctx->pc = 0x17FBFCu;
            goto label_17fbfc;
        }
    }
    ctx->pc = 0x17FBF8u;
    // 0x17fbf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17fbfc:
    // 0x17fbfc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17FBFCu;
    SET_GPR_U32(ctx, 31, 0x17FC04u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17FBFCu, 0x17FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC04u;
label_17fc04:
    // 0x17fc04: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x17fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17fc08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17fc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FC0Cu;
    {
        const bool branch_taken_0x17fc0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC0Cu;
        // 0x17fc10: 0xae060028  sw          $a2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc0c) {
            ctx->pc = 0x17FC1Cu;
            goto label_17fc1c;
        }
    }
    ctx->pc = 0x17FC14u;
    // 0x17fc14: 0x54c00012  bnel        $a2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x17FC14u;
    {
        const bool branch_taken_0x17fc14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fc14) {
            ctx->pc = 0x17FC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FC14u;
            // 0x17fc18: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FC60u;
            goto label_17fc60;
        }
    }
    ctx->pc = 0x17FC1Cu;
label_17fc1c:
    // 0x17fc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17fc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc24: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17fc28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17fc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17fc2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17fc2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fc30: 0x24a57d60  addiu       $a1, $a1, 0x7D60
    ctx->pc = 0x17fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32096));
    // 0x17fc34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17fc34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fc38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fc3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17fc3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fc40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17fc40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fc44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17fc44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fc48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17fc48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17fc4c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17fc4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fc50: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17fc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fc54: 0x8068186  j           func_1A0618
    ctx->pc = 0x17FC54u;
    ctx->pc = 0x17FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC54u;
    // 0x17fc58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17FC5Cu;
    // 0x17fc5c: 0x0  nop
    ctx->pc = 0x17fc5cu;
    // NOP
label_17fc60:
    // 0x17fc60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17fc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc64: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x17fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x17fc68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17fc68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc6c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x17fc70: 0x262f021  addu        $fp, $s3, $v0
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17fc74: 0x263b821  addu        $s7, $s3, $v1
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x17fc78: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x17fc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x17fc7c: 0x1ac00017  blez        $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x17FC7Cu;
    {
        const bool branch_taken_0x17fc7c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x17FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC7Cu;
        // 0x17fc80: 0x264a021  addu        $s4, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc7c) {
            ctx->pc = 0x17FCDCu;
            goto label_17fcdc;
        }
    }
    ctx->pc = 0x17FC84u;
    // 0x17fc84: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x17fc84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17fc88:
    // 0x17fc88: 0x96300004  lhu         $s0, 0x4($s1)
    ctx->pc = 0x17fc88u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17fc8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17fc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17fc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc9c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x17fc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fca0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x17fca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fca4: 0xc05ffd0  jal         func_17FF40
    ctx->pc = 0x17FCA4u;
    SET_GPR_U32(ctx, 31, 0x17FCACu);
    ctx->pc = 0x17FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCA4u;
    // 0x17fca8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FF40u, 0x17FCA4u, 0x17FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCACu;
label_17fcac:
    // 0x17fcac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17fcb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17fcb4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x17fcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17fcb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17fcbc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x17fcbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17fcc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17fcc4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x17fcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x17fcc8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x17fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x17fccc: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x17fcccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x17fcd0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x17fcd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17fcd4: 0x1660ffec  bnez        $s3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17FCD4u;
    {
        const bool branch_taken_0x17fcd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCD4u;
        // 0x17fcd8: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcd4) {
            ctx->pc = 0x17FC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fc88;
        }
    }
    ctx->pc = 0x17FCDCu;
label_17fcdc:
    // 0x17fcdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17fcdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17fce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17fce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17fce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17fce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fcec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17fcecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fcf0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17fcf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fcf4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17fcf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fcf8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17fcf8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17fcfc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17fcfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fd00: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17fd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fd04: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD04u;
        // 0x17fd08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FD0Cu;
}
