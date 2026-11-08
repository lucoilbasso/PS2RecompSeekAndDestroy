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

// Function: entry_001a27f4
// Address: 0x1a27f4 - 0x1a2820
void entry_001a27f4_0x1a27f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a27f4_0x1a27f4");
#endif

    ctx->pc = 0x1a27f4u;

    // 0x1a27f4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a27f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a27f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a27fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a27fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2800: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1a2800u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2804: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2804u;
    {
        const bool branch_taken_0x1a2804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2804u;
        // 0x1a2808: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2804) {
            ctx->pc = 0x1A2820u;
            return;
        }
    }
    ctx->pc = 0x1A280Cu;
    // 0x1a280c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2814: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a2814u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2818: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2818u;
    {
        const bool branch_taken_0x1a2818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2818) {
            ctx->pc = 0x1A2824u;
            return;
        }
    }
    ctx->pc = 0x1A2820u;
}
