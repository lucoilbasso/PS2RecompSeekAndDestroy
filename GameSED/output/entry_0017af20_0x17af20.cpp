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

// Function: entry_0017af20
// Address: 0x17af20 - 0x17af24
void entry_0017af20_0x17af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017af20_0x17af20");
#endif

    ctx->pc = 0x17af20u;

    // 0x17af20: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x17af20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    ctx->pc = 0x17af24u;
}
