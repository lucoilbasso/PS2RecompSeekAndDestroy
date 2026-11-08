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

// Function: entry_0019ef90
// Address: 0x19ef90 - 0x19ef94
void entry_0019ef90_0x19ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef90_0x19ef90");
#endif

    ctx->pc = 0x19ef90u;

    // 0x19ef90: 0x51023  negu        $v0, $a1
    ctx->pc = 0x19ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->pc = 0x19ef94u;
}
