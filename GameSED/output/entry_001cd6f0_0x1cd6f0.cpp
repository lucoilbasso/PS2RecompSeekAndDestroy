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

// Function: entry_001cd6f0
// Address: 0x1cd6f0 - 0x1cd70c
void entry_001cd6f0_0x1cd6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd6f0_0x1cd6f0");
#endif

    ctx->pc = 0x1cd6f0u;

    // 0x1cd6f0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1cd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1cd6f4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1cd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1cd6f8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cd6fc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1cd6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1cd700: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1cd704: 0xace300d0  sw          $v1, 0xD0($a3)
    ctx->pc = 0x1cd704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 208), GPR_U32(ctx, 3));
    // 0x1cd708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cd70cu;
}
