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

// Function: entry_0013f410
// Address: 0x13f410 - 0x13f414
void entry_0013f410_0x13f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f410_0x13f410");
#endif

    ctx->pc = 0x13f410u;

    // 0x13f410: 0xace8001c  sw          $t0, 0x1C($a3)
    ctx->pc = 0x13f410u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 8));
    ctx->pc = 0x13f414u;
}
