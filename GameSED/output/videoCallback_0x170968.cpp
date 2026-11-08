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

// Function: videoCallback
// Address: 0x170968 - 0x170a88
void videoCallback_0x170968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoCallback_0x170968");
#endif

    switch (ctx->pc) {
        case 0x1709d8u: goto label_1709d8;
        case 0x170a1cu: goto label_170a1c;
        case 0x170a3cu: goto label_170a3c;
        case 0x170a50u: goto label_170a50;
        case 0x170a5cu: goto label_170a5c;
        default: break;
    }

    ctx->pc = 0x170968u;

    // 0x170968: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17096c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17096cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x170970: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x170970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170974: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x170974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x170978: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x170978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x17097c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x170980: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x170980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170984: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x170984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x170988: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x17098c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x170990: 0x26d41368  addiu       $s4, $s6, 0x1368
    ctx->pc = 0x170990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4968));
    // 0x170994: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x170994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x170998: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x170998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x17099c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1709a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1709a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709a4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1709a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1709a8: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x1709a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1709ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1709acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709b0: 0x3c100005  lui         $s0, 0x5
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)5 << 16));
    // 0x1709b4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1709b8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1709b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1709bc: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x1709bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1709c0: 0x8eb1000c  lw          $s1, 0xC($s5)
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1709c4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1709c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1709c8: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x1709c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1709cc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1709ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1709d0: 0xc05c5e0  jal         func_171780
    ctx->pc = 0x1709D0u;
    SET_GPR_U32(ctx, 31, 0x1709D8u);
    ctx->pc = 0x1709D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709D0u;
    // 0x1709d4: 0x222800b  movn        $s0, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171780u, 0x1709D0u, 0x1709D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1709D8u;
label_1709d8:
    // 0x1709d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1709dc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1709dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1709e0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1709e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1709e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1709e8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1709e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1709ec: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x1709ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1709f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1709f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1709f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1709f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1709f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1709f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1709fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1709fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x170a00: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x170a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x170a04: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x170a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a08: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x170a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a0c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x170a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x170a10: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x170a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a14: 0xc05c2d8  jal         func_170B60
    ctx->pc = 0x170A14u;
    SET_GPR_U32(ctx, 31, 0x170A1Cu);
    ctx->pc = 0x170A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A14u;
    // 0x170a18: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B60u, 0x170A14u, 0x170A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A1Cu;
label_170a1c:
    // 0x170a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x170a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a24: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x170A24u;
    {
        const bool branch_taken_0x170a24 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x170A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A24u;
        // 0x170a28: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a24) {
            ctx->pc = 0x170A50u;
            goto label_170a50;
        }
    }
    ctx->pc = 0x170A2Cu;
    // 0x170a2c: 0xdea60018  ld          $a2, 0x18($s5)
    ctx->pc = 0x170a2cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x170a30: 0xdea50010  ld          $a1, 0x10($s5)
    ctx->pc = 0x170a30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x170a34: 0xc05c604  jal         func_171810
    ctx->pc = 0x170A34u;
    SET_GPR_U32(ctx, 31, 0x170A3Cu);
    ctx->pc = 0x170A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A34u;
    // 0x170a38: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171810u, 0x170A34u, 0x170A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A3Cu;
label_170a3c:
    // 0x170a3c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x170a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x170a40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170A40u;
    {
        const bool branch_taken_0x170a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A40u;
        // 0x170a44: 0x248476a0  addiu       $a0, $a0, 0x76A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a40) {
            ctx->pc = 0x170A50u;
            goto label_170a50;
        }
    }
    ctx->pc = 0x170A48u;
    // 0x170a48: 0xc05c246  jal         func_170918
    ctx->pc = 0x170A48u;
    SET_GPR_U32(ctx, 31, 0x170A50u);
    ctx->pc = 0x170918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170918u, 0x170A48u, 0x170A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A50u;
label_170a50:
    // 0x170a50: 0x26c41368  addiu       $a0, $s6, 0x1368
    ctx->pc = 0x170a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4968));
    // 0x170a54: 0xc05c5e6  jal         func_171798
    ctx->pc = 0x170A54u;
    SET_GPR_U32(ctx, 31, 0x170A5Cu);
    ctx->pc = 0x170A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A54u;
    // 0x170a58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171798u, 0x170A54u, 0x170A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A5Cu;
label_170a5c:
    // 0x170a5c: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x170a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x170a60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x170a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170a64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x170a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170a68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x170a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170a6c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x170a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170a70: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x170a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170a74: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x170a74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x170a78: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x170a78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170a7c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x170a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x170a80: 0x3e00008  jr          $ra
    ctx->pc = 0x170A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A80u;
        // 0x170a84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170A88u;
}
