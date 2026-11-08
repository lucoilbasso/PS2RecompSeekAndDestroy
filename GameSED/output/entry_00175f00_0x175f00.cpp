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

// Function: entry_00175f00
// Address: 0x175f00 - 0x175f0c
void entry_00175f00_0x175f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f00_0x175f00");
#endif

    ctx->pc = 0x175f00u;

    // 0x175f00: 0x1631021  addu        $v0, $t3, $v1
    ctx->pc = 0x175f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x175f04: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175F04u;
    {
        const bool branch_taken_0x175f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f04) {
            ctx->pc = 0x175F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175F04u;
            // 0x175f08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175F0Cu;
            return;
        }
    }
    ctx->pc = 0x175F0Cu;
}
