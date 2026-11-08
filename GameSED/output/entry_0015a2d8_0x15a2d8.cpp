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

// Function: entry_0015a2d8
// Address: 0x15a2d8 - 0x15a2f8
void entry_0015a2d8_0x15a2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a2d8_0x15a2d8");
#endif

    ctx->pc = 0x15a2d8u;

    // 0x15a2d8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x15a2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x15a2dc: 0xace00204  sw          $zero, 0x204($a3)
    ctx->pc = 0x15a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 516), GPR_U32(ctx, 0));
    // 0x15a2e0: 0xace00200  sw          $zero, 0x200($a3)
    ctx->pc = 0x15a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 512), GPR_U32(ctx, 0));
    // 0x15a2e4: 0x24e70208  addiu       $a3, $a3, 0x208
    ctx->pc = 0x15a2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 520));
    // 0x15a2e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x15a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x15a2ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x15a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x15a2f0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x15a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x15a2f4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x15a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x15a2f8u;
}
