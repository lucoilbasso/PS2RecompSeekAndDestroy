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

// Function: entry_001952a0
// Address: 0x1952a0 - 0x1952a4
void entry_001952a0_0x1952a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001952a0_0x1952a0");
#endif

    ctx->pc = 0x1952a0u;

    // 0x1952a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1952a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    ctx->pc = 0x1952a4u;
}
