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

// Function: entry_00120670
// Address: 0x120670 - 0x120674
void entry_00120670_0x120670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120670_0x120670");
#endif

    ctx->pc = 0x120670u;

    // 0x120670: 0xacc00120  sw          $zero, 0x120($a2)
    ctx->pc = 0x120670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 0));
    ctx->pc = 0x120674u;
}
