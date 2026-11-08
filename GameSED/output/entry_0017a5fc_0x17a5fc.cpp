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

// Function: entry_0017a5fc
// Address: 0x17a5fc - 0x17a600
void entry_0017a5fc_0x17a5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a5fc_0x17a5fc");
#endif

    ctx->pc = 0x17a5fcu;

    // 0x17a5fc: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x17a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    ctx->pc = 0x17a600u;
}
