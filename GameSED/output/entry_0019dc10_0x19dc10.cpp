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

// Function: entry_0019dc10
// Address: 0x19dc10 - 0x19dc28
void entry_0019dc10_0x19dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc10_0x19dc10");
#endif

    ctx->pc = 0x19dc10u;

    // 0x19dc10: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc14: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dc14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19dc18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19dc1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DC1Cu;
    {
        const bool branch_taken_0x19dc1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC1Cu;
        // 0x19dc20: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc1c) {
            ctx->pc = 0x19DC28u;
            return;
        }
    }
    ctx->pc = 0x19DC24u;
    // 0x19dc24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x19dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x19dc28u;
}
