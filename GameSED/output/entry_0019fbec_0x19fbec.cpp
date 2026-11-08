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

// Function: entry_0019fbec
// Address: 0x19fbec - 0x19fbf0
void entry_0019fbec_0x19fbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fbec_0x19fbec");
#endif

    ctx->pc = 0x19fbecu;

    // 0x19fbec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19fbf0u;
}
