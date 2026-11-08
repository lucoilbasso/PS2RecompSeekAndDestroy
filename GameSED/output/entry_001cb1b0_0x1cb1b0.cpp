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

// Function: entry_001cb1b0
// Address: 0x1cb1b0 - 0x1cb1b8
void entry_001cb1b0_0x1cb1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb1b0_0x1cb1b0");
#endif

    ctx->pc = 0x1cb1b0u;

    // 0x1cb1b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1cb1b8u;
}
