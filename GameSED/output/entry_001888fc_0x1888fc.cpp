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

// Function: entry_001888fc
// Address: 0x1888fc - 0x188900
void entry_001888fc_0x1888fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001888fc_0x1888fc");
#endif

    ctx->pc = 0x1888fcu;

    // 0x1888fc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1888fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x188900u;
}
