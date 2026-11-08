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

// Function: entry_001490cc
// Address: 0x1490cc - 0x1490d0
void entry_001490cc_0x1490cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001490cc_0x1490cc");
#endif

    ctx->pc = 0x1490ccu;

    // 0x1490cc: 0xaca304f0  sw          $v1, 0x4F0($a1)
    ctx->pc = 0x1490ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1264), GPR_U32(ctx, 3));
    ctx->pc = 0x1490d0u;
}
