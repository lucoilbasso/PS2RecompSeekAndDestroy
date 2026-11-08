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

// Function: entry_00121434
// Address: 0x121434 - 0x121438
void entry_00121434_0x121434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121434_0x121434");
#endif

    ctx->pc = 0x121434u;

    // 0x121434: 0x24140aaa  addiu       $s4, $zero, 0xAAA
    ctx->pc = 0x121434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2730));
    ctx->pc = 0x121438u;
}
