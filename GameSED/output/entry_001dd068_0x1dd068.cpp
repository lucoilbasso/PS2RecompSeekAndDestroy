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

// Function: entry_001dd068
// Address: 0x1dd068 - 0x1dd070
void entry_001dd068_0x1dd068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd068_0x1dd068");
#endif

    ctx->pc = 0x1dd068u;

    // 0x1dd068: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd06c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1dd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1dd070u;
}
