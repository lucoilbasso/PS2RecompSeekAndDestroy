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

// Function: entry_00198400
// Address: 0x198400 - 0x198428
void entry_00198400_0x198400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198400_0x198400");
#endif

    ctx->pc = 0x198400u;

    // 0x198400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198404: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x198404u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198408: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x198408u;
    {
        const bool branch_taken_0x198408 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x198408) {
            ctx->pc = 0x19840Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198408u;
            // 0x19840c: 0xc64103e0  lwc1        $f1, 0x3E0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x198428u;
            return;
        }
    }
    ctx->pc = 0x198410u;
    // 0x198410: 0xc64003e8  lwc1        $f0, 0x3E8($s2)
    ctx->pc = 0x198410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198414: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198418: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x198418u;
    {
        const bool branch_taken_0x198418 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198418u;
        // 0x19841c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198418) {
            ctx->pc = 0x198478u;
            return;
        }
    }
    ctx->pc = 0x198420u;
    // 0x198420: 0xc64103e0  lwc1        $f1, 0x3E0($s2)
    ctx->pc = 0x198420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x198428u;
}
