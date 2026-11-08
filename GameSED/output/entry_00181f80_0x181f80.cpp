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

// Function: entry_00181f80
// Address: 0x181f80 - 0x181fa0
void entry_00181f80_0x181f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f80_0x181f80");
#endif

    ctx->pc = 0x181f80u;

    // 0x181f80: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x181f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x181f84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f88: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x181F88u;
    {
        const bool branch_taken_0x181f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f88) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x181F90u;
    // 0x181f90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x181f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181f98: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x181F98u;
    {
        const bool branch_taken_0x181f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F98u;
        // 0x181f9c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f98) {
            ctx->pc = 0x181FE8u;
            return;
        }
    }
    ctx->pc = 0x181FA0u;
}
