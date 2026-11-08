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

// Function: entry_0017e320
// Address: 0x17e320 - 0x17e328
void entry_0017e320_0x17e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e320_0x17e320");
#endif

    ctx->pc = 0x17e320u;

    // 0x17e320: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x17e320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17e324: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x17e324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x17e328u;
}
