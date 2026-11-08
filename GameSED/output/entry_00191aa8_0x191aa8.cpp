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

// Function: entry_00191aa8
// Address: 0x191aa8 - 0x191ab0
void entry_00191aa8_0x191aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191aa8_0x191aa8");
#endif

    ctx->pc = 0x191aa8u;

    // 0x191aa8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x191aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x191aac: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x191aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x191ab0u;
}
