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

// Function: entry_0018b9c0
// Address: 0x18b9c0 - 0x18b9c4
void entry_0018b9c0_0x18b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b9c0_0x18b9c0");
#endif

    ctx->pc = 0x18b9c0u;

    // 0x18b9c0: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x18b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    ctx->pc = 0x18b9c4u;
}
