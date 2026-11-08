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

// Function: entry_00121bf0
// Address: 0x121bf0 - 0x121bf4
void entry_00121bf0_0x121bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121bf0_0x121bf0");
#endif

    ctx->pc = 0x121bf0u;

    // 0x121bf0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x121bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x121bf4u;
}
