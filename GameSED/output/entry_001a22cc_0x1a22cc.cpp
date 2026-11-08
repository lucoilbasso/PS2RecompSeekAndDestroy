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

// Function: entry_001a22cc
// Address: 0x1a22cc - 0x1a22d0
void entry_001a22cc_0x1a22cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a22cc_0x1a22cc");
#endif

    ctx->pc = 0x1a22ccu;

    // 0x1a22cc: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x1a22ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    ctx->pc = 0x1a22d0u;
}
