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

// Function: entry_00193a18
// Address: 0x193a18 - 0x193a1c
void entry_00193a18_0x193a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a18_0x193a18");
#endif

    ctx->pc = 0x193a18u;

    // 0x193a18: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x193a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    ctx->pc = 0x193a1cu;
}
