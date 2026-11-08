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

// Function: entry_0016efa4
// Address: 0x16efa4 - 0x16efa8
void entry_0016efa4_0x16efa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016efa4_0x16efa4");
#endif

    ctx->pc = 0x16efa4u;

    // 0x16efa4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x16efa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16efa8u;
}
