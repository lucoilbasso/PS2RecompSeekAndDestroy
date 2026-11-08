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

// Function: entry_0013ff50
// Address: 0x13ff50 - 0x13ff54
void entry_0013ff50_0x13ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff50_0x13ff50");
#endif

    ctx->pc = 0x13ff50u;

    // 0x13ff50: 0xae400198  sw          $zero, 0x198($s2)
    ctx->pc = 0x13ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
    ctx->pc = 0x13ff54u;
}
