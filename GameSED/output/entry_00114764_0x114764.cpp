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

// Function: entry_00114764
// Address: 0x114764 - 0x11476c
void entry_00114764_0x114764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114764_0x114764");
#endif

    ctx->pc = 0x114764u;

    // 0x114764: 0x94c20016  lhu         $v0, 0x16($a2)
    ctx->pc = 0x114764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x114768: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x114768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x11476cu;
}
