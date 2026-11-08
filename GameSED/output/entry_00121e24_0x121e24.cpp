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

// Function: entry_00121e24
// Address: 0x121e24 - 0x121ea0
void entry_00121e24_0x121e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121e24_0x121e24");
#endif

    ctx->pc = 0x121e24u;

    // 0x121e24: 0xc60500fc  lwc1        $f5, 0xFC($s0)
    ctx->pc = 0x121e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x121e28: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x121e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121e2c: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x121E2Cu;
    {
        const bool branch_taken_0x121e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121e2c) {
            ctx->pc = 0x121E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121E2Cu;
            // 0x121e30: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121EA0u;
            return;
        }
    }
    ctx->pc = 0x121E34u;
    // 0x121e34: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x121e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x121e38: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x121e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x121e3c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x121e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x121e40: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x121e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x121e44: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x121e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121e48: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x121e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x121e4c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x121e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x121e50: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x121e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121e54: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x121e54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121e58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121e5c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x121e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x121e60: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x121e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x121e64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x121e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x121e68: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x121e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x121e6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121e70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121e78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121e7c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x121e7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x121e80: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x121e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x121e84: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x121e84u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x121e88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121e88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121e8c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x121e8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x121e90: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x121e90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x121e94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x121E94u;
    {
        const bool branch_taken_0x121e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E94u;
        // 0x121e98: 0xe6030114  swc1        $f3, 0x114($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e94) {
            ctx->pc = 0x121EC4u;
            return;
        }
    }
    ctx->pc = 0x121E9Cu;
    // 0x121e9c: 0x0  nop
    ctx->pc = 0x121e9cu;
    // NOP
    ctx->pc = 0x121ea0u;
}
