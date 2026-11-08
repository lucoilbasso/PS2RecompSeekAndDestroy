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

// Function: entry_0012032c
// Address: 0x12032c - 0x120330
void entry_0012032c_0x12032c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012032c_0x12032c");
#endif

    ctx->pc = 0x12032cu;

    // 0x12032c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x12032cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x120330u;
}
