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

// Function: entry_0017463c
// Address: 0x17463c - 0x174640
void entry_0017463c_0x17463c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017463c_0x17463c");
#endif

    ctx->pc = 0x17463cu;

    // 0x17463c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x17463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    ctx->pc = 0x174640u;
}
