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

// Function: entry_0010dbf8
// Address: 0x10dbf8 - 0x10dc00
void entry_0010dbf8_0x10dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dbf8_0x10dbf8");
#endif

    ctx->pc = 0x10dbf8u;

    // 0x10dbf8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10DBF8u;
    {
        const bool branch_taken_0x10dbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF8u;
        // 0x10dbfc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbf8) {
            ctx->pc = 0x10DC5Cu;
            return;
        }
    }
    ctx->pc = 0x10DC00u;
}
