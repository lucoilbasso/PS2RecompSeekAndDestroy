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

// Function: entry_0013b2a0
// Address: 0x13b2a0 - 0x13b300
void entry_0013b2a0_0x13b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b2a0_0x13b2a0");
#endif

    ctx->pc = 0x13b2a0u;

    // 0x13b2a0: 0x5260001e  beql        $s3, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x13B2A0u;
    {
        const bool branch_taken_0x13b2a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b2a0) {
            ctx->pc = 0x13B2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B2A0u;
            // 0x13b2a4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B31Cu;
            return;
        }
    }
    ctx->pc = 0x13B2A8u;
    // 0x13b2a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13b2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13b2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b2b0: 0x4600a028  max.s       $f0, $f20, $f0
    ctx->pc = 0x13b2b0u;
    ctx->f[0] = std::max(ctx->f[20], ctx->f[0]);
    // 0x13b2b4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x13b2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x13b2b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b2bc: 0x4616a832  c.eq.s      $f21, $f22
    ctx->pc = 0x13b2bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b2c0: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x13b2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x13b2c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13b2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13b2c8: 0x0  nop
    ctx->pc = 0x13b2c8u;
    // NOP
    // 0x13b2cc: 0x0  nop
    ctx->pc = 0x13b2ccu;
    // NOP
    // 0x13b2d0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x13b2d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x13b2d4: 0xe6150170  swc1        $f21, 0x170($s0)
    ctx->pc = 0x13b2d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x13b2d8: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x13b2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x13b2dc: 0x4602a842  mul.s       $f1, $f21, $f2
    ctx->pc = 0x13b2dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x13b2e0: 0xe602017c  swc1        $f2, 0x17C($s0)
    ctx->pc = 0x13b2e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x13b2e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13b2e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13b2e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13B2E8u;
    {
        const bool branch_taken_0x13b2e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2E8u;
        // 0x13b2ec: 0xe6010180  swc1        $f1, 0x180($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2e8) {
            ctx->pc = 0x13B300u;
            return;
        }
    }
    ctx->pc = 0x13B2F0u;
    // 0x13b2f0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13b2f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13B2F4u;
    {
        const bool branch_taken_0x13b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2F4u;
        // 0x13b2f8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2f4) {
            ctx->pc = 0x13B314u;
            return;
        }
    }
    ctx->pc = 0x13B2FCu;
    // 0x13b2fc: 0x0  nop
    ctx->pc = 0x13b2fcu;
    // NOP
    ctx->pc = 0x13b300u;
}
