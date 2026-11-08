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

// Function: entry_0012bd44
// Address: 0x12bd44 - 0x12bd48
void entry_0012bd44_0x12bd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bd44_0x12bd44");
#endif

    ctx->pc = 0x12bd44u;

    // 0x12bd44: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x12bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    ctx->pc = 0x12bd48u;
}
