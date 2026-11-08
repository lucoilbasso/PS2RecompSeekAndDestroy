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

// Function: entry_0019f720
// Address: 0x19f720 - 0x19f72c
void entry_0019f720_0x19f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f720_0x19f720");
#endif

    ctx->pc = 0x19f720u;

    // 0x19f720: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x19f720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x19f724: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x19f724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x19f728: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x19f728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    ctx->pc = 0x19f72cu;
}
