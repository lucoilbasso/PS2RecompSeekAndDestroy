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

// Function: entry_0016584c
// Address: 0x16584c - 0x1658a0
void entry_0016584c_0x16584c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016584c_0x16584c");
#endif

    switch (ctx->pc) {
        case 0x165878u: goto label_165878;
        case 0x165884u: goto label_165884;
        default: break;
    }

    ctx->pc = 0x16584cu;

    // 0x16584c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16584Cu;
    {
        const bool branch_taken_0x16584c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16584Cu;
        // 0x165850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16584c) {
            ctx->pc = 0x1658A4u;
            return;
        }
    }
    ctx->pc = 0x165854u;
    // 0x165854: 0xc6211188  lwc1        $f1, 0x1188($s1)
    ctx->pc = 0x165854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165858: 0xc6201198  lwc1        $f0, 0x1198($s1)
    ctx->pc = 0x165858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16585c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16585cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165860: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x165860u;
    {
        const bool branch_taken_0x165860 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x165864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165860u;
        // 0x165864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165860) {
            ctx->pc = 0x1658A4u;
            return;
        }
    }
    ctx->pc = 0x165868u;
    // 0x165868: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x165868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16586c: 0x26251190  addiu       $a1, $s1, 0x1190
    ctx->pc = 0x16586cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4496));
    // 0x165870: 0xc0618c2  jal         func_186308
    ctx->pc = 0x165870u;
    SET_GPR_U32(ctx, 31, 0x165878u);
    ctx->pc = 0x165874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165870u;
    // 0x165874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x165870u, 0x165878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165878u;
label_165878:
    // 0x165878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16587c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16587Cu;
    SET_GPR_U32(ctx, 31, 0x165884u);
    ctx->pc = 0x165880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16587Cu;
    // 0x165880: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16587Cu, 0x165884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165884u;
label_165884:
    // 0x165884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165888: 0xc62c1188  lwc1        $f12, 0x1188($s1)
    ctx->pc = 0x165888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16588c: 0x3c013e40  lui         $at, 0x3E40
    ctx->pc = 0x16588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15936 << 16));
    // 0x165890: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x165890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x165894: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x165894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x165898: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x165898u;
    SET_GPR_U32(ctx, 31, 0x1658A0u);
    ctx->pc = 0x16589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165898u;
    // 0x16589c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x165898u, 0x1658A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658A0u;
}
