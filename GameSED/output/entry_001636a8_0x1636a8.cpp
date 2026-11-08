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

// Function: entry_001636a8
// Address: 0x1636a8 - 0x1636ac
void entry_001636a8_0x1636a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001636a8_0x1636a8");
#endif

    ctx->pc = 0x1636a8u;

    // 0x1636a8: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x1636a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
    ctx->pc = 0x1636acu;
}
