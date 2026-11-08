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

// Function: entry_001431a4
// Address: 0x1431a4 - 0x1431a8
void entry_001431a4_0x1431a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001431a4_0x1431a4");
#endif

    ctx->pc = 0x1431a4u;

    // 0x1431a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1431a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1431a8u;
}
