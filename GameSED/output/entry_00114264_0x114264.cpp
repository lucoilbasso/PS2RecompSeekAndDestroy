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

// Function: entry_00114264
// Address: 0x114264 - 0x114268
void entry_00114264_0x114264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114264_0x114264");
#endif

    ctx->pc = 0x114264u;

    // 0x114264: 0xaf828920  sw          $v0, -0x76E0($gp)
    ctx->pc = 0x114264u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 2));
    ctx->pc = 0x114268u;
}
