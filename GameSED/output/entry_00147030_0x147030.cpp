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

// Function: entry_00147030
// Address: 0x147030 - 0x147034
void entry_00147030_0x147030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147030_0x147030");
#endif

    ctx->pc = 0x147030u;

    // 0x147030: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x147030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    ctx->pc = 0x147034u;
}
