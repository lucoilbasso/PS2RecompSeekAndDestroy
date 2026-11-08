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

// Function: entry_00138ff4
// Address: 0x138ff4 - 0x139008
void entry_00138ff4_0x138ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138ff4_0x138ff4");
#endif

    ctx->pc = 0x138ff4u;

    // 0x138ff4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x138ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138ff8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x138ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x138ffc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x138ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139000: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x139000u;
    {
        const bool branch_taken_0x139000 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139000u;
        // 0x139004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139000) {
            ctx->pc = 0x13900Cu;
            return;
        }
    }
    ctx->pc = 0x139008u;
}
