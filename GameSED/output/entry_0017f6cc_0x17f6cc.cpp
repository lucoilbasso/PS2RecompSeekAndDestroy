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

// Function: entry_0017f6cc
// Address: 0x17f6cc - 0x17f6d0
void entry_0017f6cc_0x17f6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6cc_0x17f6cc");
#endif

    ctx->pc = 0x17f6ccu;

    // 0x17f6cc: 0xacc70028  sw          $a3, 0x28($a2)
    ctx->pc = 0x17f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 7));
    ctx->pc = 0x17f6d0u;
}
