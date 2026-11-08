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

// Function: entry_0011ec54
// Address: 0x11ec54 - 0x11ec90
void entry_0011ec54_0x11ec54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec54_0x11ec54");
#endif

    ctx->pc = 0x11ec54u;

    // 0x11ec54: 0xc4c000a8  lwc1        $f0, 0xA8($a2)
    ctx->pc = 0x11ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ec58: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ec58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ec5c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x11ec5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec60: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x11EC60u;
    {
        const bool branch_taken_0x11ec60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec60) {
            ctx->pc = 0x11EC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC60u;
            // 0x11ec64: 0xc4c00098  lwc1        $f0, 0x98($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC90u;
            return;
        }
    }
    ctx->pc = 0x11EC68u;
    // 0x11ec68: 0xc4c10098  lwc1        $f1, 0x98($a2)
    ctx->pc = 0x11ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11ec70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ec74: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11ec74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec78: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC78u;
    {
        const bool branch_taken_0x11ec78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec78) {
            ctx->pc = 0x11EC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC78u;
            // 0x11ec7c: 0xc4c00098  lwc1        $f0, 0x98($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC90u;
            return;
        }
    }
    ctx->pc = 0x11EC80u;
    // 0x11ec80: 0xe4c200a8  swc1        $f2, 0xA8($a2)
    ctx->pc = 0x11ec80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 168), bits); }
    // 0x11ec84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11EC84u;
    {
        const bool branch_taken_0x11ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC84u;
        // 0x11ec88: 0xe4c20098  swc1        $f2, 0x98($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec84) {
            ctx->pc = 0x11ECB0u;
            return;
        }
    }
    ctx->pc = 0x11EC8Cu;
    // 0x11ec8c: 0x0  nop
    ctx->pc = 0x11ec8cu;
    // NOP
    ctx->pc = 0x11ec90u;
}
