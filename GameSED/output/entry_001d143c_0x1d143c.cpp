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

// Function: entry_001d143c
// Address: 0x1d143c - 0x1d145c
void entry_001d143c_0x1d143c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d143c_0x1d143c");
#endif

    ctx->pc = 0x1d143cu;

    // 0x1d143c: 0x1a000525  blez        $s0, . + 4 + (0x525 << 2)
    ctx->pc = 0x1D143Cu;
    {
        const bool branch_taken_0x1d143c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D143Cu;
        // 0x1d1440: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d143c) {
            ctx->pc = 0x1D28D4u;
            return;
        }
    }
    ctx->pc = 0x1D1444u;
    // 0x1d1444: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x1d1444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1448: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d144c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x1d144cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x1d1450: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d1450u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1454: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x1d1454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x1d1458: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d1458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1d145cu;
}
