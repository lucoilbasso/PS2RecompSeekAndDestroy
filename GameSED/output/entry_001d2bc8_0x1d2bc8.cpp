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

// Function: entry_001d2bc8
// Address: 0x1d2bc8 - 0x1d2bcc
void entry_001d2bc8_0x1d2bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2bc8_0x1d2bc8");
#endif

    ctx->pc = 0x1d2bc8u;

    // 0x1d2bc8: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->pc = 0x1d2bccu;
}
