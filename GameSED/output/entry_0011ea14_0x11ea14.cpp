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

// Function: entry_0011ea14
// Address: 0x11ea14 - 0x11ea60
void entry_0011ea14_0x11ea14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ea14_0x11ea14");
#endif

    switch (ctx->pc) {
        case 0x11ea4cu: goto label_11ea4c;
        default: break;
    }

    ctx->pc = 0x11ea14u;

    // 0x11ea14: 0x0  nop
    ctx->pc = 0x11ea14u;
    // NOP
    // 0x11ea18: 0x0  nop
    ctx->pc = 0x11ea18u;
    // NOP
    // 0x11ea1c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x11ea1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x11ea20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ea20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ea24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11ea24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11ea28: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x11ea28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ea2c: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x11EA2Cu;
    {
        const bool branch_taken_0x11ea2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA2Cu;
        // 0x11ea30: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea2c) {
            ctx->pc = 0x11EB0Cu;
            return;
        }
    }
    ctx->pc = 0x11EA34u;
    // 0x11ea34: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x11ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11ea38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea3c: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x11ea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11ea40: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11ea40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ea44: 0xc047898  jal         func_11E260
    ctx->pc = 0x11EA44u;
    SET_GPR_U32(ctx, 31, 0x11EA4Cu);
    ctx->pc = 0x11EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA44u;
    // 0x11ea48: 0xae050030  sw          $a1, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x11EA44u, 0x11EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA4Cu;
label_11ea4c:
    // 0x11ea4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ea50: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x11ea50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x11ea54: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x11EA54u;
    {
        const bool branch_taken_0x11ea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA54u;
        // 0x11ea58: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea54) {
            ctx->pc = 0x11EB0Cu;
            return;
        }
    }
    ctx->pc = 0x11EA5Cu;
    // 0x11ea5c: 0x0  nop
    ctx->pc = 0x11ea5cu;
    // NOP
    ctx->pc = 0x11ea60u;
}
