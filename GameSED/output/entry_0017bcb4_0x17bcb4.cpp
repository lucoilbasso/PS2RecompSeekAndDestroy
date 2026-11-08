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

// Function: entry_0017bcb4
// Address: 0x17bcb4 - 0x17bcb8
void entry_0017bcb4_0x17bcb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bcb4_0x17bcb4");
#endif

    ctx->pc = 0x17bcb4u;

    // 0x17bcb4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x17bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x17bcb8u;
}
