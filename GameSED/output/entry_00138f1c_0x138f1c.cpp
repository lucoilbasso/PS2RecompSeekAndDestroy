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

// Function: entry_00138f1c
// Address: 0x138f1c - 0x138f20
void entry_00138f1c_0x138f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138f1c_0x138f1c");
#endif

    ctx->pc = 0x138f1cu;

    // 0x138f1c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x138f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x138f20u;
}
