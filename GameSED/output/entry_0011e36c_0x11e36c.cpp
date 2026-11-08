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

// Function: entry_0011e36c
// Address: 0x11e36c - 0x11e374
void entry_0011e36c_0x11e36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e36c_0x11e36c");
#endif

    ctx->pc = 0x11e36cu;

    // 0x11e36c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e370: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11e374u;
}
