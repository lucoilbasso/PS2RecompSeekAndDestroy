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

// Function: entry_00138fd0
// Address: 0x138fd0 - 0x138ff0
void entry_00138fd0_0x138fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138fd0_0x138fd0");
#endif

    ctx->pc = 0x138fd0u;

    // 0x138fd0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x138fd0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x138fd4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x138fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138fd8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x138fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138fdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x138fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x138fe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x138fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138fe4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x138FE4u;
    {
        const bool branch_taken_0x138fe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FE4u;
        // 0x138fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fe4) {
            ctx->pc = 0x13900Cu;
            return;
        }
    }
    ctx->pc = 0x138FECu;
    // 0x138fec: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x138fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x138ff0u;
}
