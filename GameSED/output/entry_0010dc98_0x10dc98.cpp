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

// Function: entry_0010dc98
// Address: 0x10dc98 - 0x10dc9c
void entry_0010dc98_0x10dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc98_0x10dc98");
#endif

    ctx->pc = 0x10dc98u;

    // 0x10dc98: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x10dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10dc9cu;
}
