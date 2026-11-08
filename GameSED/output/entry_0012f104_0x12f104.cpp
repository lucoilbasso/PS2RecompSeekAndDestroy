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

// Function: entry_0012f104
// Address: 0x12f104 - 0x12f110
void entry_0012f104_0x12f104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f104_0x12f104");
#endif

    ctx->pc = 0x12f104u;

    // 0x12f104: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x12f104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x12f108: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12f108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12f10c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x12f110u;
}
