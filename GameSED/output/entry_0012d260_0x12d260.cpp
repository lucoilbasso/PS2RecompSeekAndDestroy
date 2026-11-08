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

// Function: entry_0012d260
// Address: 0x12d260 - 0x12d264
void entry_0012d260_0x12d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d260_0x12d260");
#endif

    ctx->pc = 0x12d260u;

    // 0x12d260: 0xac6500c0  sw          $a1, 0xC0($v1)
    ctx->pc = 0x12d260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 5));
    ctx->pc = 0x12d264u;
}
