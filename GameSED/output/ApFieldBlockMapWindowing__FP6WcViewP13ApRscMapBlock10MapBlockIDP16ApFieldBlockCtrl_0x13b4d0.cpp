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

// Function: ApFieldBlockMapWindowing__FP6WcViewP13ApRscMapBlock10MapBlockIDP16ApFieldBlockCtrl
// Address: 0x13b4d0 - 0x13b69c
void ApFieldBlockMapWindowing__FP6WcViewP13ApRscMapBlock10MapBlockIDP16ApFieldBlockCtrl_0x13b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldBlockMapWindowing__FP6WcViewP13ApRscMapBlock10MapBlockIDP16ApFieldBlockCtrl_0x13b4d0");
#endif

    switch (ctx->pc) {
        case 0x13b530u: goto label_13b530;
        case 0x13b558u: goto label_13b558;
        case 0x13b5bcu: goto label_13b5bc;
        default: break;
    }

    ctx->pc = 0x13b4d0u;

    // 0x13b4d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13b4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13b4d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b4d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13b4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b4dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13b4dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13b4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13b4e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13b4e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13b4ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13b4ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x13b4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13b4f4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x13b4f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4f8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x13b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x13b4fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13b4fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b500: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x13b500u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x13b504: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13b504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b50c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b510: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x13b510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x13b514: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x13b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x13b518: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x13b518u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13b51c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x13b51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13b520: 0xc6a10170  lwc1        $f1, 0x170($s5)
    ctx->pc = 0x13b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b524: 0xc6a00174  lwc1        $f0, 0x174($s5)
    ctx->pc = 0x13b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b528: 0xc0516f0  jal         func_145BC0
    ctx->pc = 0x13B528u;
    SET_GPR_U32(ctx, 31, 0x13B530u);
    ctx->pc = 0x13B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B528u;
    // 0x13b52c: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BC0u, 0x13B528u, 0x13B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B530u;
label_13b530:
    // 0x13b530: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13b534: 0x1840004a  blez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x13B534u;
    {
        const bool branch_taken_0x13b534 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B534u;
        // 0x13b538: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b534) {
            ctx->pc = 0x13B660u;
            goto label_13b660;
        }
    }
    ctx->pc = 0x13B53Cu;
    // 0x13b53c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x13b53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x13b540: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x13b540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13b544: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x13b544u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b548: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x13b548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x13b54c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13b54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13b550: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x13b550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b554: 0x0  nop
    ctx->pc = 0x13b554u;
    // NOP
label_13b558:
    // 0x13b558: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x13B558u;
    {
        const bool branch_taken_0x13b558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B558u;
        // 0x13b55c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b558) {
            ctx->pc = 0x13B64Cu;
            goto label_13b64c;
        }
    }
    ctx->pc = 0x13B560u;
    // 0x13b560: 0x262201b0  addiu       $v0, $s1, 0x1B0
    ctx->pc = 0x13b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x13b564: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x13b564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13b568: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13b56c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13b570: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13b574: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13b574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b578: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x13b578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13b57c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b584: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13b588: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13b588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b58c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b590: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13b590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13b594: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x13b594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x13b598: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b59c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b5a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B5A0u;
    {
        const bool branch_taken_0x13b5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b5a0) {
            ctx->pc = 0x13B5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B5A0u;
            // 0x13b5a4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B5C0u;
            goto label_13b5c0;
        }
    }
    ctx->pc = 0x13B5A8u;
    // 0x13b5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5ac: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x13b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x13b5b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13b5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5b4: 0xc0516fe  jal         func_145BF8
    ctx->pc = 0x13B5B4u;
    SET_GPR_U32(ctx, 31, 0x13B5BCu);
    ctx->pc = 0x13B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5B4u;
    // 0x13b5b8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BF8u, 0x13B5B4u, 0x13B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5BCu;
label_13b5bc:
    // 0x13b5bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b5c0:
    // 0x13b5c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x13b5c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x13b5c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b5c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13B5C8u;
    {
        const bool branch_taken_0x13b5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5C8u;
        // 0x13b5cc: 0xae200248  sw          $zero, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5c8) {
            ctx->pc = 0x13B64Cu;
            goto label_13b64c;
        }
    }
    ctx->pc = 0x13B5D0u;
    // 0x13b5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b5d4: 0x167e0011  bne         $s3, $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x13B5D4u;
    {
        const bool branch_taken_0x13b5d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        ctx->pc = 0x13B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5D4u;
        // 0x13b5d8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5d4) {
            ctx->pc = 0x13B61Cu;
            goto label_13b61c;
        }
    }
    ctx->pc = 0x13B5DCu;
    // 0x13b5dc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x13b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b5e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13b5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13b5e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b5e8: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x13b5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x13b5ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b5f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b5f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B5F4u;
    {
        const bool branch_taken_0x13b5f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b5f4) {
            ctx->pc = 0x13B604u;
            goto label_13b604;
        }
    }
    ctx->pc = 0x13B5FCu;
    // 0x13b5fc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x13b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b600: 0x461500a9  min.s       $f2, $f0, $f21
    ctx->pc = 0x13b600u;
    ctx->f[2] = std::min(ctx->f[0], ctx->f[21]);
label_13b604:
    // 0x13b604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b608: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13b608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b60c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13B60Cu;
    {
        const bool branch_taken_0x13b60c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b60c) {
            ctx->pc = 0x13B610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B60Cu;
            // 0x13b610: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B614u;
            goto label_13b614;
        }
    }
    ctx->pc = 0x13B614u;
label_13b614:
    // 0x13b614: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b618: 0xe620024c  swc1        $f0, 0x24C($s1)
    ctx->pc = 0x13b618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
label_13b61c:
    // 0x13b61c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13b620: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13B620u;
    {
        const bool branch_taken_0x13b620 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x13b620) {
            ctx->pc = 0x13B624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B620u;
            // 0x13b624: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B650u;
            goto label_13b650;
        }
    }
    ctx->pc = 0x13B628u;
    // 0x13b628: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x13b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b62c: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x13b62cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x13b630: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13b630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b634: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B634u;
    {
        const bool branch_taken_0x13b634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b634) {
            ctx->pc = 0x13B644u;
            goto label_13b644;
        }
    }
    ctx->pc = 0x13B63Cu;
    // 0x13b63c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x13b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x13b640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13b644:
    // 0x13b644: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13b648: 0xe621024c  swc1        $f1, 0x24C($s1)
    ctx->pc = 0x13b648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
label_13b64c:
    // 0x13b64c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_13b650:
    // 0x13b650: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x13b650u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x13b654: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x13b654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13b658: 0x5440ffbf  bnel        $v0, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x13B658u;
    {
        const bool branch_taken_0x13b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b658) {
            ctx->pc = 0x13B65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B658u;
            // 0x13b65c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b558;
        }
    }
    ctx->pc = 0x13B660u;
label_13b660:
    // 0x13b660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b668: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b66c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b66cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b670: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13b670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b674: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13b674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13b678: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13b678u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b67c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x13b67cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13b680: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x13b680u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b684: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x13b684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13b688: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x13b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13b68c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x13b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b690: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x13b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b694: 0x3e00008  jr          $ra
    ctx->pc = 0x13B694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B694u;
        // 0x13b698: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B69Cu;
}
