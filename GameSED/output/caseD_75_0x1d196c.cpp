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

// Function: caseD_75
// Address: 0x1d196c - 0x1d1988
void caseD_75_0x1d196c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_75_0x1d196c");
#endif

    ctx->pc = 0x1d196cu;

    // 0x1d196c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d1970: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1970u;
    {
        const bool branch_taken_0x1d1970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1970u;
        // 0x1d1974: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1970) {
            ctx->pc = 0x1D1988u;
            return;
        }
    }
    ctx->pc = 0x1D1978u;
    // 0x1d1978: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1978u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d197c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D197Cu;
    {
        const bool branch_taken_0x1d197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D197Cu;
        // 0x1d1980: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d197c) {
            ctx->pc = 0x1D19A8u;
            return;
        }
    }
    ctx->pc = 0x1D1984u;
    // 0x1d1984: 0x0  nop
    ctx->pc = 0x1d1984u;
    // NOP
    ctx->pc = 0x1d1988u;
}
