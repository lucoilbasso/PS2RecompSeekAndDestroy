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

// Function: entry_001346dc
// Address: 0x1346dc - 0x1346e0
void entry_001346dc_0x1346dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001346dc_0x1346dc");
#endif

    ctx->pc = 0x1346dcu;

    // 0x1346dc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1346dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    ctx->pc = 0x1346e0u;
}
