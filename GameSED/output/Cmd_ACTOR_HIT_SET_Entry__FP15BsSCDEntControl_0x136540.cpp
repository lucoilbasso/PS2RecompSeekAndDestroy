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

// Function: Cmd_ACTOR_HIT_SET_Entry__FP15BsSCDEntControl
// Address: 0x136540 - 0x136758
void Cmd_ACTOR_HIT_SET_Entry__FP15BsSCDEntControl_0x136540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_HIT_SET_Entry__FP15BsSCDEntControl_0x136540");
#endif

    switch (ctx->pc) {
        case 0x136574u: goto label_136574;
        case 0x1365c0u: goto label_1365c0;
        case 0x1365e8u: goto label_1365e8;
        case 0x1365f4u: goto label_1365f4;
        case 0x136640u: goto label_136640;
        case 0x136654u: goto label_136654;
        case 0x13666cu: goto label_13666c;
        case 0x136674u: goto label_136674;
        case 0x136694u: goto label_136694;
        case 0x1366a8u: goto label_1366a8;
        case 0x136730u: goto label_136730;
        default: break;
    }

    ctx->pc = 0x136540u;

    // 0x136540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136544: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13654c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13654cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136550: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13655c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x136560: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x136564: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x136564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x136568: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136568u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x13656c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13656Cu;
    SET_GPR_U32(ctx, 31, 0x136574u);
    ctx->pc = 0x136570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13656Cu;
    // 0x136570: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13656Cu, 0x136574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136574u;
label_136574:
    // 0x136574: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x136574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13657c: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13657Cu;
    {
        const bool branch_taken_0x13657c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x136580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13657Cu;
        // 0x136580: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13657c) {
            ctx->pc = 0x1365E0u;
            goto label_1365e0;
        }
    }
    ctx->pc = 0x136584u;
    // 0x136584: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x136584u;
    {
        const bool branch_taken_0x136584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136584) {
            ctx->pc = 0x136588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136584u;
            // 0x136588: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1365A0u;
            goto label_1365a0;
        }
    }
    ctx->pc = 0x13658Cu;
    // 0x13658c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x13658Cu;
    {
        const bool branch_taken_0x13658c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13658c) {
            ctx->pc = 0x1365B8u;
            goto label_1365b8;
        }
    }
    ctx->pc = 0x136594u;
    // 0x136594: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x136594u;
    {
        const bool branch_taken_0x136594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136594u;
        // 0x136598: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136594) {
            ctx->pc = 0x136738u;
            goto label_136738;
        }
    }
    ctx->pc = 0x13659Cu;
    // 0x13659c: 0x0  nop
    ctx->pc = 0x13659cu;
    // NOP
label_1365a0:
    // 0x1365a0: 0x12620029  beq         $s3, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1365A0u;
    {
        const bool branch_taken_0x1365a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1365A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365A0u;
        // 0x1365a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365a0) {
            ctx->pc = 0x136648u;
            goto label_136648;
        }
    }
    ctx->pc = 0x1365A8u;
    // 0x1365a8: 0x1262005f  beq         $s3, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1365A8u;
    {
        const bool branch_taken_0x1365a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1365a8) {
            ctx->pc = 0x136728u;
            goto label_136728;
        }
    }
    ctx->pc = 0x1365B0u;
    // 0x1365b0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1365B0u;
    {
        const bool branch_taken_0x1365b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365B0u;
        // 0x1365b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365b0) {
            ctx->pc = 0x136738u;
            goto label_136738;
        }
    }
    ctx->pc = 0x1365B8u;
label_1365b8:
    // 0x1365b8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1365B8u;
    SET_GPR_U32(ctx, 31, 0x1365C0u);
    ctx->pc = 0x1365BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365B8u;
    // 0x1365bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1365B8u, 0x1365C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365C0u;
label_1365c0:
    // 0x1365c0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1365c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1365c4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1365c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1365c8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1365c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1365cc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1365CCu;
    {
        const bool branch_taken_0x1365cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365CCu;
        // 0x1365d0: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365cc) {
            ctx->pc = 0x136624u;
            goto label_136624;
        }
    }
    ctx->pc = 0x1365D4u;
    // 0x1365d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1365D4u;
    {
        const bool branch_taken_0x1365d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365D4u;
        // 0x1365d8: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365d4) {
            ctx->pc = 0x136624u;
            goto label_136624;
        }
    }
    ctx->pc = 0x1365DCu;
    // 0x1365dc: 0x0  nop
    ctx->pc = 0x1365dcu;
    // NOP
label_1365e0:
    // 0x1365e0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1365E0u;
    SET_GPR_U32(ctx, 31, 0x1365E8u);
    ctx->pc = 0x1365E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365E0u;
    // 0x1365e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1365E0u, 0x1365E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365E8u;
label_1365e8:
    // 0x1365e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1365e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365ec: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1365ECu;
    SET_GPR_U32(ctx, 31, 0x1365F4u);
    ctx->pc = 0x1365F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365ECu;
    // 0x1365f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1365ECu, 0x1365F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365F4u;
label_1365f4:
    // 0x1365f4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1365f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1365f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1365f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1365fc: 0xe61400e0  swc1        $f20, 0xE0($s0)
    ctx->pc = 0x1365fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x136600: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x136600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x136604: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x136604u;
    {
        const bool branch_taken_0x136604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136604u;
        // 0x136608: 0xe60100e4  swc1        $f1, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136604) {
            ctx->pc = 0x136624u;
            goto label_136624;
        }
    }
    ctx->pc = 0x13660Cu;
    // 0x13660c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13660cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136610: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x136610u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136614: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136614u;
    {
        const bool branch_taken_0x136614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136614u;
        // 0x136618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136614) {
            ctx->pc = 0x136620u;
            goto label_136620;
        }
    }
    ctx->pc = 0x13661Cu;
    // 0x13661c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13661cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136620:
    // 0x136620: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x136620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_136624:
    // 0x136624: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x136624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x136628: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x136628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13662c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136630: 0x50640041  beql        $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x136630u;
    {
        const bool branch_taken_0x136630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x136630) {
            ctx->pc = 0x136634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136630u;
            // 0x136634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136738u;
            goto label_136738;
        }
    }
    ctx->pc = 0x136638u;
    // 0x136638: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x136638u;
    SET_GPR_U32(ctx, 31, 0x136640u);
    ctx->pc = 0x13663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136638u;
    // 0x13663c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x136638u, 0x136640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136640u;
label_136640:
    // 0x136640: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x136640u;
    {
        const bool branch_taken_0x136640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136640u;
        // 0x136644: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136640) {
            ctx->pc = 0x136734u;
            goto label_136734;
        }
    }
    ctx->pc = 0x136648u;
label_136648:
    // 0x136648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13664c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13664Cu;
    SET_GPR_U32(ctx, 31, 0x136654u);
    ctx->pc = 0x136650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13664Cu;
    // 0x136650: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13664Cu, 0x136654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136654u;
label_136654:
    // 0x136654: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x136654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136658: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x136658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13665c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x13665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x136660: 0x8c710064  lw          $s1, 0x64($v1)
    ctx->pc = 0x136660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x136664: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x136664u;
    SET_GPR_U32(ctx, 31, 0x13666Cu);
    ctx->pc = 0x136668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136664u;
    // 0x136668: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x136664u, 0x13666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13666Cu;
label_13666c:
    // 0x13666c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13666Cu;
    SET_GPR_U32(ctx, 31, 0x136674u);
    ctx->pc = 0x136670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13666Cu;
    // 0x136670: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13666Cu, 0x136674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136674u;
label_136674:
    // 0x136674: 0x96260022  lhu         $a2, 0x22($s1)
    ctx->pc = 0x136674u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x136678: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x136678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x13667c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13667Cu;
    {
        const bool branch_taken_0x13667c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13667c) {
            ctx->pc = 0x136680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13667Cu;
            // 0x136680: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1366ACu;
            goto label_1366ac;
        }
    }
    ctx->pc = 0x136684u;
    // 0x136684: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x136684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x136688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13668c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x13668Cu;
    SET_GPR_U32(ctx, 31, 0x136694u);
    ctx->pc = 0x136690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13668Cu;
    // 0x136690: 0x24846750  addiu       $a0, $a0, 0x6750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x13668Cu, 0x136694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136694u;
label_136694:
    // 0x136694: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x136694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x136698: 0x24a56768  addiu       $a1, $a1, 0x6768
    ctx->pc = 0x136698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26472));
    // 0x13669c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1366A0u;
    SET_GPR_U32(ctx, 31, 0x1366A8u);
    ctx->pc = 0x1366A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366A0u;
    // 0x1366a4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1366A0u, 0x1366A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366A8u;
label_1366a8:
    // 0x1366a8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1366a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1366ac:
    // 0x1366ac: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1366acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1366b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1366b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1366b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1366b8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1366b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1366bc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1366bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1366c0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1366c4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1366c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1366c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1366c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1366cc: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x1366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x1366d0: 0x262200b  movn        $a0, $s3, $v0
    ctx->pc = 0x1366d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x1366d4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1366d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1366d8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1366d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1366dc: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x1366dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x1366e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1366E0u;
    {
        const bool branch_taken_0x1366e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366E0u;
        // 0x1366e4: 0xe60100e4  swc1        $f1, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366e0) {
            ctx->pc = 0x136700u;
            goto label_136700;
        }
    }
    ctx->pc = 0x1366E8u;
    // 0x1366e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1366e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1366ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1366ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1366f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1366F0u;
    {
        const bool branch_taken_0x1366f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1366F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366F0u;
        // 0x1366f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366f0) {
            ctx->pc = 0x1366FCu;
            goto label_1366fc;
        }
    }
    ctx->pc = 0x1366F8u;
    // 0x1366f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1366f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1366fc:
    // 0x1366fc: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1366fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_136700:
    // 0x136700: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x136700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x136704: 0xfe820110  sd          $v0, 0x110($s4)
    ctx->pc = 0x136704u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 272), GPR_U64(ctx, 2));
    // 0x136708: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x136708u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x13670c: 0xfe830118  sd          $v1, 0x118($s4)
    ctx->pc = 0x13670cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 280), GPR_U64(ctx, 3));
    // 0x136710: 0xdca20030  ld          $v0, 0x30($a1)
    ctx->pc = 0x136710u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x136714: 0xfe820120  sd          $v0, 0x120($s4)
    ctx->pc = 0x136714u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 288), GPR_U64(ctx, 2));
    // 0x136718: 0xdca30038  ld          $v1, 0x38($a1)
    ctx->pc = 0x136718u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x13671c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13671Cu;
    {
        const bool branch_taken_0x13671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13671Cu;
        // 0x136720: 0xfe830128  sd          $v1, 0x128($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 296), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13671c) {
            ctx->pc = 0x136734u;
            goto label_136734;
        }
    }
    ctx->pc = 0x136724u;
    // 0x136724: 0x0  nop
    ctx->pc = 0x136724u;
    // NOP
label_136728:
    // 0x136728: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x136728u;
    SET_GPR_U32(ctx, 31, 0x136730u);
    ctx->pc = 0x13672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136728u;
    // 0x13672c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x136728u, 0x136730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136730u;
label_136730:
    // 0x136730: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x136730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_136734:
    // 0x136734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136738:
    // 0x136738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13673c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13673cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136740: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136744: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x136744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136748: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x136748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13674c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x13674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136750: 0x3e00008  jr          $ra
    ctx->pc = 0x136750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136750u;
        // 0x136754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136758u;
}
