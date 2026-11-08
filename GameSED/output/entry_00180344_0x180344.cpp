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

// Function: entry_00180344
// Address: 0x180344 - 0x180348
void entry_00180344_0x180344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180344_0x180344");
#endif

    ctx->pc = 0x180344u;

    // 0x180344: 0xace40030  sw          $a0, 0x30($a3)
    ctx->pc = 0x180344u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 4));
    ctx->pc = 0x180348u;
}
