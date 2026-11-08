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

// Function: entry_0016ab38
// Address: 0x16ab38 - 0x16ab3c
void entry_0016ab38_0x16ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab38_0x16ab38");
#endif

    ctx->pc = 0x16ab38u;

    // 0x16ab38: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x16ab3cu;
}
