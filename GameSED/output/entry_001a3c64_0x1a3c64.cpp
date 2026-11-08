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

// Function: entry_001a3c64
// Address: 0x1a3c64 - 0x1a3c7c
void entry_001a3c64_0x1a3c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c64_0x1a3c64");
#endif

    ctx->pc = 0x1a3c64u;

    // 0x1a3c64: 0x84a30016  lh          $v1, 0x16($a1)
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x1a3c68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a3c6c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a3c70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3c74: 0xa4a20016  sh          $v0, 0x16($a1)
    ctx->pc = 0x1a3c74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3c78: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x1a3c7cu;
}
