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

// Function: entry_0012cfa0
// Address: 0x12cfa0 - 0x12cfb0
void entry_0012cfa0_0x12cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cfa0_0x12cfa0");
#endif

    ctx->pc = 0x12cfa0u;

    // 0x12cfa0: 0xae8000c0  sw          $zero, 0xC0($s4)
    ctx->pc = 0x12cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 0));
    // 0x12cfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cfa8: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x12cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x12cfac: 0xae230158  sw          $v1, 0x158($s1)
    ctx->pc = 0x12cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
    ctx->pc = 0x12cfb0u;
}
