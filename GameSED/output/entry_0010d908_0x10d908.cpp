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

// Function: entry_0010d908
// Address: 0x10d908 - 0x10d960
void entry_0010d908_0x10d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d908_0x10d908");
#endif

    ctx->pc = 0x10d908u;

    // 0x10d908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d90c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d910: 0x46001828  max.s       $f0, $f3, $f0
    ctx->pc = 0x10d910u;
    ctx->f[0] = std::max(ctx->f[3], ctx->f[0]);
    // 0x10d914: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x10d914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x10d918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d91c: 0xe4800174  swc1        $f0, 0x174($a0)
    ctx->pc = 0x10d91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 372), bits); }
    // 0x10d920: 0x0  nop
    ctx->pc = 0x10d920u;
    // NOP
    // 0x10d924: 0x0  nop
    ctx->pc = 0x10d924u;
    // NOP
    // 0x10d928: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10d928u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10d92c: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x10d92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x10d930: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10d930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10d934: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x10d934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10d938: 0xe4940170  swc1        $f20, 0x170($a0)
    ctx->pc = 0x10d938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
    // 0x10d93c: 0x4602a032  c.eq.s      $f20, $f2
    ctx->pc = 0x10d93cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d940: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x10d940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x10d944: 0xe481017c  swc1        $f1, 0x17C($a0)
    ctx->pc = 0x10d944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 380), bits); }
    // 0x10d948: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x10d948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x10d94c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x10D94Cu;
    {
        const bool branch_taken_0x10d94c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D94Cu;
        // 0x10d950: 0xe4800180  swc1        $f0, 0x180($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d94c) {
            ctx->pc = 0x10D960u;
            return;
        }
    }
    ctx->pc = 0x10D954u;
    // 0x10d954: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x10d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x10d958: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10D958u;
    {
        const bool branch_taken_0x10d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D958u;
        // 0x10d95c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d958) {
            ctx->pc = 0x10D974u;
            return;
        }
    }
    ctx->pc = 0x10D960u;
}
