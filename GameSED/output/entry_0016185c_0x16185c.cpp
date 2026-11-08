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

// Function: entry_0016185c
// Address: 0x16185c - 0x1618a4
void entry_0016185c_0x16185c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016185c_0x16185c");
#endif

    switch (ctx->pc) {
        case 0x16187cu: goto label_16187c;
        case 0x161888u: goto label_161888;
        default: break;
    }

    ctx->pc = 0x16185cu;

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
            return;
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
            return;
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
}
