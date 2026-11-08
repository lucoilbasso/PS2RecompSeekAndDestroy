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

// Function: entry_0010d7f8
// Address: 0x10d7f8 - 0x10d890
void entry_0010d7f8_0x10d7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d7f8_0x10d7f8");
#endif

    switch (ctx->pc) {
        case 0x10d80cu: goto label_10d80c;
        case 0x10d818u: goto label_10d818;
        case 0x10d824u: goto label_10d824;
        default: break;
    }

    ctx->pc = 0x10d7f8u;

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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x10d890u;
}
