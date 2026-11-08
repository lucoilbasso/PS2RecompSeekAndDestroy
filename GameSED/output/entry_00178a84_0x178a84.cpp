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

// Function: entry_00178a84
// Address: 0x178a84 - 0x178a8c
void entry_00178a84_0x178a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178a84_0x178a84");
#endif

    ctx->pc = 0x178a84u;

    // 0x178a84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178a88: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x178a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
    ctx->pc = 0x178a8cu;
}
