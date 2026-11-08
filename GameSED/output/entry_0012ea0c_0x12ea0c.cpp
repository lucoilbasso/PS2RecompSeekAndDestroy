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

// Function: entry_0012ea0c
// Address: 0x12ea0c - 0x12ea14
void entry_0012ea0c_0x12ea0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ea0c_0x12ea0c");
#endif

    ctx->pc = 0x12ea0cu;

    // 0x12ea0c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x12ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x12ea10: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x12ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x12ea14u;
}
