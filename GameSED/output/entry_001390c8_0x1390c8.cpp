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

// Function: entry_001390c8
// Address: 0x1390c8 - 0x1390e8
void entry_001390c8_0x1390c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001390c8_0x1390c8");
#endif

    ctx->pc = 0x1390c8u;

    // 0x1390c8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1390c8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1390cc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1390ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1390d0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1390d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1390d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1390d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1390d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1390d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1390dc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1390DCu;
    {
        const bool branch_taken_0x1390dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1390E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390DCu;
        // 0x1390e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390dc) {
            ctx->pc = 0x139104u;
            return;
        }
    }
    ctx->pc = 0x1390E4u;
    // 0x1390e4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1390e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x1390e8u;
}
