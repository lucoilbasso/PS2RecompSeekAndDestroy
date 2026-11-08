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

// Function: entry_001164cc
// Address: 0x1164cc - 0x1164d0
void entry_001164cc_0x1164cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001164cc_0x1164cc");
#endif

    ctx->pc = 0x1164ccu;

    // 0x1164cc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1164ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x1164d0u;
}
