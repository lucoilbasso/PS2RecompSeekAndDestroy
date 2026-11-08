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

// Function: entry_001db1c4
// Address: 0x1db1c4 - 0x1db1cc
void entry_001db1c4_0x1db1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db1c4_0x1db1c4");
#endif

    ctx->pc = 0x1db1c4u;

    // 0x1db1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1c8: 0xae031268  sw          $v1, 0x1268($s0)
    ctx->pc = 0x1db1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 3));
    ctx->pc = 0x1db1ccu;
}
