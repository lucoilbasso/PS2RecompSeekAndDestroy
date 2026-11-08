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

// Function: entry_001d1880
// Address: 0x1d1880 - 0x1d1898
void entry_001d1880_0x1d1880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1880_0x1d1880");
#endif

    ctx->pc = 0x1d1880u;

    // 0x1d1880: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1880u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d1884: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d1884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1888: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x1d1888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d188c: 0x1000fec2  b           . + 4 + (-0x13E << 2)
    ctx->pc = 0x1D188Cu;
    {
        const bool branch_taken_0x1d188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D188Cu;
        // 0x1d1890: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d188c) {
            ctx->pc = 0x1D1398u;
            return;
        }
    }
    ctx->pc = 0x1D1894u;
    // 0x1d1894: 0x0  nop
    ctx->pc = 0x1d1894u;
    // NOP
    ctx->pc = 0x1d1898u;
}
