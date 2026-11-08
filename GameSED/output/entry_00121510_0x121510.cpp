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

// Function: entry_00121510
// Address: 0x121510 - 0x12151c
void entry_00121510_0x121510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121510_0x121510");
#endif

    ctx->pc = 0x121510u;

    // 0x121510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x121510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121514: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121514u;
    {
        const bool branch_taken_0x121514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121514u;
        // 0x121518: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121514) {
            ctx->pc = 0x121538u;
            return;
        }
    }
    ctx->pc = 0x12151Cu;
}
