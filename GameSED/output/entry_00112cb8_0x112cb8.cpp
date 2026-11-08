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

// Function: entry_00112cb8
// Address: 0x112cb8 - 0x112cbc
void entry_00112cb8_0x112cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112cb8_0x112cb8");
#endif

    ctx->pc = 0x112cb8u;

    // 0x112cb8: 0xae020384  sw          $v0, 0x384($s0)
    ctx->pc = 0x112cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
    ctx->pc = 0x112cbcu;
}
