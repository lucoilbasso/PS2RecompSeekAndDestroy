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

// Function: entry_00130b9c
// Address: 0x130b9c - 0x130bdc
void entry_00130b9c_0x130b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130b9c_0x130b9c");
#endif

    switch (ctx->pc) {
        case 0x130bc8u: goto label_130bc8;
        default: break;
    }

    ctx->pc = 0x130b9cu;

    // 0x130b9c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x130ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130ba4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x130ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x130ba8: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x130ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x130bac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x130bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x130bb0: 0xe6010104  swc1        $f1, 0x104($s0)
    ctx->pc = 0x130bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x130bb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130BB4u;
    {
        const bool branch_taken_0x130bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BB4u;
        // 0x130bb8: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bb4) {
            ctx->pc = 0x130BDCu;
            return;
        }
    }
    ctx->pc = 0x130BBCu;
    // 0x130bbc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x130bc0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x130BC0u;
    SET_GPR_U32(ctx, 31, 0x130BC8u);
    ctx->pc = 0x130BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BC0u;
    // 0x130bc4: 0x248461b8  addiu       $a0, $a0, 0x61B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x130BC0u, 0x130BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BC8u;
label_130bc8:
    // 0x130bc8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x130bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x130bcc: 0x24a561d8  addiu       $a1, $a1, 0x61D8
    ctx->pc = 0x130bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25048));
    // 0x130bd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bd4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x130BD4u;
    SET_GPR_U32(ctx, 31, 0x130BDCu);
    ctx->pc = 0x130BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BD4u;
    // 0x130bd8: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x130BD4u, 0x130BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BDCu;
}
