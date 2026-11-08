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

// Function: entry_00131b90
// Address: 0x131b90 - 0x131bd0
void entry_00131b90_0x131b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131b90_0x131b90");
#endif

    switch (ctx->pc) {
        case 0x131ba4u: goto label_131ba4;
        default: break;
    }

    ctx->pc = 0x131b90u;

    // 0x131b90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b94: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x131b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x131b98: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x131b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x131b9c: 0xc047898  jal         func_11E260
    ctx->pc = 0x131B9Cu;
    SET_GPR_U32(ctx, 31, 0x131BA4u);
    ctx->pc = 0x131BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B9Cu;
    // 0x131ba0: 0xae0500e4  sw          $a1, 0xE4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x131B9Cu, 0x131BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BA4u;
label_131ba4:
    // 0x131ba4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x131ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x131ba8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x131ba8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131bac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x131BACu;
    {
        const bool branch_taken_0x131bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BACu;
        // 0x131bb0: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bac) {
            ctx->pc = 0x131BD0u;
            return;
        }
    }
    ctx->pc = 0x131BB4u;
    // 0x131bb4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x131bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x131bb8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x131BB8u;
    {
        const bool branch_taken_0x131bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bb8) {
            ctx->pc = 0x131BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131BB8u;
            // 0x131bbc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131BD4u;
            return;
        }
    }
    ctx->pc = 0x131BC0u;
    // 0x131bc0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x131bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x131bc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131BC4u;
    {
        const bool branch_taken_0x131bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BC4u;
        // 0x131bc8: 0xe61400ec  swc1        $f20, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bc4) {
            ctx->pc = 0x131BD8u;
            return;
        }
    }
    ctx->pc = 0x131BCCu;
    // 0x131bcc: 0x0  nop
    ctx->pc = 0x131bccu;
    // NOP
    ctx->pc = 0x131bd0u;
}
