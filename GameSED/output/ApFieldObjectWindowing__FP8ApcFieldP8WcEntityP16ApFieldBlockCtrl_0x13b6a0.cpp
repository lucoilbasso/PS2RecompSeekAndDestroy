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

// Function: ApFieldObjectWindowing__FP8ApcFieldP8WcEntityP16ApFieldBlockCtrl
// Address: 0x13b6a0 - 0x13b98c
void ApFieldObjectWindowing__FP8ApcFieldP8WcEntityP16ApFieldBlockCtrl_0x13b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldObjectWindowing__FP8ApcFieldP8WcEntityP16ApFieldBlockCtrl_0x13b6a0");
#endif

    switch (ctx->pc) {
        case 0x13b700u: goto label_13b700;
        case 0x13b718u: goto label_13b718;
        case 0x13b7d0u: goto label_13b7d0;
        case 0x13b814u: goto label_13b814;
        case 0x13b8d4u: goto label_13b8d4;
        default: break;
    }

    ctx->pc = 0x13b6a0u;

    // 0x13b6a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13b6a4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x13b6a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x13b6a8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x13b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x13b6ac: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x13b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x13b6b0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x13b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x13b6b4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x13b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x13b6b8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x13b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x13b6bc: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x13b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x13b6c0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x13b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x13b6c4: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x13b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x13b6c8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x13b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x13b6cc: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x13b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x13b6d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13b6d4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x13b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x13b6d8: 0x8c820164  lw          $v0, 0x164($a0)
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
    // 0x13b6dc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x13b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x13b6e0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x13b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x13b6e4: 0x8c8301e4  lw          $v1, 0x1E4($a0)
    ctx->pc = 0x13b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x13b6e8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x13b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x13b6ec: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x13b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x13b6f0: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x13b6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b6f4: 0xc4400174  lwc1        $f0, 0x174($v0)
    ctx->pc = 0x13b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b6f8: 0xc06198e  jal         func_186638
    ctx->pc = 0x13B6F8u;
    SET_GPR_U32(ctx, 31, 0x13B700u);
    ctx->pc = 0x13B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6F8u;
    // 0x13b6fc: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186638u, 0x13B6F8u, 0x13B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B700u;
label_13b700:
    // 0x13b700: 0x8fbe0004  lw          $fp, 0x4($sp)
    ctx->pc = 0x13b700u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13b704: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13b704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b708: 0x13c0007e  beqz        $fp, . + 4 + (0x7E << 2)
    ctx->pc = 0x13B708u;
    {
        const bool branch_taken_0x13b708 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B708u;
        // 0x13b70c: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b708) {
            ctx->pc = 0x13B904u;
            goto label_13b904;
        }
    }
    ctx->pc = 0x13B710u;
    // 0x13b710: 0x3c09ffef  lui         $t1, 0xFFEF
    ctx->pc = 0x13b710u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65519 << 16));
    // 0x13b714: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x13b714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_13b718:
    // 0x13b718: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b71c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x13b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13b720: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x13b720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13b724: 0x10430075  beq         $v0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x13B724u;
    {
        const bool branch_taken_0x13b724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B724u;
        // 0x13b728: 0x8e3e001c  lw          $fp, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b724) {
            ctx->pc = 0x13B8FCu;
            goto label_13b8fc;
        }
    }
    ctx->pc = 0x13B72Cu;
    // 0x13b72c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b730: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x13b730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x13b734: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x13b734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13b738: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x13B738u;
    {
        const bool branch_taken_0x13b738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B738u;
        // 0x13b73c: 0x692024  and         $a0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b738) {
            ctx->pc = 0x13B8FCu;
            goto label_13b8fc;
        }
    }
    ctx->pc = 0x13B740u;
    // 0x13b740: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13b740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13b744: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x13b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13b748: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x13b748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x13b74c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B74Cu;
    {
        const bool branch_taken_0x13b74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B74Cu;
        // 0x13b750: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b74c) {
            ctx->pc = 0x13B760u;
            goto label_13b760;
        }
    }
    ctx->pc = 0x13B754u;
    // 0x13b754: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x13b754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x13b758: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x13B758u;
    {
        const bool branch_taken_0x13b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B758u;
        // 0x13b75c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b758) {
            ctx->pc = 0x13B8FCu;
            goto label_13b8fc;
        }
    }
    ctx->pc = 0x13B760u;
label_13b760:
    // 0x13b760: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b764: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x13b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x13b768: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13b768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x13b76c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13B76Cu;
    {
        const bool branch_taken_0x13b76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b76c) {
            ctx->pc = 0x13B770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B76Cu;
            // 0x13b770: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B798u;
            goto label_13b798;
        }
    }
    ctx->pc = 0x13B774u;
    // 0x13b774: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x13b774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x13b778: 0x24020846  addiu       $v0, $zero, 0x846
    ctx->pc = 0x13b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    // 0x13b77c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B77Cu;
    {
        const bool branch_taken_0x13b77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13b77c) {
            ctx->pc = 0x13B780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B77Cu;
            // 0x13b780: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B798u;
            goto label_13b798;
        }
    }
    ctx->pc = 0x13B784u;
    // 0x13b784: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x13b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x13b788: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13b78c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x13B78Cu;
    {
        const bool branch_taken_0x13b78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B78Cu;
        // 0x13b790: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b78c) {
            ctx->pc = 0x13B8FCu;
            goto label_13b8fc;
        }
    }
    ctx->pc = 0x13B794u;
    // 0x13b794: 0x0  nop
    ctx->pc = 0x13b794u;
    // NOP
label_13b798:
    // 0x13b798: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x13b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x13b79c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13b79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13b7a0: 0x14430045  bne         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x13B7A0u;
    {
        const bool branch_taken_0x13b7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7A0u;
        // 0x13b7a4: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7a0) {
            ctx->pc = 0x13B8B8u;
            goto label_13b8b8;
        }
    }
    ctx->pc = 0x13B7A8u;
    // 0x13b7a8: 0x8e3201b0  lw          $s2, 0x1B0($s1)
    ctx->pc = 0x13b7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x13b7ac: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13b7acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7b0: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x13B7B0u;
    {
        const bool branch_taken_0x13b7b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7B0u;
        // 0x13b7b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7b0) {
            ctx->pc = 0x13B888u;
            goto label_13b888;
        }
    }
    ctx->pc = 0x13B7B8u;
    // 0x13b7b8: 0x3c17ffef  lui         $s7, 0xFFEF
    ctx->pc = 0x13b7b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65519 << 16));
    // 0x13b7bc: 0x3c150020  lui         $s5, 0x20
    ctx->pc = 0x13b7bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32 << 16));
    // 0x13b7c0: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x13b7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x13b7c4: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x13b7c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x13b7c8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x13b7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b7cc: 0x0  nop
    ctx->pc = 0x13b7ccu;
    // NOP
label_13b7d0:
    // 0x13b7d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13b7d4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x13b7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x13b7d8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x13B7D8u;
    {
        const bool branch_taken_0x13b7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b7d8) {
            ctx->pc = 0x13B7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B7D8u;
            // 0x13b7dc: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B880u;
            goto label_13b880;
        }
    }
    ctx->pc = 0x13B7E0u;
    // 0x13b7e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x13b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13b7e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13B7E8u;
    {
        const bool branch_taken_0x13b7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7E8u;
        // 0x13b7ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7e8) {
            ctx->pc = 0x13B828u;
            goto label_13b828;
        }
    }
    ctx->pc = 0x13B7F0u;
    // 0x13b7f0: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x13b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x13b7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7f8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x13b7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b7fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13b7fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13b800: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x13b800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b804: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x13b804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x13b808: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x13b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x13b80c: 0xc04ee64  jal         func_13B990
    ctx->pc = 0x13B80Cu;
    SET_GPR_U32(ctx, 31, 0x13B814u);
    ctx->pc = 0x13B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B80Cu;
    // 0x13b810: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B990u, 0x13B80Cu, 0x13B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B814u;
label_13b814:
    // 0x13b814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b818: 0x7ba80020  lq          $t0, 0x20($sp)
    ctx->pc = 0x13b818u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b81c: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x13b81cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b820: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13B820u;
    {
        const bool branch_taken_0x13b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B820u;
        // 0x13b824: 0x7baa0040  lq          $t2, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b820) {
            ctx->pc = 0x13B84Cu;
            goto label_13b84c;
        }
    }
    ctx->pc = 0x13B828u;
label_13b828:
    // 0x13b828: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x13b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x13b82c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13b830: 0x481824  and         $v1, $v0, $t0
    ctx->pc = 0x13b830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x13b834: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x13b834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x13b838: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B838u;
    {
        const bool branch_taken_0x13b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b838) {
            ctx->pc = 0x13B83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B838u;
            // 0x13b83c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B848u;
            goto label_13b848;
        }
    }
    ctx->pc = 0x13B840u;
    // 0x13b840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B840u;
    {
        const bool branch_taken_0x13b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B840u;
        // 0x13b844: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b840) {
            ctx->pc = 0x13B84Cu;
            goto label_13b84c;
        }
    }
    ctx->pc = 0x13B848u;
label_13b848:
    // 0x13b848: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13b848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b84c:
    // 0x13b84c: 0x5660000c  bnel        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13B84Cu;
    {
        const bool branch_taken_0x13b84c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b84c) {
            ctx->pc = 0x13B850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B84Cu;
            // 0x13b850: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B880u;
            goto label_13b880;
        }
    }
    ctx->pc = 0x13B854u;
    // 0x13b854: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13b854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13b858: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x13b858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x13b85c: 0x481825  or          $v1, $v0, $t0
    ctx->pc = 0x13b85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x13b860: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x13b860u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x13b864: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x13b864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x13b868: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B868u;
    {
        const bool branch_taken_0x13b868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B868u;
        // 0x13b86c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b868) {
            ctx->pc = 0x13B87Cu;
            goto label_13b87c;
        }
    }
    ctx->pc = 0x13B870u;
    // 0x13b870: 0x8e8201c8  lw          $v0, 0x1C8($s4)
    ctx->pc = 0x13b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x13b874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13b874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13b878: 0xae8201c8  sw          $v0, 0x1C8($s4)
    ctx->pc = 0x13b878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 2));
label_13b87c:
    // 0x13b87c: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x13b87cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_13b880:
    // 0x13b880: 0x5640ffd3  bnel        $s2, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x13B880u;
    {
        const bool branch_taken_0x13b880 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b880) {
            ctx->pc = 0x13B884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B880u;
            // 0x13b884: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b7d0;
        }
    }
    ctx->pc = 0x13B888u;
label_13b888:
    // 0x13b888: 0x56c0001c  bnel        $s6, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x13B888u;
    {
        const bool branch_taken_0x13b888 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b888) {
            ctx->pc = 0x13B88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B888u;
            // 0x13b88c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B8FCu;
            goto label_13b8fc;
        }
    }
    ctx->pc = 0x13B890u;
    // 0x13b890: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b894: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x13b894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x13b898: 0x8e8401c8  lw          $a0, 0x1C8($s4)
    ctx->pc = 0x13b898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x13b89c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x13b89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x13b8a0: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x13b8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13b8a4: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x13b8a4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x13b8a8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x13b8ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13b8b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13B8B0u;
    {
        const bool branch_taken_0x13b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8B0u;
        // 0x13b8b4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8b0) {
            ctx->pc = 0x13B8FCu;
            goto label_13b8fc;
        }
    }
    ctx->pc = 0x13B8B8u;
label_13b8b8:
    // 0x13b8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8bc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x13b8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b8c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13b8c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13b8c4: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x13b8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b8c8: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x13b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x13b8cc: 0xc04ee64  jal         func_13B990
    ctx->pc = 0x13B8CCu;
    SET_GPR_U32(ctx, 31, 0x13B8D4u);
    ctx->pc = 0x13B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8CCu;
    // 0x13b8d0: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B990u, 0x13B8CCu, 0x13B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8D4u;
label_13b8d4:
    // 0x13b8d4: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x13b8d4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b8d8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x13b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x13b8dc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b8e0: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x13b8e0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b8e4: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x13b8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13b8e8: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x13b8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13b8ec: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x13b8ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x13b8f0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x13b8f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b8f8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x13b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_13b8fc:
    // 0x13b8fc: 0x17c0ff86  bnez        $fp, . + 4 + (-0x7A << 2)
    ctx->pc = 0x13B8FCu;
    {
        const bool branch_taken_0x13b8fc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8FCu;
        // 0x13b900: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8fc) {
            ctx->pc = 0x13B718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b718;
        }
    }
    ctx->pc = 0x13B904u;
label_13b904:
    // 0x13b904: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x13B904u;
    {
        const bool branch_taken_0x13b904 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B904u;
        // 0x13b908: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b904) {
            ctx->pc = 0x13B958u;
            goto label_13b958;
        }
    }
    ctx->pc = 0x13B90Cu;
    // 0x13b90c: 0x5543ff7c  bnel        $t2, $v1, . + 4 + (-0x84 << 2)
    ctx->pc = 0x13B90Cu;
    {
        const bool branch_taken_0x13b90c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x13b90c) {
            ctx->pc = 0x13B910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B90Cu;
            // 0x13b910: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b700;
        }
    }
    ctx->pc = 0x13B914u;
    // 0x13b914: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13b914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x13b918: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x13b918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b91c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x13b91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13b920: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x13b920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b924: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x13b924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b928: 0x24846878  addiu       $a0, $a0, 0x6878
    ctx->pc = 0x13b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26744));
    // 0x13b92c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x13b92cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13b930: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x13b930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b934: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x13b934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13b938: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x13b938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b93c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x13b93cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13b940: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x13b940u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b944: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x13b944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13b948: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x13b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b94c: 0x80740b2  j           func_1D02C8
    ctx->pc = 0x13B94Cu;
    ctx->pc = 0x13B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B94Cu;
    // 0x13b950: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    printf_0x1d02c8(rdram, ctx, runtime); return;
    ctx->pc = 0x13B954u;
    // 0x13b954: 0x0  nop
    ctx->pc = 0x13b954u;
    // NOP
label_13b958:
    // 0x13b958: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x13b958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b95c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x13b95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13b960: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x13b960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b964: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x13b964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13b968: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x13b968u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b96c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x13b96cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13b970: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x13b970u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b974: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x13b974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13b978: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x13b978u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b97c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x13b97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13b980: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x13b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b984: 0x3e00008  jr          $ra
    ctx->pc = 0x13B984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B984u;
        // 0x13b988: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B98Cu;
}
