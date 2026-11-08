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

// Function: entry_001d1988
// Address: 0x1d1988 - 0x1d19a0
void entry_001d1988_0x1d1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1988_0x1d1988");
#endif

    ctx->pc = 0x1d1988u;

    // 0x1d1988: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x1d1988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x1d198c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D198Cu;
    {
        const bool branch_taken_0x1d198c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D198Cu;
        // 0x1d1990: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d198c) {
            ctx->pc = 0x1D19A0u;
            return;
        }
    }
    ctx->pc = 0x1D1994u;
    // 0x1d1994: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1994u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d1998: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1998u;
    {
        const bool branch_taken_0x1d1998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1998u;
        // 0x1d199c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1998) {
            ctx->pc = 0x1D19A8u;
            return;
        }
    }
    ctx->pc = 0x1D19A0u;
}
