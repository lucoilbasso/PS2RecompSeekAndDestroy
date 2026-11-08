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

// Function: Cmd_FOG_LENGTH_Entry__FP15BsSCDEntControl
// Address: 0x10d7e0 - 0x10d990
void Cmd_FOG_LENGTH_Entry__FP15BsSCDEntControl_0x10d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FOG_LENGTH_Entry__FP15BsSCDEntControl_0x10d7e0");
#endif

    switch (ctx->pc) {
        case 0x10d80cu: goto label_10d80c;
        case 0x10d818u: goto label_10d818;
        case 0x10d824u: goto label_10d824;
        case 0x10d890u: goto label_10d890;
        default: break;
    }

    ctx->pc = 0x10d7e0u;

    // 0x10d7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d7e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d7e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d7f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7f8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x10d7f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10d7fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d800: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10d804: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D804u;
    SET_GPR_U32(ctx, 31, 0x10D80Cu);
    ctx->pc = 0x10D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D804u;
    // 0x10d808: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D804u, 0x10D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D80Cu;
label_10d80c:
    // 0x10d80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d810: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10D810u;
    SET_GPR_U32(ctx, 31, 0x10D818u);
    ctx->pc = 0x10D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D810u;
    // 0x10d814: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10D810u, 0x10D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D818u;
label_10d818:
    // 0x10d818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d81c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10D81Cu;
    SET_GPR_U32(ctx, 31, 0x10D824u);
    ctx->pc = 0x10D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D81Cu;
    // 0x10d820: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10D81Cu, 0x10D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D824u;
label_10d824:
    // 0x10d824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d82c: 0x460100e8  max.s       $f3, $f0, $f1
    ctx->pc = 0x10d82cu;
    ctx->f[3] = std::max(ctx->f[0], ctx->f[1]);
    // 0x10d830: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10d830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10d834: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10d838: 0xe63401d4  swc1        $f20, 0x1D4($s1)
    ctx->pc = 0x10d838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 468), bits); }
    // 0x10d83c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d840: 0x1464004d  bne         $v1, $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x10D840u;
    {
        const bool branch_taken_0x10d840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D840u;
        // 0x10d844: 0xe62301d8  swc1        $f3, 0x1D8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 472), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d840) {
            ctx->pc = 0x10D978u;
            goto label_10d978;
        }
    }
    ctx->pc = 0x10D848u;
    // 0x10d848: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x10d848u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10d84c: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x10d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x10d850: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x10D850u;
    {
        const bool branch_taken_0x10d850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d850) {
            ctx->pc = 0x10D854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D850u;
            // 0x10d854: 0x8e240164  lw          $a0, 0x164($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D908u;
            goto label_10d908;
        }
    }
    ctx->pc = 0x10D858u;
    // 0x10d858: 0x8e2201e8  lw          $v0, 0x1E8($s1)
    ctx->pc = 0x10d858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x10d85c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10d85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d860: 0x18400045  blez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x10D860u;
    {
        const bool branch_taken_0x10d860 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D860u;
        // 0x10d864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d860) {
            ctx->pc = 0x10D978u;
            goto label_10d978;
        }
    }
    ctx->pc = 0x10D868u;
    // 0x10d868: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x10d868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x10d86c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x10d86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10d870: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x10d870u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
    // 0x10d874: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x10d874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x10d878: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x10d878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10d87c: 0x262401ec  addiu       $a0, $s1, 0x1EC
    ctx->pc = 0x10d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
    // 0x10d880: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x10d880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10d884: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x10d884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d888: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x10d888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x10d88c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10d890:
    // 0x10d890: 0x46061828  max.s       $f0, $f3, $f6
    ctx->pc = 0x10d890u;
    ctx->f[0] = std::max(ctx->f[3], ctx->f[6]);
    // 0x10d894: 0x0  nop
    ctx->pc = 0x10d894u;
    // NOP
    // 0x10d898: 0x0  nop
    ctx->pc = 0x10d898u;
    // NOP
    // 0x10d89c: 0x46003883  div.s       $f2, $f7, $f0
    ctx->pc = 0x10d89cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[7], ctx->f[0]); }
    // 0x10d8a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10d8a4: 0x4604a032  c.eq.s      $f20, $f4
    ctx->pc = 0x10d8a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d8a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x10d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x10d8ac: 0xe4740170  swc1        $f20, 0x170($v1)
    ctx->pc = 0x10d8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
    // 0x10d8b0: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x10d8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
    // 0x10d8b4: 0x4602a042  mul.s       $f1, $f20, $f2
    ctx->pc = 0x10d8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x10d8b8: 0xe462017c  swc1        $f2, 0x17C($v1)
    ctx->pc = 0x10d8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
    // 0x10d8bc: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x10d8bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x10d8c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x10D8C0u;
    {
        const bool branch_taken_0x10d8c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8C0u;
        // 0x10d8c4: 0xe4610180  swc1        $f1, 0x180($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8c0) {
            ctx->pc = 0x10D8D8u;
            goto label_10d8d8;
        }
    }
    ctx->pc = 0x10D8C8u;
    // 0x10d8c8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x10d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x10d8cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10D8CCu;
    {
        const bool branch_taken_0x10d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8CCu;
        // 0x10d8d0: 0x481025  or          $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8cc) {
            ctx->pc = 0x10D8E8u;
            goto label_10d8e8;
        }
    }
    ctx->pc = 0x10D8D4u;
    // 0x10d8d4: 0x0  nop
    ctx->pc = 0x10d8d4u;
    // NOP
label_10d8d8:
    // 0x10d8d8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x10d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x10d8dc: 0xe464017c  swc1        $f4, 0x17C($v1)
    ctx->pc = 0x10d8dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
    // 0x10d8e0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x10d8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x10d8e4: 0xe4650180  swc1        $f5, 0x180($v1)
    ctx->pc = 0x10d8e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_10d8e8:
    // 0x10d8e8: 0xac620150  sw          $v0, 0x150($v1)
    ctx->pc = 0x10d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
    // 0x10d8ec: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x10d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
    // 0x10d8f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10d8f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d8f4: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10D8F4u;
    {
        const bool branch_taken_0x10d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d8f4) {
            ctx->pc = 0x10D8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D8F4u;
            // 0x10d8f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d890;
        }
    }
    ctx->pc = 0x10D8FCu;
    // 0x10d8fc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10D8FCu;
    {
        const bool branch_taken_0x10d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8FCu;
        // 0x10d900: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8fc) {
            ctx->pc = 0x10D97Cu;
            goto label_10d97c;
        }
    }
    ctx->pc = 0x10D904u;
    // 0x10d904: 0x0  nop
    ctx->pc = 0x10d904u;
    // NOP
label_10d908:
    // 0x10d908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d90c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d910: 0x46001828  max.s       $f0, $f3, $f0
    ctx->pc = 0x10d910u;
    ctx->f[0] = std::max(ctx->f[3], ctx->f[0]);
    // 0x10d914: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x10d914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x10d918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d91c: 0xe4800174  swc1        $f0, 0x174($a0)
    ctx->pc = 0x10d91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 372), bits); }
    // 0x10d920: 0x0  nop
    ctx->pc = 0x10d920u;
    // NOP
    // 0x10d924: 0x0  nop
    ctx->pc = 0x10d924u;
    // NOP
    // 0x10d928: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10d928u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10d92c: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x10d92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x10d930: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10d930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10d934: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x10d934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10d938: 0xe4940170  swc1        $f20, 0x170($a0)
    ctx->pc = 0x10d938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
    // 0x10d93c: 0x4602a032  c.eq.s      $f20, $f2
    ctx->pc = 0x10d93cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d940: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x10d940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x10d944: 0xe481017c  swc1        $f1, 0x17C($a0)
    ctx->pc = 0x10d944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 380), bits); }
    // 0x10d948: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x10d948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x10d94c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x10D94Cu;
    {
        const bool branch_taken_0x10d94c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D94Cu;
        // 0x10d950: 0xe4800180  swc1        $f0, 0x180($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d94c) {
            ctx->pc = 0x10D960u;
            goto label_10d960;
        }
    }
    ctx->pc = 0x10D954u;
    // 0x10d954: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x10d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x10d958: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10D958u;
    {
        const bool branch_taken_0x10d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D958u;
        // 0x10d95c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d958) {
            ctx->pc = 0x10D974u;
            goto label_10d974;
        }
    }
    ctx->pc = 0x10D960u;
label_10d960:
    // 0x10d960: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x10d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x10d964: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x10d964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x10d968: 0xe482017c  swc1        $f2, 0x17C($a0)
    ctx->pc = 0x10d968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 380), bits); }
    // 0x10d96c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10d970: 0xe4830180  swc1        $f3, 0x180($a0)
    ctx->pc = 0x10d970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
label_10d974:
    // 0x10d974: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x10d974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
label_10d978:
    // 0x10d978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10d97c:
    // 0x10d97c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d984: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x10d984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d988: 0x3e00008  jr          $ra
    ctx->pc = 0x10D988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D988u;
        // 0x10d98c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D990u;
}
