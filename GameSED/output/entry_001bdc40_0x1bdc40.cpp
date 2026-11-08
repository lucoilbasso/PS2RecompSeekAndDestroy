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

// Function: entry_001bdc40
// Address: 0x1bdc40 - 0x1bdc48
void entry_001bdc40_0x1bdc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdc40_0x1bdc40");
#endif

    ctx->pc = 0x1bdc40u;

    // 0x1bdc40: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDC40u;
    {
        const bool branch_taken_0x1bdc40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC40u;
        // 0x1bdc44: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc40) {
            ctx->pc = 0x1BDC78u;
            return;
        }
    }
    ctx->pc = 0x1BDC48u;
}
