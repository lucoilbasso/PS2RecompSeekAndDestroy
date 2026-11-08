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

// Function: entry_001bdc38
// Address: 0x1bdc38 - 0x1bdc40
void entry_001bdc38_0x1bdc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdc38_0x1bdc38");
#endif

    ctx->pc = 0x1bdc38u;

    // 0x1bdc38: 0xae000820  sw          $zero, 0x820($s0)
    ctx->pc = 0x1bdc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 0));
    // 0x1bdc3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1bdc40u;
}
