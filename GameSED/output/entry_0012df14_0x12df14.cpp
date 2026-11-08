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

// Function: entry_0012df14
// Address: 0x12df14 - 0x12df18
void entry_0012df14_0x12df14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012df14_0x12df14");
#endif

    ctx->pc = 0x12df14u;

    // 0x12df14: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x12df14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    ctx->pc = 0x12df18u;
}
