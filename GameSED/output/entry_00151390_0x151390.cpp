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

// Function: entry_00151390
// Address: 0x151390 - 0x1513bc
void entry_00151390_0x151390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151390_0x151390");
#endif

    ctx->pc = 0x151390u;

    // 0x151390: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x151390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x151394: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151398: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x151398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x15139c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x15139cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1513a0: 0xc420986c  lwc1        $f0, -0x6794($at)
    ctx->pc = 0x1513a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1513a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1513a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1513a8: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x1513a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1513ac: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1513acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1513b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1513B0u;
    {
        const bool branch_taken_0x1513b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1513B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513B0u;
        // 0x1513b4: 0xe6010410  swc1        $f1, 0x410($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513b0) {
            ctx->pc = 0x1513C8u;
            return;
        }
    }
    ctx->pc = 0x1513B8u;
    // 0x1513b8: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x1513b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    ctx->pc = 0x1513bcu;
}
