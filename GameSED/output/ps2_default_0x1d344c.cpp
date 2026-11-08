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

// Function: default
// Address: 0x1d344c - 0x1d3460
void ps2_default_0x1d344c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1d344c");
#endif

    ctx->pc = 0x1d344cu;

    // 0x1d344c: 0x2e620018  sltiu       $v0, $s3, 0x18
    ctx->pc = 0x1d344cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d3450: 0xaee00044  sw          $zero, 0x44($s7)
    ctx->pc = 0x1d3450u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 0));
    // 0x1d3454: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3454u;
    {
        const bool branch_taken_0x1d3454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3454u;
        // 0x1d3458: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3454) {
            ctx->pc = 0x1D3480u;
            return;
        }
    }
    ctx->pc = 0x1D345Cu;
    // 0x1d345c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d345cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3460u;
}
