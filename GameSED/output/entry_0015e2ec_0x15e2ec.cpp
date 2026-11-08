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

// Function: entry_0015e2ec
// Address: 0x15e2ec - 0x15e2f8
void entry_0015e2ec_0x15e2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e2ec_0x15e2ec");
#endif

    ctx->pc = 0x15e2ecu;

    // 0x15e2ec: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x15e2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15e2f0: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
    ctx->pc = 0x15E2F0u;
    {
        const bool branch_taken_0x15e2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2F0u;
        // 0x15e2f4: 0x26310208  addiu       $s1, $s1, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2f0) {
            ctx->pc = 0x15DF78u;
            return;
        }
    }
    ctx->pc = 0x15E2F8u;
}
