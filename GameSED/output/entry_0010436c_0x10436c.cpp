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

// Function: entry_0010436c
// Address: 0x10436c - 0x104374
void entry_0010436c_0x10436c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010436c_0x10436c");
#endif

    ctx->pc = 0x10436cu;

    // 0x10436c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10436cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x104370: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x104370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x104374u;
}
