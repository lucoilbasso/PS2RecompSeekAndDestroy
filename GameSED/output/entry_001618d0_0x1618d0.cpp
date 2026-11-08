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

// Function: entry_001618d0
// Address: 0x1618d0 - 0x1618d4
void entry_001618d0_0x1618d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001618d0_0x1618d0");
#endif

    ctx->pc = 0x1618d0u;

    // 0x1618d0: 0x269319c0  addiu       $s3, $s4, 0x19C0
    ctx->pc = 0x1618d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 6592));
    ctx->pc = 0x1618d4u;
}
