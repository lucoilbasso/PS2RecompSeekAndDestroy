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

// Function: entry_00179ef8
// Address: 0x179ef8 - 0x179f00
void entry_00179ef8_0x179ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ef8_0x179ef8");
#endif

    ctx->pc = 0x179ef8u;

    // 0x179ef8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179EF8u;
    {
        const bool branch_taken_0x179ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EF8u;
        // 0x179efc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ef8) {
            ctx->pc = 0x179F0Cu;
            return;
        }
    }
    ctx->pc = 0x179F00u;
}
