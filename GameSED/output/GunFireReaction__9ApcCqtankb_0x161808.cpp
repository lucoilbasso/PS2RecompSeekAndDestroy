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

// Function: GunFireReaction__9ApcCqtankb
// Address: 0x161808 - 0x1618b8
void GunFireReaction__9ApcCqtankb_0x161808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GunFireReaction__9ApcCqtankb_0x161808");
#endif

    switch (ctx->pc) {
        case 0x16187cu: goto label_16187c;
        case 0x161888u: goto label_161888;
        case 0x1618a4u: goto label_1618a4;
        default: break;
    }

    ctx->pc = 0x161808u;

    // 0x161808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16180c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x161810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x161814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161818: 0x8c820c14  lw          $v0, 0xC14($a0)
    ctx->pc = 0x161818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3092)));
    // 0x16181c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16181Cu;
    {
        const bool branch_taken_0x16181c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16181Cu;
        // 0x161820: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16181c) {
            ctx->pc = 0x161830u;
            goto label_161830;
        }
    }
    ctx->pc = 0x161824u;
    // 0x161824: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x161824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x161828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161828u;
    {
        const bool branch_taken_0x161828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161828u;
        // 0x16182c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161828) {
            ctx->pc = 0x161834u;
            goto label_161834;
        }
    }
    ctx->pc = 0x161830u;
label_161830:
    // 0x161830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161834:
    // 0x161834: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x161834u;
    {
        const bool branch_taken_0x161834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161834u;
        // 0x161838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161834) {
            ctx->pc = 0x1618A8u;
            goto label_1618a8;
        }
    }
    ctx->pc = 0x16183Cu;
    // 0x16183c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x16183Cu;
    {
        const bool branch_taken_0x16183c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x161840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16183Cu;
        // 0x161840: 0x24911a60  addiu       $s1, $a0, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16183c) {
            ctx->pc = 0x1618A8u;
            goto label_1618a8;
        }
    }
    ctx->pc = 0x161844u;
    // 0x161844: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x161844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161848: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x161848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16184c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16184cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161850: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x161850u;
    {
        const bool branch_taken_0x161850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161850u;
        // 0x161854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161850) {
            ctx->pc = 0x16185Cu;
            goto label_16185c;
        }
    }
    ctx->pc = 0x161858u;
    // 0x161858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16185c:
    // 0x16185c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16185Cu;
    {
        const bool branch_taken_0x16185c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16185Cu;
        // 0x161860: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16185c) {
            ctx->pc = 0x1618A8u;
            goto label_1618a8;
        }
    }
    ctx->pc = 0x161864u;
    // 0x161864: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x161864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x161868: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x161868u;
    {
        const bool branch_taken_0x161868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161868u;
        // 0x16186c: 0x24901a68  addiu       $s0, $a0, 0x1A68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161868) {
            ctx->pc = 0x1618A4u;
            goto label_1618a4;
        }
    }
    ctx->pc = 0x161870u;
    // 0x161870: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x161870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161874: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x161874u;
    SET_GPR_U32(ctx, 31, 0x16187Cu);
    ctx->pc = 0x161878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161874u;
    // 0x161878: 0xe48100d8  swc1        $f1, 0xD8($a0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x161874u, 0x16187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16187Cu;
label_16187c:
    // 0x16187c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16187cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161880: 0xc06164c  jal         func_185930
    ctx->pc = 0x161880u;
    SET_GPR_U32(ctx, 31, 0x161888u);
    ctx->pc = 0x161884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161880u;
    // 0x161884: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x161880u, 0x161888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161888u;
label_161888:
    // 0x161888: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x161888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16188c: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x16188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161890: 0x3c013e40  lui         $at, 0x3E40
    ctx->pc = 0x161890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15936 << 16));
    // 0x161894: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x161894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161898: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x161898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16189c: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x16189Cu;
    SET_GPR_U32(ctx, 31, 0x1618A4u);
    ctx->pc = 0x1618A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16189Cu;
    // 0x1618a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x16189Cu, 0x1618A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1618A4u;
label_1618a4:
    // 0x1618a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1618a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1618a8:
    // 0x1618a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1618a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1618ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1618acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1618b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1618B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1618B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618B0u;
        // 0x1618b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1618B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1618B8u;
}
