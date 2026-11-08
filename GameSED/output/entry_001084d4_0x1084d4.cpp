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

// Function: entry_001084d4
// Address: 0x1084d4 - 0x1084d8
void entry_001084d4_0x1084d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001084d4_0x1084d4");
#endif

    ctx->pc = 0x1084d4u;

    // 0x1084d4: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x1084d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    ctx->pc = 0x1084d8u;
}
