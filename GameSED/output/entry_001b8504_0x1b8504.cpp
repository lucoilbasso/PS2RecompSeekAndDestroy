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

// Function: entry_001b8504
// Address: 0x1b8504 - 0x1b8518
void entry_001b8504_0x1b8504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8504_0x1b8504");
#endif

    ctx->pc = 0x1b8504u;

    // 0x1b8504: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1b8504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1b8508: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8508u;
    {
        const bool branch_taken_0x1b8508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8508u;
        // 0x1b850c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8508) {
            ctx->pc = 0x1B8540u;
            return;
        }
    }
    ctx->pc = 0x1B8510u;
    // 0x1b8510: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x1b8514: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1b8514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    ctx->pc = 0x1b8518u;
}
