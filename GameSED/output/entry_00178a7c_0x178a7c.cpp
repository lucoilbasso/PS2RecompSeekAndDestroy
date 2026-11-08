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

// Function: entry_00178a7c
// Address: 0x178a7c - 0x178a80
void entry_00178a7c_0x178a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178a7c_0x178a7c");
#endif

    ctx->pc = 0x178a7cu;

    // 0x178a7c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x178a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    ctx->pc = 0x178a80u;
}
