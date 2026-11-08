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

// Function: entry_0019e0d8
// Address: 0x19e0d8 - 0x19e0f4
void entry_0019e0d8_0x19e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e0d8_0x19e0d8");
#endif

    ctx->pc = 0x19e0d8u;

    // 0x19e0d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e0dc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x19E0DCu;
    {
        const bool branch_taken_0x19e0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e0dc) {
            ctx->pc = 0x19E0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E0DCu;
            // 0x19e0e0: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E0F8u;
            return;
        }
    }
    ctx->pc = 0x19E0E4u;
    // 0x19e0e4: 0xc7808618  lwc1        $f0, -0x79E8($gp)
    ctx->pc = 0x19e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e0e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19e0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e0ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19E0ECu;
    {
        const bool branch_taken_0x19e0ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e0ec) {
            ctx->pc = 0x19E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E0ECu;
            // 0x19e0f0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E0F4u;
            return;
        }
    }
    ctx->pc = 0x19E0F4u;
}
