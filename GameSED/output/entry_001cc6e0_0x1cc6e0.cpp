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

// Function: entry_001cc6e0
// Address: 0x1cc6e0 - 0x1cc6ec
void entry_001cc6e0_0x1cc6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc6e0_0x1cc6e0");
#endif

    ctx->pc = 0x1cc6e0u;

    // 0x1cc6e0: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC6E0u;
    {
        const bool branch_taken_0x1cc6e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6e0) {
            ctx->pc = 0x1CC710u;
            return;
        }
    }
    ctx->pc = 0x1CC6E8u;
    // 0x1cc6e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cc6ecu;
}
