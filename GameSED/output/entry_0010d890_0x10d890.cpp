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

// Function: entry_0010d890
// Address: 0x10d890 - 0x10d8d8
void entry_0010d890_0x10d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d890_0x10d890");
#endif

    ctx->pc = 0x10d890u;

    // 0x10d890: 0x46061828  max.s       $f0, $f3, $f6
    ctx->pc = 0x10d890u;
    ctx->f[0] = std::max(ctx->f[3], ctx->f[6]);
    // 0x10d894: 0x0  nop
    ctx->pc = 0x10d894u;
    // NOP
    // 0x10d898: 0x0  nop
    ctx->pc = 0x10d898u;
    // NOP
    // 0x10d89c: 0x46003883  div.s       $f2, $f7, $f0
    ctx->pc = 0x10d89cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[7], ctx->f[0]); }
    // 0x10d8a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10d8a4: 0x4604a032  c.eq.s      $f20, $f4
    ctx->pc = 0x10d8a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d8a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x10d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x10d8ac: 0xe4740170  swc1        $f20, 0x170($v1)
    ctx->pc = 0x10d8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
    // 0x10d8b0: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x10d8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
    // 0x10d8b4: 0x4602a042  mul.s       $f1, $f20, $f2
    ctx->pc = 0x10d8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x10d8b8: 0xe462017c  swc1        $f2, 0x17C($v1)
    ctx->pc = 0x10d8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
    // 0x10d8bc: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x10d8bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x10d8c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x10D8C0u;
    {
        const bool branch_taken_0x10d8c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8C0u;
        // 0x10d8c4: 0xe4610180  swc1        $f1, 0x180($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8c0) {
            ctx->pc = 0x10D8D8u;
            return;
        }
    }
    ctx->pc = 0x10D8C8u;
    // 0x10d8c8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x10d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x10d8cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10D8CCu;
    {
        const bool branch_taken_0x10d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8CCu;
        // 0x10d8d0: 0x481025  or          $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8cc) {
            ctx->pc = 0x10D8E8u;
            return;
        }
    }
    ctx->pc = 0x10D8D4u;
    // 0x10d8d4: 0x0  nop
    ctx->pc = 0x10d8d4u;
    // NOP
    ctx->pc = 0x10d8d8u;
}
