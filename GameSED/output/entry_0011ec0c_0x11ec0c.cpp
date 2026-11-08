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

// Function: entry_0011ec0c
// Address: 0x11ec0c - 0x11ec48
void entry_0011ec0c_0x11ec0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec0c_0x11ec0c");
#endif

    ctx->pc = 0x11ec0cu;

    // 0x11ec0c: 0xc4c000a4  lwc1        $f0, 0xA4($a2)
    ctx->pc = 0x11ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ec10: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ec10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ec14: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x11ec14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec18: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x11EC18u;
    {
        const bool branch_taken_0x11ec18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec18) {
            ctx->pc = 0x11EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC18u;
            // 0x11ec1c: 0xc4c00094  lwc1        $f0, 0x94($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC48u;
            return;
        }
    }
    ctx->pc = 0x11EC20u;
    // 0x11ec20: 0xc4c10094  lwc1        $f1, 0x94($a2)
    ctx->pc = 0x11ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11ec28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ec2c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11ec2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec30: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC30u;
    {
        const bool branch_taken_0x11ec30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec30) {
            ctx->pc = 0x11EC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC30u;
            // 0x11ec34: 0xc4c00094  lwc1        $f0, 0x94($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC48u;
            return;
        }
    }
    ctx->pc = 0x11EC38u;
    // 0x11ec38: 0xe4c200a4  swc1        $f2, 0xA4($a2)
    ctx->pc = 0x11ec38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 164), bits); }
    // 0x11ec3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC3Cu;
    {
        const bool branch_taken_0x11ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC3Cu;
        // 0x11ec40: 0xe4c20094  swc1        $f2, 0x94($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec3c) {
            ctx->pc = 0x11EC54u;
            return;
        }
    }
    ctx->pc = 0x11EC44u;
    // 0x11ec44: 0x0  nop
    ctx->pc = 0x11ec44u;
    // NOP
    ctx->pc = 0x11ec48u;
}
