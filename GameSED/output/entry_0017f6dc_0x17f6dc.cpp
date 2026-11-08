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

// Function: entry_0017f6dc
// Address: 0x17f6dc - 0x17f6e0
void entry_0017f6dc_0x17f6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6dc_0x17f6dc");
#endif

    ctx->pc = 0x17f6dcu;

    // 0x17f6dc: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x17f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    ctx->pc = 0x17f6e0u;
}
