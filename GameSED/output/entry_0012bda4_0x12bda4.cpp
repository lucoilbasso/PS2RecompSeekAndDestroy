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

// Function: entry_0012bda4
// Address: 0x12bda4 - 0x12bdb0
void entry_0012bda4_0x12bda4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bda4_0x12bda4");
#endif

    ctx->pc = 0x12bda4u;

    // 0x12bda4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bda8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x12bda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12bdac: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x12bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    ctx->pc = 0x12bdb0u;
}
