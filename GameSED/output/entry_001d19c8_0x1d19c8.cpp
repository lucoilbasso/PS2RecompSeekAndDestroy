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

// Function: entry_001d19c8
// Address: 0x1d19c8 - 0x1d19e8
void entry_001d19c8_0x1d19c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d19c8_0x1d19c8");
#endif

    ctx->pc = 0x1d19c8u;

    // 0x1d19c8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x1d19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x1d19cc: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d19ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d19d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D19D0u;
    {
        const bool branch_taken_0x1d19d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19D0u;
        // 0x1d19d4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19d0) {
            ctx->pc = 0x1D19E8u;
            return;
        }
    }
    ctx->pc = 0x1D19D8u;
    // 0x1d19d8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d19d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d19dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D19DCu;
    {
        const bool branch_taken_0x1d19dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19DCu;
        // 0x1d19e0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19dc) {
            ctx->pc = 0x1D1A08u;
            return;
        }
    }
    ctx->pc = 0x1D19E4u;
    // 0x1d19e4: 0x0  nop
    ctx->pc = 0x1d19e4u;
    // NOP
    ctx->pc = 0x1d19e8u;
}
