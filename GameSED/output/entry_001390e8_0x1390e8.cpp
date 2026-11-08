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

// Function: entry_001390e8
// Address: 0x1390e8 - 0x1390ec
void entry_001390e8_0x1390e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001390e8_0x1390e8");
#endif

    ctx->pc = 0x1390e8u;

    // 0x1390e8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1390e8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    ctx->pc = 0x1390ecu;
}
