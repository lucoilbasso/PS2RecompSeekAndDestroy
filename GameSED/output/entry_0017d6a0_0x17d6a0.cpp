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

// Function: entry_0017d6a0
// Address: 0x17d6a0 - 0x17d6b4
void entry_0017d6a0_0x17d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d6a0_0x17d6a0");
#endif

    ctx->pc = 0x17d6a0u;

    // 0x17d6a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17d6a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17d6a8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x17d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x17d6ac: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x17d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x17d6b0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x17d6b4u;
}
