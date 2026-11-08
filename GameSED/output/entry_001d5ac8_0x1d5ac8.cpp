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

// Function: entry_001d5ac8
// Address: 0x1d5ac8 - 0x1d5acc
void entry_001d5ac8_0x1d5ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ac8_0x1d5ac8");
#endif

    ctx->pc = 0x1d5ac8u;

    // 0x1d5ac8: 0x108943  sra         $s1, $s0, 5
    ctx->pc = 0x1d5ac8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 5));
    ctx->pc = 0x1d5accu;
}
