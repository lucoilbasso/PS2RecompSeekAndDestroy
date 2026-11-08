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

// Function: entry_00122a98
// Address: 0x122a98 - 0x122a9c
void entry_00122a98_0x122a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a98_0x122a98");
#endif

    ctx->pc = 0x122a98u;

    // 0x122a98: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x122a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    ctx->pc = 0x122a9cu;
}
