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

// Function: entry_00112a84
// Address: 0x112a84 - 0x112a88
void entry_00112a84_0x112a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a84_0x112a84");
#endif

    ctx->pc = 0x112a84u;

    // 0x112a84: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x112a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    ctx->pc = 0x112a88u;
}
