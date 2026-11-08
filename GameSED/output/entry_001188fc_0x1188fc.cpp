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

// Function: entry_001188fc
// Address: 0x1188fc - 0x118900
void entry_001188fc_0x1188fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001188fc_0x1188fc");
#endif

    ctx->pc = 0x1188fcu;

    // 0x1188fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1188fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    ctx->pc = 0x118900u;
}
