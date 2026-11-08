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

// Function: entry_00155fa8
// Address: 0x155fa8 - 0x155fac
void entry_00155fa8_0x155fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155fa8_0x155fa8");
#endif

    ctx->pc = 0x155fa8u;

    // 0x155fa8: 0x2490079c  addiu       $s0, $a0, 0x79C
    ctx->pc = 0x155fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1948));
    ctx->pc = 0x155facu;
}
