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

// Function: entry_001ba374
// Address: 0x1ba374 - 0x1ba378
void entry_001ba374_0x1ba374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba374_0x1ba374");
#endif

    ctx->pc = 0x1ba374u;

    // 0x1ba374: 0x26f0d880  addiu       $s0, $s7, -0x2780
    ctx->pc = 0x1ba374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957184));
    ctx->pc = 0x1ba378u;
}
