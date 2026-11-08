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

// Function: entry_0011a5d8
// Address: 0x11a5d8 - 0x11a5e4
void entry_0011a5d8_0x11a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5d8_0x11a5d8");
#endif

    ctx->pc = 0x11a5d8u;

    // 0x11a5d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11a5dc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A5DCu;
    {
        const bool branch_taken_0x11a5dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x11a5dc) {
            ctx->pc = 0x11A5F0u;
            return;
        }
    }
    ctx->pc = 0x11A5E4u;
}
