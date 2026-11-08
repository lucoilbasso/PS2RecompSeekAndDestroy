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

// Function: entry_001771a8
// Address: 0x1771a8 - 0x1771ac
void entry_001771a8_0x1771a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001771a8_0x1771a8");
#endif

    ctx->pc = 0x1771a8u;

    // 0x1771a8: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x1771a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    ctx->pc = 0x1771acu;
}
