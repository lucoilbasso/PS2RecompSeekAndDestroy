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

// Function: entry_0014cfa0
// Address: 0x14cfa0 - 0x14cfa4
void entry_0014cfa0_0x14cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cfa0_0x14cfa0");
#endif

    ctx->pc = 0x14cfa0u;

    // 0x14cfa0: 0xac400240  sw          $zero, 0x240($v0)
    ctx->pc = 0x14cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 0));
    ctx->pc = 0x14cfa4u;
}
