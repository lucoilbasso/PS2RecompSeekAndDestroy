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

// Function: entry_0019c9c4
// Address: 0x19c9c4 - 0x19c9c8
void entry_0019c9c4_0x19c9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c9c4_0x19c9c4");
#endif

    ctx->pc = 0x19c9c4u;

    // 0x19c9c4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x19c9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x19c9c8u;
}
