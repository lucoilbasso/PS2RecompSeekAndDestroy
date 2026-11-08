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

// Function: entry_0019c8dc
// Address: 0x19c8dc - 0x19c8e0
void entry_0019c8dc_0x19c8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8dc_0x19c8dc");
#endif

    ctx->pc = 0x19c8dcu;

    // 0x19c8dc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x19c8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x19c8e0u;
}
