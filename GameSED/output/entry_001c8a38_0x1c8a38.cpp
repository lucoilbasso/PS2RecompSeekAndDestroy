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

// Function: entry_001c8a38
// Address: 0x1c8a38 - 0x1c8a4c
void entry_001c8a38_0x1c8a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8a38_0x1c8a38");
#endif

    ctx->pc = 0x1c8a38u;

    // 0x1c8a38: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8A38u;
    {
        const bool branch_taken_0x1c8a38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A38u;
        // 0x1c8a3c: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a38) {
            ctx->pc = 0x1C8A60u;
            return;
        }
    }
    ctx->pc = 0x1C8A40u;
    // 0x1c8a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8a44: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8A44u;
    {
        const bool branch_taken_0x1c8a44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a44) {
            ctx->pc = 0x1C8A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8A44u;
            // 0x1c8a48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8A4Cu;
            return;
        }
    }
    ctx->pc = 0x1C8A4Cu;
}
