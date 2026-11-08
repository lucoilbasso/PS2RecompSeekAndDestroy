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

// Function: entry_00181220
// Address: 0x181220 - 0x181240
void entry_00181220_0x181220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181220_0x181220");
#endif

    ctx->pc = 0x181220u;

    // 0x181220: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x181220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181224: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x181224u;
    {
        const bool branch_taken_0x181224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181224) {
            ctx->pc = 0x181228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181224u;
            // 0x181228: 0xc4610008  lwc1        $f1, 0x8($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x181240u;
            return;
        }
    }
    ctx->pc = 0x18122Cu;
    // 0x18122c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x18122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181234: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x181234u;
    {
        const bool branch_taken_0x181234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181234) {
            ctx->pc = 0x181238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181234u;
            // 0x181238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            return;
        }
    }
    ctx->pc = 0x18123Cu;
    // 0x18123c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x18123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x181240u;
}
