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

// Function: entry_0017a3d8
// Address: 0x17a3d8 - 0x17a3dc
void entry_0017a3d8_0x17a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3d8_0x17a3d8");
#endif

    ctx->pc = 0x17a3d8u;

    // 0x17a3d8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x17a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x17a3dcu;
}
