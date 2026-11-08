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

// Function: entry_00168e24
// Address: 0x168e24 - 0x168e28
void entry_00168e24_0x168e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e24_0x168e24");
#endif

    ctx->pc = 0x168e24u;

    // 0x168e24: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x168e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->pc = 0x168e28u;
}
