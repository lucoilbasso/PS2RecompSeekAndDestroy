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

// Function: entry_00183204
// Address: 0x183204 - 0x183220
void entry_00183204_0x183204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183204_0x183204");
#endif

    ctx->pc = 0x183204u;

    // 0x183204: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x183204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183208: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x183208u;
    {
        const bool branch_taken_0x183208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183208) {
            ctx->pc = 0x18320Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183208u;
            // 0x18320c: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x183228u;
            return;
        }
    }
    ctx->pc = 0x183210u;
    // 0x183210: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x183210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x183214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183218: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x183218u;
    {
        const bool branch_taken_0x183218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183218) {
            ctx->pc = 0x18321Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183218u;
            // 0x18321c: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18322Cu;
            return;
        }
    }
    ctx->pc = 0x183220u;
}
