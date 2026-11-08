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

// Function: entry_00197718
// Address: 0x197718 - 0x19771c
void entry_00197718_0x197718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197718_0x197718");
#endif

    ctx->pc = 0x197718u;

    // 0x197718: 0xad28002c  sw          $t0, 0x2C($t1)
    ctx->pc = 0x197718u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 8));
    ctx->pc = 0x19771cu;
}
