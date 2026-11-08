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

// Function: entry_00120324
// Address: 0x120324 - 0x120328
void entry_00120324_0x120324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120324_0x120324");
#endif

    ctx->pc = 0x120324u;

    // 0x120324: 0x24424880  addiu       $v0, $v0, 0x4880
    ctx->pc = 0x120324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18560));
    ctx->pc = 0x120328u;
}
