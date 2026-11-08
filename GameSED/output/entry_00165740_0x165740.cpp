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

// Function: entry_00165740
// Address: 0x165740 - 0x165744
void entry_00165740_0x165740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165740_0x165740");
#endif

    ctx->pc = 0x165740u;

    // 0x165740: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x165740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    ctx->pc = 0x165744u;
}
