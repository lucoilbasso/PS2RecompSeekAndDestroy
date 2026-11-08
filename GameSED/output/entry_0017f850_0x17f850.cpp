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

// Function: entry_0017f850
// Address: 0x17f850 - 0x17f854
void entry_0017f850_0x17f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f850_0x17f850");
#endif

    ctx->pc = 0x17f850u;

    // 0x17f850: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x17f850u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x17f854u;
}
