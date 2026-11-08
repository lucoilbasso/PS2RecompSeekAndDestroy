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

// Function: entry_00160a64
// Address: 0x160a64 - 0x160a6c
void entry_00160a64_0x160a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a64_0x160a64");
#endif

    ctx->pc = 0x160a64u;

    // 0x160a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160a68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x160a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x160a6cu;
}
