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

// Function: entry_001a3c60
// Address: 0x1a3c60 - 0x1a3c64
void entry_001a3c60_0x1a3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c60_0x1a3c60");
#endif

    ctx->pc = 0x1a3c60u;

    // 0x1a3c60: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x1a3c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    ctx->pc = 0x1a3c64u;
}
