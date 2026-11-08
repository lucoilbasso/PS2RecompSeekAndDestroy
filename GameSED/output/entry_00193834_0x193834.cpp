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

// Function: entry_00193834
// Address: 0x193834 - 0x193838
void entry_00193834_0x193834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193834_0x193834");
#endif

    ctx->pc = 0x193834u;

    // 0x193834: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x193834u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x193838u;
}
