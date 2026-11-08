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

// Function: entry_0010fcc0
// Address: 0x10fcc0 - 0x10fcc4
void entry_0010fcc0_0x10fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fcc0_0x10fcc0");
#endif

    ctx->pc = 0x10fcc0u;

    // 0x10fcc0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x10fcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10fcc4u;
}
