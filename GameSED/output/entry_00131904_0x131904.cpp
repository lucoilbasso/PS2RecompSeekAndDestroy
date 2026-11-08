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

// Function: entry_00131904
// Address: 0x131904 - 0x131908
void entry_00131904_0x131904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131904_0x131904");
#endif

    ctx->pc = 0x131904u;

    // 0x131904: 0x8f8289fc  lw          $v0, -0x7604($gp)
    ctx->pc = 0x131904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
    ctx->pc = 0x131908u;
}
