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

// Function: entry_001c4bf0
// Address: 0x1c4bf0 - 0x1c4bf8
void entry_001c4bf0_0x1c4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4bf0_0x1c4bf0");
#endif

    ctx->pc = 0x1c4bf0u;

    // 0x1c4bf0: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x1c4bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x1c4bf4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1c4bf8u;
}
