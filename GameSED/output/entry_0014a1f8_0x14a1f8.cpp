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

// Function: entry_0014a1f8
// Address: 0x14a1f8 - 0x14a200
void entry_0014a1f8_0x14a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a1f8_0x14a1f8");
#endif

    ctx->pc = 0x14a1f8u;

    // 0x14a1f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a1fc: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x14a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    ctx->pc = 0x14a200u;
}
