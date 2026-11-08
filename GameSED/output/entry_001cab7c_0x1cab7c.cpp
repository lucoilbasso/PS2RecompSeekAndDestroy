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

// Function: entry_001cab7c
// Address: 0x1cab7c - 0x1cab80
void entry_001cab7c_0x1cab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cab7c_0x1cab7c");
#endif

    ctx->pc = 0x1cab7cu;

    // 0x1cab7c: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    ctx->pc = 0x1cab80u;
}
