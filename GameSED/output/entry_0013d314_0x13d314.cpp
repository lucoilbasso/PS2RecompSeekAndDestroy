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

// Function: entry_0013d314
// Address: 0x13d314 - 0x13d318
void entry_0013d314_0x13d314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d314_0x13d314");
#endif

    ctx->pc = 0x13d314u;

    // 0x13d314: 0xaf848a54  sw          $a0, -0x75AC($gp)
    ctx->pc = 0x13d314u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937172), GPR_U32(ctx, 4));
    ctx->pc = 0x13d318u;
}
