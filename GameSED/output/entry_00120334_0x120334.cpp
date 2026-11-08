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

// Function: entry_00120334
// Address: 0x120334 - 0x120338
void entry_00120334_0x120334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120334_0x120334");
#endif

    ctx->pc = 0x120334u;

    // 0x120334: 0x247e74e0  addiu       $fp, $v1, 0x74E0
    ctx->pc = 0x120334u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 29920));
    ctx->pc = 0x120338u;
}
