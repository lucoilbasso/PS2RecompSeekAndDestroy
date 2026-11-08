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

// Function: entry_001d48a8
// Address: 0x1d48a8 - 0x1d48b0
void entry_001d48a8_0x1d48a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48a8_0x1d48a8");
#endif

    ctx->pc = 0x1d48a8u;

    // 0x1d48a8: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x1d48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x1d48ac: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x1d48acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
    ctx->pc = 0x1d48b0u;
}
