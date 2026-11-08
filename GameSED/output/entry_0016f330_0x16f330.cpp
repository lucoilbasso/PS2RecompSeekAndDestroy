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

// Function: entry_0016f330
// Address: 0x16f330 - 0x16f334
void entry_0016f330_0x16f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f330_0x16f330");
#endif

    ctx->pc = 0x16f330u;

    // 0x16f330: 0xffa501c8  sd          $a1, 0x1C8($sp)
    ctx->pc = 0x16f330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 5));
    ctx->pc = 0x16f334u;
}
