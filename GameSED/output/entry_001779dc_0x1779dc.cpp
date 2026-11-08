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

// Function: entry_001779dc
// Address: 0x1779dc - 0x1779e0
void entry_001779dc_0x1779dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001779dc_0x1779dc");
#endif

    ctx->pc = 0x1779dcu;

    // 0x1779dc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1779dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1779e0u;
}
