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

// Function: entry_0012659c
// Address: 0x12659c - 0x1265a0
void entry_0012659c_0x12659c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012659c_0x12659c");
#endif

    ctx->pc = 0x12659cu;

    // 0x12659c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x12659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    ctx->pc = 0x1265a0u;
}
