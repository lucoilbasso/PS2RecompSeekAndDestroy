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

// Function: entry_0012df10
// Address: 0x12df10 - 0x12df14
void entry_0012df10_0x12df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012df10_0x12df10");
#endif

    ctx->pc = 0x12df10u;

    // 0x12df10: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x12df10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x12df14u;
}
