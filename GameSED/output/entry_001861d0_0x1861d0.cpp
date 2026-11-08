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

// Function: entry_001861d0
// Address: 0x1861d0 - 0x1861e8
void entry_001861d0_0x1861d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001861d0_0x1861d0");
#endif

    ctx->pc = 0x1861d0u;

    // 0x1861d0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1861d4: 0x0  nop
    ctx->pc = 0x1861d4u;
    // NOP
    // 0x1861d8: 0x0  nop
    ctx->pc = 0x1861d8u;
    // NOP
    // 0x1861dc: 0x0  nop
    ctx->pc = 0x1861dcu;
    // NOP
    // 0x1861e0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1861E0u;
    {
        const bool branch_taken_0x1861e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1861e0) {
            ctx->pc = 0x1861A8u;
            return;
        }
    }
    ctx->pc = 0x1861E8u;
}
