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

// Function: entry_0011edc8
// Address: 0x11edc8 - 0x11edcc
void entry_0011edc8_0x11edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011edc8_0x11edc8");
#endif

    ctx->pc = 0x11edc8u;

    // 0x11edc8: 0xdce20070  ld          $v0, 0x70($a3)
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 112)));
    ctx->pc = 0x11edccu;
}
