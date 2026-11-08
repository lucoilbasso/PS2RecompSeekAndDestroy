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

// Function: entry_001704f0
// Address: 0x1704f0 - 0x1704f8
void entry_001704f0_0x1704f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001704f0_0x1704f0");
#endif

    ctx->pc = 0x1704f0u;

    // 0x1704f0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1704f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1704f4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1704f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    ctx->pc = 0x1704f8u;
}
