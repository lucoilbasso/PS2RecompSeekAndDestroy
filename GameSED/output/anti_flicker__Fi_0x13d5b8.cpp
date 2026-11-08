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

// Function: anti_flicker__Fi
// Address: 0x13d5b8 - 0x13d810
void anti_flicker__Fi_0x13d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("anti_flicker__Fi_0x13d5b8");
#endif

    switch (ctx->pc) {
        case 0x13d604u: goto label_13d604;
        case 0x13d620u: goto label_13d620;
        case 0x13d640u: goto label_13d640;
        case 0x13d65cu: goto label_13d65c;
        case 0x13d664u: goto label_13d664;
        case 0x13d688u: goto label_13d688;
        case 0x13d6b8u: goto label_13d6b8;
        case 0x13d6c8u: goto label_13d6c8;
        case 0x13d6e8u: goto label_13d6e8;
        case 0x13d6f0u: goto label_13d6f0;
        case 0x13d728u: goto label_13d728;
        case 0x13d764u: goto label_13d764;
        case 0x13d770u: goto label_13d770;
        case 0x13d790u: goto label_13d790;
        case 0x13d798u: goto label_13d798;
        case 0x13d7d0u: goto label_13d7d0;
        default: break;
    }

    ctx->pc = 0x13d5b8u;

    // 0x13d5b8: 0x8f828a44  lw          $v0, -0x75BC($gp)
    ctx->pc = 0x13d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937156)));
    // 0x13d5bc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d5bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d5c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13d5c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13d5cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d5d0: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x13d5d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13d5d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13D5D4u;
    {
        const bool branch_taken_0x13d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5D4u;
        // 0x13d5d8: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5d4) {
            ctx->pc = 0x13D668u;
            goto label_13d668;
        }
    }
    ctx->pc = 0x13D5DCu;
    // 0x13d5dc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13d5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13d5e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13d5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5e4: 0x8f908a48  lw          $s0, -0x75B8($gp)
    ctx->pc = 0x13d5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x13d5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5ec: 0xc7958a50  lwc1        $f21, -0x75B0($gp)
    ctx->pc = 0x13d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13d5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13d5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d5f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d5fc: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13D5FCu;
    SET_GPR_U32(ctx, 31, 0x13D604u);
    ctx->pc = 0x13D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5FCu;
    // 0x13d600: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13D5FCu, 0x13D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D604u;
label_13d604:
    // 0x13d604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d608: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d60c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13d60cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13d610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13d614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d618: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13D618u;
    SET_GPR_U32(ctx, 31, 0x13D620u);
    ctx->pc = 0x13D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D618u;
    // 0x13d61c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13D618u, 0x13D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D620u;
label_13d620:
    // 0x13d620: 0x8f908a4c  lw          $s0, -0x75B4($gp)
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937164)));
    // 0x13d624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d62c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13d630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d634: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d638: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13D638u;
    SET_GPR_U32(ctx, 31, 0x13D640u);
    ctx->pc = 0x13D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D638u;
    // 0x13d63c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13D638u, 0x13D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D640u;
label_13d640:
    // 0x13d640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d644: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d648: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d64c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d650: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13d650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d654: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13D654u;
    SET_GPR_U32(ctx, 31, 0x13D65Cu);
    ctx->pc = 0x13D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D654u;
    // 0x13d658: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13D654u, 0x13D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D65Cu;
label_13d65c:
    // 0x13d65c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x13D65Cu;
    SET_GPR_U32(ctx, 31, 0x13D664u);
    ctx->pc = 0x13D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D65Cu;
    // 0x13d660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x13D65Cu, 0x13D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D664u;
label_13d664:
    // 0x13d664: 0xaf808a44  sw          $zero, -0x75BC($gp)
    ctx->pc = 0x13d664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 0));
label_13d668:
    // 0x13d668: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x13d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13d66c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d670: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13d670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13d674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d678: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x13d678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x13d67c: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x13d67cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13d680: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x13D680u;
    SET_GPR_U32(ctx, 31, 0x13D688u);
    ctx->pc = 0x13D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D680u;
    // 0x13d684: 0x30f00001  andi        $s0, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x13D680u, 0x13D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D688u;
label_13d688:
    // 0x13d688: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D688u;
    {
        const bool branch_taken_0x13d688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D688u;
        // 0x13d68c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d688) {
            ctx->pc = 0x13D6A0u;
            goto label_13d6a0;
        }
    }
    ctx->pc = 0x13D690u;
    // 0x13d690: 0x1222002f  beq         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x13D690u;
    {
        const bool branch_taken_0x13d690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x13D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D690u;
        // 0x13d694: 0x101240  sll         $v0, $s0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d690) {
            ctx->pc = 0x13D750u;
            goto label_13d750;
        }
    }
    ctx->pc = 0x13D698u;
    // 0x13d698: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x13D698u;
    {
        const bool branch_taken_0x13d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D698u;
        // 0x13d69c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d698) {
            ctx->pc = 0x13D7F8u;
            goto label_13d7f8;
        }
    }
    ctx->pc = 0x13D6A0u;
label_13d6a0:
    // 0x13d6a0: 0x101240  sll         $v0, $s0, 9
    ctx->pc = 0x13d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x13d6a4: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x13d6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x13d6a8: 0x26101200  addiu       $s0, $s0, 0x1200
    ctx->pc = 0x13d6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x13d6ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13d6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13d6b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13D6B0u;
    SET_GPR_U32(ctx, 31, 0x13D6B8u);
    ctx->pc = 0x13D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D6B0u;
    // 0x13d6b4: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13D6B0u, 0x13D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6B8u;
label_13d6b8:
    // 0x13d6b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13d6bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13d6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d6c0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13d6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13d6c4: 0x0  nop
    ctx->pc = 0x13d6c4u;
    // NOP
label_13d6c8:
    // 0x13d6c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d6cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13d6d0: 0x0  nop
    ctx->pc = 0x13d6d0u;
    // NOP
    // 0x13d6d4: 0x0  nop
    ctx->pc = 0x13d6d4u;
    // NOP
    // 0x13d6d8: 0x0  nop
    ctx->pc = 0x13d6d8u;
    // NOP
    // 0x13d6dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13D6DCu;
    {
        const bool branch_taken_0x13d6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d6dc) {
            ctx->pc = 0x13D6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d6c8;
        }
    }
    ctx->pc = 0x13D6E4u;
    // 0x13d6e4: 0x0  nop
    ctx->pc = 0x13d6e4u;
    // NOP
label_13d6e8:
    // 0x13d6e8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13D6E8u;
    SET_GPR_U32(ctx, 31, 0x13D6F0u);
    ctx->pc = 0x13D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D6E8u;
    // 0x13d6ec: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13D6E8u, 0x13D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6F0u;
label_13d6f0:
    // 0x13d6f0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13d6f4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13D6F4u;
    {
        const bool branch_taken_0x13d6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6F4u;
        // 0x13d6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6f4) {
            ctx->pc = 0x13D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d6e8;
        }
    }
    ctx->pc = 0x13D6FCu;
    // 0x13d6fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13d6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13d700: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D700u;
    {
        const bool branch_taken_0x13d700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D700u;
        // 0x13d704: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d700) {
            ctx->pc = 0x13D720u;
            goto label_13d720;
        }
    }
    ctx->pc = 0x13D708u;
    // 0x13d708: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13d70c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13d710: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13d714: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x13d714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x13d718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D718u;
    {
        const bool branch_taken_0x13d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D718u;
        // 0x13d71c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d718) {
            ctx->pc = 0x13D728u;
            goto label_13d728;
        }
    }
    ctx->pc = 0x13D720u;
label_13d720:
    // 0x13d720: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x13D720u;
    SET_GPR_U32(ctx, 31, 0x13D728u);
    ctx->pc = 0x13D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D720u;
    // 0x13d724: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x13D720u, 0x13D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D728u;
label_13d728:
    // 0x13d728: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x13d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13d72c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x13d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13d730: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d734: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x13d734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x13d738: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13d73c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x13d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x13d740: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13d740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13d744: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13D744u;
    {
        const bool branch_taken_0x13d744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D744u;
        // 0x13d748: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d744) {
            ctx->pc = 0x13D7F0u;
            goto label_13d7f0;
        }
    }
    ctx->pc = 0x13D74Cu;
    // 0x13d74c: 0x0  nop
    ctx->pc = 0x13d74cu;
    // NOP
label_13d750:
    // 0x13d750: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x13d750u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x13d754: 0x26101600  addiu       $s0, $s0, 0x1600
    ctx->pc = 0x13d754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5632));
    // 0x13d758: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13d758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13d75c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13D75Cu;
    SET_GPR_U32(ctx, 31, 0x13D764u);
    ctx->pc = 0x13D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D75Cu;
    // 0x13d760: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13D75Cu, 0x13D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D764u;
label_13d764:
    // 0x13d764: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13d764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13d768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13d768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d76c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13d76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_13d770:
    // 0x13d770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d774: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13d778: 0x0  nop
    ctx->pc = 0x13d778u;
    // NOP
    // 0x13d77c: 0x0  nop
    ctx->pc = 0x13d77cu;
    // NOP
    // 0x13d780: 0x0  nop
    ctx->pc = 0x13d780u;
    // NOP
    // 0x13d784: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13D784u;
    {
        const bool branch_taken_0x13d784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d784) {
            ctx->pc = 0x13D770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d770;
        }
    }
    ctx->pc = 0x13D78Cu;
    // 0x13d78c: 0x0  nop
    ctx->pc = 0x13d78cu;
    // NOP
label_13d790:
    // 0x13d790: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13D790u;
    SET_GPR_U32(ctx, 31, 0x13D798u);
    ctx->pc = 0x13D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D790u;
    // 0x13d794: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13D790u, 0x13D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D798u;
label_13d798:
    // 0x13d798: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13d79c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13D79Cu;
    {
        const bool branch_taken_0x13d79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D79Cu;
        // 0x13d7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d79c) {
            ctx->pc = 0x13D790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d790;
        }
    }
    ctx->pc = 0x13D7A4u;
    // 0x13d7a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13d7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13d7a8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D7A8u;
    {
        const bool branch_taken_0x13d7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7A8u;
        // 0x13d7ac: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7a8) {
            ctx->pc = 0x13D7C8u;
            goto label_13d7c8;
        }
    }
    ctx->pc = 0x13D7B0u;
    // 0x13d7b0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13d7b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13d7b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13d7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13d7bc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x13d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x13d7c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D7C0u;
    {
        const bool branch_taken_0x13d7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7C0u;
        // 0x13d7c4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7c0) {
            ctx->pc = 0x13D7D0u;
            goto label_13d7d0;
        }
    }
    ctx->pc = 0x13D7C8u;
label_13d7c8:
    // 0x13d7c8: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x13D7C8u;
    SET_GPR_U32(ctx, 31, 0x13D7D0u);
    ctx->pc = 0x13D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7C8u;
    // 0x13d7cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x13D7C8u, 0x13D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7D0u;
label_13d7d0:
    // 0x13d7d0: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13d7d4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x13d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13d7d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d7dc: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x13d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x13d7e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13d7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13d7e4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x13d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x13d7e8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13d7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13d7ec: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x13d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_13d7f0:
    // 0x13d7f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d7f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13d7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d7f8:
    // 0x13d7f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13d7f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d7fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d800: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x13d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13d804: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x13d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13d808: 0x3e00008  jr          $ra
    ctx->pc = 0x13D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D808u;
        // 0x13d80c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D810u;
}
