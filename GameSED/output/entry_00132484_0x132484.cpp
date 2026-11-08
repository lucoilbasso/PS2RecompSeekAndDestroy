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

// Function: entry_00132484
// Address: 0x132484 - 0x132488
void entry_00132484_0x132484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132484_0x132484");
#endif

    ctx->pc = 0x132484u;

    // 0x132484: 0xac6200e8  sw          $v0, 0xE8($v1)
    ctx->pc = 0x132484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 2));
    ctx->pc = 0x132488u;
}
