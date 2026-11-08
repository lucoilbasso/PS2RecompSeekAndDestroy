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

// Function: entry_001713cc
// Address: 0x1713cc - 0x1713d0
void entry_001713cc_0x1713cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001713cc_0x1713cc");
#endif

    ctx->pc = 0x1713ccu;

    // 0x1713cc: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x1713ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    ctx->pc = 0x1713d0u;
}
