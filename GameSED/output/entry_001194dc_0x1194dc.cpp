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

// Function: entry_001194dc
// Address: 0x1194dc - 0x1194e0
void entry_001194dc_0x1194dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001194dc_0x1194dc");
#endif

    ctx->pc = 0x1194dcu;

    // 0x1194dc: 0x806a1b0  j           func_1A86C0
    ctx->pc = 0x1194DCu;
    ctx->pc = 0x1A86C0u;
    BSCDEntScenarioFlagsOn__Fi_0x1a86c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1194E4u;
}
