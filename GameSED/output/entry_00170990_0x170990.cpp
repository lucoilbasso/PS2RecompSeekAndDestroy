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

// Function: entry_00170990
// Address: 0x170990 - 0x170994
void entry_00170990_0x170990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170990_0x170990");
#endif

    ctx->pc = 0x170990u;

    // 0x170990: 0x26d41368  addiu       $s4, $s6, 0x1368
    ctx->pc = 0x170990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4968));
    ctx->pc = 0x170994u;
}
