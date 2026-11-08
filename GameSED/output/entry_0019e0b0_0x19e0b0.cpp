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

// Function: entry_0019e0b0
// Address: 0x19e0b0 - 0x19e0d0
void entry_0019e0b0_0x19e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e0b0_0x19e0b0");
#endif

    ctx->pc = 0x19e0b0u;

    // 0x19e0b0: 0xc780860c  lwc1        $f0, -0x79F4($gp)
    ctx->pc = 0x19e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e0b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e0b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e0b8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x19E0B8u;
    {
        const bool branch_taken_0x19e0b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e0b8) {
            ctx->pc = 0x19E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E0B8u;
            // 0x19e0bc: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E0D8u;
            return;
        }
    }
    ctx->pc = 0x19E0C0u;
    // 0x19e0c0: 0xc7808610  lwc1        $f0, -0x79F0($gp)
    ctx->pc = 0x19e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e0c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19e0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e0c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19E0C8u;
    {
        const bool branch_taken_0x19e0c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e0c8) {
            ctx->pc = 0x19E0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E0C8u;
            // 0x19e0cc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E0D0u;
            return;
        }
    }
    ctx->pc = 0x19E0D0u;
}
