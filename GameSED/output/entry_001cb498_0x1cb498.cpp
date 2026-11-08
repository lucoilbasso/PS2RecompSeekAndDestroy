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

// Function: entry_001cb498
// Address: 0x1cb498 - 0x1cb4a0
void entry_001cb498_0x1cb498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb498_0x1cb498");
#endif

    ctx->pc = 0x1cb498u;

    // 0x1cb498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB498u;
    {
        const bool branch_taken_0x1cb498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB498u;
        // 0x1cb49c: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb498) {
            ctx->pc = 0x1CB4A4u;
            return;
        }
    }
    ctx->pc = 0x1CB4A0u;
}
