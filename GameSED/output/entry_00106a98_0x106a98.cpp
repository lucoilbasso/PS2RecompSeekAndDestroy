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

// Function: entry_00106a98
// Address: 0x106a98 - 0x106a9c
void entry_00106a98_0x106a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106a98_0x106a98");
#endif

    ctx->pc = 0x106a98u;

    // 0x106a98: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x106a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x106a9cu;
}
