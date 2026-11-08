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

// Function: entry_00171d24
// Address: 0x171d24 - 0x171d28
void entry_00171d24_0x171d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d24_0x171d24");
#endif

    ctx->pc = 0x171d24u;

    // 0x171d24: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x171d24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    ctx->pc = 0x171d28u;
}
