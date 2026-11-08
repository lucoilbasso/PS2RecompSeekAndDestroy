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

// Function: entry_0011eadc
// Address: 0x11eadc - 0x11eb00
void entry_0011eadc_0x11eadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eadc_0x11eadc");
#endif

    ctx->pc = 0x11eadcu;

    // 0x11eadc: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x11eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eae0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11eae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11eae4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11eae4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eae8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x11EAE8u;
    {
        const bool branch_taken_0x11eae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAE8u;
        // 0x11eaec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eae8) {
            ctx->pc = 0x11EB10u;
            return;
        }
    }
    ctx->pc = 0x11EAF0u;
    // 0x11eaf0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x11eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eaf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11eaf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eaf8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x11EAF8u;
    {
        const bool branch_taken_0x11eaf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11eaf8) {
            ctx->pc = 0x11EAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EAF8u;
            // 0x11eafc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EB14u;
            return;
        }
    }
    ctx->pc = 0x11EB00u;
}
