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

// Function: entry_001417a0
// Address: 0x1417a0 - 0x1417a4
void entry_001417a0_0x1417a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001417a0_0x1417a0");
#endif

    ctx->pc = 0x1417a0u;

    // 0x1417a0: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1417a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    ctx->pc = 0x1417a4u;
}
