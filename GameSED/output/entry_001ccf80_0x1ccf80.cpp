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

// Function: entry_001ccf80
// Address: 0x1ccf80 - 0x1ccf84
void entry_001ccf80_0x1ccf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf80_0x1ccf80");
#endif

    ctx->pc = 0x1ccf80u;

    // 0x1ccf80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x1ccf84u;
}
