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

// Function: entry_00156b04
// Address: 0x156b04 - 0x156b08
void entry_00156b04_0x156b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b04_0x156b04");
#endif

    ctx->pc = 0x156b04u;

    // 0x156b04: 0x245135e0  addiu       $s1, $v0, 0x35E0
    ctx->pc = 0x156b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    ctx->pc = 0x156b08u;
}
