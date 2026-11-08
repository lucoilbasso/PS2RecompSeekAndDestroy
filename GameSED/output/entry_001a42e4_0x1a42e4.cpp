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

// Function: entry_001a42e4
// Address: 0x1a42e4 - 0x1a42e8
void entry_001a42e4_0x1a42e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a42e4_0x1a42e4");
#endif

    ctx->pc = 0x1a42e4u;

    // 0x1a42e4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1a42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x1a42e8u;
}
