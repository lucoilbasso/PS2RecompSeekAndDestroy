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

// Function: entry_0016e954
// Address: 0x16e954 - 0x16e974
void entry_0016e954_0x16e954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e954_0x16e954");
#endif

    ctx->pc = 0x16e954u;

    // 0x16e954: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16e954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e958: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16E958u;
    {
        const bool branch_taken_0x16e958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e958) {
            ctx->pc = 0x16E95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E958u;
            // 0x16e95c: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E974u;
            return;
        }
    }
    ctx->pc = 0x16E960u;
    // 0x16e960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e968: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16e968u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16e96c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x16e96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x16e970: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x16e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x16e974u;
}
