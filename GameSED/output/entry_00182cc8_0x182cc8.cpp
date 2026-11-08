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

// Function: entry_00182cc8
// Address: 0x182cc8 - 0x182d34
void entry_00182cc8_0x182cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182cc8_0x182cc8");
#endif

    ctx->pc = 0x182cc8u;

    // 0x182cc8: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x182CC8u;
    {
        const bool branch_taken_0x182cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CC8u;
        // 0x182ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cc8) {
            ctx->pc = 0x182D60u;
            return;
        }
    }
    ctx->pc = 0x182CD0u;
    // 0x182cd0: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x182cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x182cd4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x182cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182cd8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x182cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182cdc: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x182cdcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x182ce0: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x182ce0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x182ce4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x182ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ce8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x182CE8u;
    {
        const bool branch_taken_0x182ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ce8) {
            ctx->pc = 0x182D34u;
            return;
        }
    }
    ctx->pc = 0x182CF0u;
    // 0x182cf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x182cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x182cf4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x182cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x182cf8: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x182cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x182cfc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x182cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d00: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x182D00u;
    {
        const bool branch_taken_0x182d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d00) {
            ctx->pc = 0x182D34u;
            return;
        }
    }
    ctx->pc = 0x182D08u;
    // 0x182d08: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x182d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182d0c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x182d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182d10: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x182d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x182d14: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x182d14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x182d18: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x182d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x182D1Cu;
    {
        const bool branch_taken_0x182d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d1c) {
            ctx->pc = 0x182D34u;
            return;
        }
    }
    ctx->pc = 0x182D24u;
    // 0x182d24: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x182d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x182d28: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x182d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d2c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x182D2Cu;
    {
        const bool branch_taken_0x182d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d2c) {
            ctx->pc = 0x182D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182D2Cu;
            // 0x182d30: 0x46021840  add.s       $f1, $f3, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182D40u;
            return;
        }
    }
    ctx->pc = 0x182D34u;
}
