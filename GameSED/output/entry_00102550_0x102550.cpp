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

// Function: entry_00102550
// Address: 0x102550 - 0x102554
void entry_00102550_0x102550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102550_0x102550");
#endif

    ctx->pc = 0x102550u;

    // 0x102550: 0xaf919110  sw          $s1, -0x6EF0($gp)
    ctx->pc = 0x102550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 17));
    ctx->pc = 0x102554u;
}
