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

// Function: entry_00133804
// Address: 0x133804 - 0x133830
void entry_00133804_0x133804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133804_0x133804");
#endif

    ctx->pc = 0x133804u;

    // 0x133804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133808: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x133808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13380c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x13380Cu;
    {
        const bool branch_taken_0x13380c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x133810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13380Cu;
        // 0x133810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13380c) {
            ctx->pc = 0x13383Cu;
            return;
        }
    }
    ctx->pc = 0x133814u;
    // 0x133814: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x133814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133818: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x133818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13381c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13381Cu;
    {
        const bool branch_taken_0x13381c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13381Cu;
        // 0x133820: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13381c) {
            ctx->pc = 0x133830u;
            return;
        }
    }
    ctx->pc = 0x133824u;
    // 0x133824: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x133824u;
    {
        const bool branch_taken_0x133824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133824u;
        // 0x133828: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133824) {
            ctx->pc = 0x13383Cu;
            return;
        }
    }
    ctx->pc = 0x13382Cu;
    // 0x13382c: 0x0  nop
    ctx->pc = 0x13382cu;
    // NOP
    ctx->pc = 0x133830u;
}
