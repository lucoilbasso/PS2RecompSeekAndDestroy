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

// Function: entry_001337e8
// Address: 0x1337e8 - 0x133804
void entry_001337e8_0x1337e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001337e8_0x1337e8");
#endif

    ctx->pc = 0x1337e8u;

    // 0x1337e8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1337e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1337ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1337ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1337f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1337F0u;
    {
        const bool branch_taken_0x1337f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1337F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337F0u;
        // 0x1337f4: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1337f0) {
            ctx->pc = 0x133804u;
            return;
        }
    }
    ctx->pc = 0x1337F8u;
    // 0x1337f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1337f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1337fc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1337fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x133800: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x133800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x133804u;
}
