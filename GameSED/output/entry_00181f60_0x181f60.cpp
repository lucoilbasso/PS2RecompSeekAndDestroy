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

// Function: entry_00181f60
// Address: 0x181f60 - 0x181f80
void entry_00181f60_0x181f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f60_0x181f60");
#endif

    ctx->pc = 0x181f60u;

    // 0x181f60: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x181f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f64: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x181F64u;
    {
        const bool branch_taken_0x181f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f64) {
            ctx->pc = 0x181F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F64u;
            // 0x181f68: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x181F80u;
            return;
        }
    }
    ctx->pc = 0x181F6Cu;
    // 0x181f6c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x181f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f74: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x181F74u;
    {
        const bool branch_taken_0x181f74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f74) {
            ctx->pc = 0x181F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F74u;
            // 0x181f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181FE8u;
            return;
        }
    }
    ctx->pc = 0x181F7Cu;
    // 0x181f7c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x181f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x181f80u;
}
