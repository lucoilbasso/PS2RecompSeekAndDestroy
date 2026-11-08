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

// Function: entry_001337cc
// Address: 0x1337cc - 0x1337e8
void entry_001337cc_0x1337cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001337cc_0x1337cc");
#endif

    ctx->pc = 0x1337ccu;

    // 0x1337cc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1337ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1337d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1337d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1337d4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1337D4u;
    {
        const bool branch_taken_0x1337d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1337d4) {
            ctx->pc = 0x1337D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1337D4u;
            // 0x1337d8: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337E8u;
            return;
        }
    }
    ctx->pc = 0x1337DCu;
    // 0x1337dc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1337dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1337e0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1337e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1337e4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1337e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x1337e8u;
}
