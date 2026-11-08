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

// Function: entry_00112c3c
// Address: 0x112c3c - 0x112c40
void entry_00112c3c_0x112c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112c3c_0x112c3c");
#endif

    ctx->pc = 0x112c3cu;

    // 0x112c3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x112c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x112c40u;
}
