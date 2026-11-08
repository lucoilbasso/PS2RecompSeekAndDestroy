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

// Function: entry_00188a84
// Address: 0x188a84 - 0x188a88
void entry_00188a84_0x188a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a84_0x188a84");
#endif

    ctx->pc = 0x188a84u;

    // 0x188a84: 0x8ca3015c  lw          $v1, 0x15C($a1)
    ctx->pc = 0x188a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    ctx->pc = 0x188a88u;
}
