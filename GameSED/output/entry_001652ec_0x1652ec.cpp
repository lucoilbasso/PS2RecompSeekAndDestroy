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

// Function: entry_001652ec
// Address: 0x1652ec - 0x165308
void entry_001652ec_0x1652ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001652ec_0x1652ec");
#endif

    ctx->pc = 0x1652ecu;

    // 0x1652ec: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x1652ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1652f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1652f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1652f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1652F4u;
    {
        const bool branch_taken_0x1652f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652F4u;
        // 0x1652f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652f4) {
            ctx->pc = 0x165308u;
            return;
        }
    }
    ctx->pc = 0x1652FCu;
    // 0x1652fc: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1652fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165300: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x165300u;
    {
        const bool branch_taken_0x165300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165300) {
            ctx->pc = 0x165278u;
            return;
        }
    }
    ctx->pc = 0x165308u;
}
