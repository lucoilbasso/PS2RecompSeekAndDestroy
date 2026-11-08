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

// Function: entry_00146bf4
// Address: 0x146bf4 - 0x146c40
void entry_00146bf4_0x146bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146bf4_0x146bf4");
#endif

    ctx->pc = 0x146bf4u;

    // 0x146bf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146bfc: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x146bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146c00: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x146C00u;
    {
        const bool branch_taken_0x146c00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146c00) {
            ctx->pc = 0x146C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146C00u;
            // 0x146c04: 0xe7aa008c  swc1        $f10, 0x8C($sp) (Delay Slot)
            { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146C44u;
            return;
        }
    }
    ctx->pc = 0x146C08u;
    // 0x146c08: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x146c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x146c0c: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x146c0cu;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
    // 0x146c10: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x146c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146c14: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x146c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x146c18: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x146c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x146c1c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x146c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x146c20: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x146c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x146c24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x146C24u;
    {
        const bool branch_taken_0x146c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C24u;
        // 0x146c28: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c24) {
            ctx->pc = 0x146C40u;
            return;
        }
    }
    ctx->pc = 0x146C2Cu;
    // 0x146c2c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x146c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x146c30: 0x46004046  mov.s       $f1, $f8
    ctx->pc = 0x146c30u;
    ctx->f[1] = FPU_MOV_S(ctx->f[8]);
    // 0x146c34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x146c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x146c38: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x146c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x146c3c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x146c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->pc = 0x146c40u;
}
