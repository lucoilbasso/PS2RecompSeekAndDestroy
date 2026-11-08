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

// Function: entry_00154ca8
// Address: 0x154ca8 - 0x154cac
void entry_00154ca8_0x154ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154ca8_0x154ca8");
#endif

    ctx->pc = 0x154ca8u;

    // 0x154ca8: 0xae020680  sw          $v0, 0x680($s0)
    ctx->pc = 0x154ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
    ctx->pc = 0x154cacu;
}
