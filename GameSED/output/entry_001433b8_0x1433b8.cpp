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

// Function: entry_001433b8
// Address: 0x1433b8 - 0x1433c8
void entry_001433b8_0x1433b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001433b8_0x1433b8");
#endif

    ctx->pc = 0x1433b8u;

    // 0x1433b8: 0x26500024  addiu       $s0, $s2, 0x24
    ctx->pc = 0x1433b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x1433bc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1433bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1433c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1433c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1433c4: 0x0  nop
    ctx->pc = 0x1433c4u;
    // NOP
    ctx->pc = 0x1433c8u;
}
