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

// Function: entry_001ca960
// Address: 0x1ca960 - 0x1ca978
void entry_001ca960_0x1ca960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca960_0x1ca960");
#endif

    ctx->pc = 0x1ca960u;

    // 0x1ca960: 0x1591021  addu        $v0, $t2, $t9
    ctx->pc = 0x1ca960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x1ca964: 0x1ee182b  sltu        $v1, $t7, $t6
    ctx->pc = 0x1ca964u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1ca968: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1ca968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1ca96c: 0x16a3821  addu        $a3, $t3, $t2
    ctx->pc = 0x1ca96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ca970: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CA970u;
    {
        const bool branch_taken_0x1ca970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA970u;
        // 0x1ca974: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca970) {
            ctx->pc = 0x1CA8F0u;
            return;
        }
    }
    ctx->pc = 0x1CA978u;
}
