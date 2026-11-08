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

// Function: entry_00118a20
// Address: 0x118a20 - 0x118a24
void entry_00118a20_0x118a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118a20_0x118a20");
#endif

    ctx->pc = 0x118a20u;

    // 0x118a20: 0x2442c0a8  addiu       $v0, $v0, -0x3F58
    ctx->pc = 0x118a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    ctx->pc = 0x118a24u;
}
