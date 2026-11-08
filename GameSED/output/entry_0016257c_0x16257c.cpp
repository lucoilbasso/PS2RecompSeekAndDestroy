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

// Function: entry_0016257c
// Address: 0x16257c - 0x1625c0
void entry_0016257c_0x16257c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016257c_0x16257c");
#endif

    ctx->pc = 0x16257cu;

    // 0x16257c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16257cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162580: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x162580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162584: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x162584u;
    {
        const bool branch_taken_0x162584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162584) {
            ctx->pc = 0x162588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162584u;
            // 0x162588: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1625C0u;
            return;
        }
    }
    ctx->pc = 0x16258Cu;
    // 0x16258c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x16258cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162590: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x162590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162594: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x162594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162598: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x162598u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x16259c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x16259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1625a0: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x1625a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x1625a4: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x1625a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x1625a8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1625a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1625ac: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1625acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1625b0: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x1625b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1625b4: 0xe6230024  swc1        $f3, 0x24($s1)
    ctx->pc = 0x1625b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1625b8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1625b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1625bc: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1625bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x1625c0u;
}
