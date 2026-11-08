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

// Function: entry_0012d268
// Address: 0x12d268 - 0x12d26c
void entry_0012d268_0x12d268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d268_0x12d268");
#endif

    ctx->pc = 0x12d268u;

    // 0x12d268: 0xac850158  sw          $a1, 0x158($a0)
    ctx->pc = 0x12d268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 5));
    ctx->pc = 0x12d26cu;
}
