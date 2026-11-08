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

// Function: entry_0017b8dc
// Address: 0x17b8dc - 0x17b8e0
void entry_0017b8dc_0x17b8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b8dc_0x17b8dc");
#endif

    ctx->pc = 0x17b8dcu;

    // 0x17b8dc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x17b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x17b8e0u;
}
