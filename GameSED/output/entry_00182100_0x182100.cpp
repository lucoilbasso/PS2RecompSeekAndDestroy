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

// Function: entry_00182100
// Address: 0x182100 - 0x182108
void entry_00182100_0x182100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182100_0x182100");
#endif

    ctx->pc = 0x182100u;

    // 0x182100: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x182100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x182104: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x182104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    ctx->pc = 0x182108u;
}
