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

// Function: entry_00138a58
// Address: 0x138a58 - 0x138a5c
void entry_00138a58_0x138a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138a58_0x138a58");
#endif

    ctx->pc = 0x138a58u;

    // 0x138a58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x138a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x138a5cu;
}
