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

// Function: entry_0018318c
// Address: 0x18318c - 0x1831bc
void entry_0018318c_0x18318c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018318c_0x18318c");
#endif

    ctx->pc = 0x18318cu;

    // 0x18318c: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x18318Cu;
    {
        const bool branch_taken_0x18318c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x183190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18318Cu;
        // 0x183190: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18318c) {
            ctx->pc = 0x1831D8u;
            return;
        }
    }
    ctx->pc = 0x183194u;
    // 0x183194: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x183194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183198: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x183198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x18319c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1831a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1831a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1831a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1831A4u;
    {
        const bool branch_taken_0x1831a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1831a4) {
            ctx->pc = 0x1831BCu;
            return;
        }
    }
    ctx->pc = 0x1831ACu;
    // 0x1831ac: 0xc7808594  lwc1        $f0, -0x7A6C($gp)
    ctx->pc = 0x1831acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1831b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1831b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1831b4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1831B4u;
    {
        const bool branch_taken_0x1831b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1831b4) {
            ctx->pc = 0x1831B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1831B4u;
            // 0x1831b8: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1831C8u;
            return;
        }
    }
    ctx->pc = 0x1831BCu;
}
