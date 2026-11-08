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

// Function: entry_001dd038
// Address: 0x1dd038 - 0x1dd048
void entry_001dd038_0x1dd038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd038_0x1dd038");
#endif

    ctx->pc = 0x1dd038u;

    // 0x1dd038: 0x50c2000b  beql        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD038u;
    {
        const bool branch_taken_0x1dd038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dd038) {
            ctx->pc = 0x1DD03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD038u;
            // 0x1dd03c: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD068u;
            return;
        }
    }
    ctx->pc = 0x1DD040u;
    // 0x1dd040: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DD040u;
    {
        const bool branch_taken_0x1dd040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD040u;
        // 0x1dd044: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd040) {
            ctx->pc = 0x1DD074u;
            return;
        }
    }
    ctx->pc = 0x1DD048u;
}
