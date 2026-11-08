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

// Function: entry_0010f124
// Address: 0x10f124 - 0x10f130
void entry_0010f124_0x10f124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f124_0x10f124");
#endif

    ctx->pc = 0x10f124u;

    // 0x10f124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F124u;
    {
        const bool branch_taken_0x10f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F124u;
        // 0x10f128: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f124) {
            ctx->pc = 0x10F140u;
            return;
        }
    }
    ctx->pc = 0x10F12Cu;
    // 0x10f12c: 0x0  nop
    ctx->pc = 0x10f12cu;
    // NOP
    ctx->pc = 0x10f130u;
}
