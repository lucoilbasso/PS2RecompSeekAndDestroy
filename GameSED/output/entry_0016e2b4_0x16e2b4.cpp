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

// Function: entry_0016e2b4
// Address: 0x16e2b4 - 0x16e2cc
void entry_0016e2b4_0x16e2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e2b4_0x16e2b4");
#endif

    ctx->pc = 0x16e2b4u;

    // 0x16e2b4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x16e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e2b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e2bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e2c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16E2C0u;
    {
        const bool branch_taken_0x16e2c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2C0u;
        // 0x16e2c4: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2c0) {
            ctx->pc = 0x16E2CCu;
            return;
        }
    }
    ctx->pc = 0x16E2C8u;
    // 0x16e2c8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x16e2c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x16e2ccu;
}
