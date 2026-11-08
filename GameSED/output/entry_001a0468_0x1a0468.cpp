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

// Function: entry_001a0468
// Address: 0x1a0468 - 0x1a04b0
void entry_001a0468_0x1a0468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0468_0x1a0468");
#endif

    ctx->pc = 0x1a0468u;

    // 0x1a0468: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a046c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a046cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0470: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0474: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1a0474u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1a0478: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1a0478u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a047c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1a047cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a0480: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x1a0484: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0488: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1a048c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a048cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0494: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1a0494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a0498: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1a0498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1a049c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1a049cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1a04a0: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a04a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
    // 0x1a04a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1a04a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a04a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a04a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a04ac: 0xe81024  and         $v0, $a3, $t0
    ctx->pc = 0x1a04acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    ctx->pc = 0x1a04b0u;
}
