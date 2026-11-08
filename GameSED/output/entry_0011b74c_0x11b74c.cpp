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

// Function: entry_0011b74c
// Address: 0x11b74c - 0x11b750
void entry_0011b74c_0x11b74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b74c_0x11b74c");
#endif

    ctx->pc = 0x11b74cu;

    // 0x11b74c: 0xc6180b  movn        $v1, $a2, $a2
    ctx->pc = 0x11b74cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    ctx->pc = 0x11b750u;
}
