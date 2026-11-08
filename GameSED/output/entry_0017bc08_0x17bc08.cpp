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

// Function: entry_0017bc08
// Address: 0x17bc08 - 0x17bc0c
void entry_0017bc08_0x17bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bc08_0x17bc08");
#endif

    ctx->pc = 0x17bc08u;

    // 0x17bc08: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x17bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x17bc0cu;
}
