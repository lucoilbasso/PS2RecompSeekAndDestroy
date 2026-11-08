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

// Function: entry_0014e8a0
// Address: 0x14e8a0 - 0x14e8c0
void entry_0014e8a0_0x14e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e8a0_0x14e8a0");
#endif

    ctx->pc = 0x14e8a0u;

    // 0x14e8a0: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x14e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x14e8a4: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x14e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x14e8a8: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x14e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x14e8ac: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x14e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x14e8b0: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x14e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
    // 0x14e8b4: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x14e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
    // 0x14e8b8: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x14e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
    // 0x14e8bc: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x14e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x14e8c0u;
}
