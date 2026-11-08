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

// Function: entry_001d48a0
// Address: 0x1d48a0 - 0x1d48a8
void entry_001d48a0_0x1d48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48a0_0x1d48a0");
#endif

    ctx->pc = 0x1d48a0u;

    // 0x1d48a0: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x1d48a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x1d48a4: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x1d48a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x1d48a8u;
}
