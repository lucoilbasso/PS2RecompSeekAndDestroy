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

// Function: entry_0018662c
// Address: 0x18662c - 0x186630
void entry_0018662c_0x18662c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018662c_0x18662c");
#endif

    ctx->pc = 0x18662cu;

    // 0x18662c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x18662cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x186630u;
}
