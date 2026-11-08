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

// Function: entry_001cdf40
// Address: 0x1cdf40 - 0x1cdf5c
void entry_001cdf40_0x1cdf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdf40_0x1cdf40");
#endif

    ctx->pc = 0x1cdf40u;

    // 0x1cdf40: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cdf44: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDF44u;
    {
        const bool branch_taken_0x1cdf44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF44u;
        // 0x1cdf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf44) {
            ctx->pc = 0x1CDF5Cu;
            return;
        }
    }
    ctx->pc = 0x1CDF4Cu;
    // 0x1cdf4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cdf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdf50: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1cdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1cdf54: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1cdf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1cdf58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cdf58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1cdf5cu;
}
