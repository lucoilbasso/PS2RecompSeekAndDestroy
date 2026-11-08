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

// Function: caseD_6f
// Address: 0x1d189c - 0x1d18b8
void caseD_6f_0x1d189c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6f_0x1d189c");
#endif

    ctx->pc = 0x1d189cu;

    // 0x1d189c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d18a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D18A0u;
    {
        const bool branch_taken_0x1d18a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18A0u;
        // 0x1d18a4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18a0) {
            ctx->pc = 0x1D18B8u;
            return;
        }
    }
    ctx->pc = 0x1D18A8u;
    // 0x1d18a8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d18a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d18ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D18ACu;
    {
        const bool branch_taken_0x1d18ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18ACu;
        // 0x1d18b0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18ac) {
            ctx->pc = 0x1D18D8u;
            return;
        }
    }
    ctx->pc = 0x1D18B4u;
    // 0x1d18b4: 0x0  nop
    ctx->pc = 0x1d18b4u;
    // NOP
    ctx->pc = 0x1d18b8u;
}
