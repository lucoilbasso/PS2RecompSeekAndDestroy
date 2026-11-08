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

// Function: entry_001738d8
// Address: 0x1738d8 - 0x1738e8
void entry_001738d8_0x1738d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001738d8_0x1738d8");
#endif

    ctx->pc = 0x1738d8u;

    // 0x1738d8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1738d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1738dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1738dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1738e0: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1738e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1738e4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1738e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    ctx->pc = 0x1738e8u;
}
