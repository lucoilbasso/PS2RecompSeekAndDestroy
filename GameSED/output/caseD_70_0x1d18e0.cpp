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

// Function: caseD_70
// Address: 0x1d18e0 - 0x1d1908
void caseD_70_0x1d18e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_70_0x1d18e0");
#endif

    ctx->pc = 0x1d18e0u;

    // 0x1d18e0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d18e4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x1d18e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18e8: 0x2442c3f0  addiu       $v0, $v0, -0x3C10
    ctx->pc = 0x1d18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951920));
    // 0x1d18ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d18f0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d18f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d18f4: 0x36f70002  ori         $s7, $s7, 0x2
    ctx->pc = 0x1d18f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x1d18f8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x1d18f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x1d18fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1900: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1D1900u;
    {
        const bool branch_taken_0x1d1900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1900u;
        // 0x1d1904: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1900) {
            ctx->pc = 0x1D1A1Cu;
            return;
        }
    }
    ctx->pc = 0x1D1908u;
}
