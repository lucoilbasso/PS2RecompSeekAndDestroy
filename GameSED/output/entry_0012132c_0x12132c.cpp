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

// Function: entry_0012132c
// Address: 0x12132c - 0x121390
void entry_0012132c_0x12132c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012132c_0x12132c");
#endif

    switch (ctx->pc) {
        case 0x121364u: goto label_121364;
        default: break;
    }

    ctx->pc = 0x12132cu;

    // 0x12132c: 0x0  nop
    ctx->pc = 0x12132cu;
    // NOP
    // 0x121330: 0x0  nop
    ctx->pc = 0x121330u;
    // NOP
    // 0x121334: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x121334u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x121338: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x121338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12133c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12133cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121340: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x121340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121344: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x121344u;
    {
        const bool branch_taken_0x121344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121344u;
        // 0x121348: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121344) {
            ctx->pc = 0x121398u;
            return;
        }
    }
    ctx->pc = 0x12134Cu;
    // 0x12134c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x12134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x121350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121354: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x121354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x121358: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12135c: 0xc047898  jal         func_11E260
    ctx->pc = 0x12135Cu;
    SET_GPR_U32(ctx, 31, 0x121364u);
    ctx->pc = 0x121360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12135Cu;
    // 0x121360: 0xae050030  sw          $a1, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x12135Cu, 0x121364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121364u;
label_121364:
    // 0x121364: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x121364u;
    {
        const bool branch_taken_0x121364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121364u;
        // 0x121368: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121364) {
            ctx->pc = 0x121390u;
            return;
        }
    }
    ctx->pc = 0x12136Cu;
    // 0x12136c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x12136cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121370: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x121370u;
    {
        const bool branch_taken_0x121370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121370u;
        // 0x121374: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121370) {
            ctx->pc = 0x121394u;
            return;
        }
    }
    ctx->pc = 0x121378u;
    // 0x121378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12137c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12137cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121380: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x121380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x121384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121384u;
    {
        const bool branch_taken_0x121384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121384u;
        // 0x121388: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121384) {
            ctx->pc = 0x121398u;
            return;
        }
    }
    ctx->pc = 0x12138Cu;
    // 0x12138c: 0x0  nop
    ctx->pc = 0x12138cu;
    // NOP
    ctx->pc = 0x121390u;
}
