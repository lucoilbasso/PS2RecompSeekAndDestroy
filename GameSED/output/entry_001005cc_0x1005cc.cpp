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

// Function: entry_001005cc
// Address: 0x1005cc - 0x1005d0
void entry_001005cc_0x1005cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001005cc_0x1005cc");
#endif

    ctx->pc = 0x1005ccu;

    // 0x1005cc: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1005ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    ctx->pc = 0x1005d0u;
}
