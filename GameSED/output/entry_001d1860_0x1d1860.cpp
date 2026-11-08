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

// Function: entry_001d1860
// Address: 0x1d1860 - 0x1d1880
void entry_001d1860_0x1d1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1860_0x1d1860");
#endif

    ctx->pc = 0x1d1860u;

    // 0x1d1860: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1860u;
    {
        const bool branch_taken_0x1d1860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1860u;
        // 0x1d1864: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1860) {
            ctx->pc = 0x1D1880u;
            return;
        }
    }
    ctx->pc = 0x1D1868u;
    // 0x1d1868: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1868u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d186c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1870: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d1874: 0x1000fec8  b           . + 4 + (-0x138 << 2)
    ctx->pc = 0x1D1874u;
    {
        const bool branch_taken_0x1d1874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1874u;
        // 0x1d1878: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1874) {
            ctx->pc = 0x1D1398u;
            return;
        }
    }
    ctx->pc = 0x1D187Cu;
    // 0x1d187c: 0x0  nop
    ctx->pc = 0x1d187cu;
    // NOP
    ctx->pc = 0x1d1880u;
}
