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

// Function: entry_0014f5f8
// Address: 0x14f5f8 - 0x14f5fc
void entry_0014f5f8_0x14f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f5f8_0x14f5f8");
#endif

    ctx->pc = 0x14f5f8u;

    // 0x14f5f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->pc = 0x14f5fcu;
}
