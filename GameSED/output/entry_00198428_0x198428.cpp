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

// Function: entry_00198428
// Address: 0x198428 - 0x198448
void entry_00198428_0x198428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198428_0x198428");
#endif

    ctx->pc = 0x198428u;

    // 0x198428: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x198428u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19842c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x19842Cu;
    {
        const bool branch_taken_0x19842c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x198430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19842Cu;
        // 0x198430: 0x26830150  addiu       $v1, $s4, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19842c) {
            ctx->pc = 0x198448u;
            return;
        }
    }
    ctx->pc = 0x198434u;
    // 0x198434: 0xc64003e8  lwc1        $f0, 0x3E8($s2)
    ctx->pc = 0x198434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198438: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x198438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19843c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x19843Cu;
    {
        const bool branch_taken_0x19843c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x198440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19843Cu;
        // 0x198440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19843c) {
            ctx->pc = 0x198478u;
            return;
        }
    }
    ctx->pc = 0x198444u;
    // 0x198444: 0x26830150  addiu       $v1, $s4, 0x150
    ctx->pc = 0x198444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    ctx->pc = 0x198448u;
}
