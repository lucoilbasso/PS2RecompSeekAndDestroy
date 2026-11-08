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

// Function: entry_0012a5fc
// Address: 0x12a5fc - 0x12a600
void entry_0012a5fc_0x12a5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a5fc_0x12a5fc");
#endif

    ctx->pc = 0x12a5fcu;

    // 0x12a5fc: 0x8f8289f8  lw          $v0, -0x7608($gp)
    ctx->pc = 0x12a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
    ctx->pc = 0x12a600u;
}
