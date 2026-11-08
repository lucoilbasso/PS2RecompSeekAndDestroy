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

// Function: entry_0017ae94
// Address: 0x17ae94 - 0x17ae98
void entry_0017ae94_0x17ae94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ae94_0x17ae94");
#endif

    ctx->pc = 0x17ae94u;

    // 0x17ae94: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x17ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    ctx->pc = 0x17ae98u;
}
