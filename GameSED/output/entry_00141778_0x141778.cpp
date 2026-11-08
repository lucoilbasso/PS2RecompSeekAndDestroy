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

// Function: entry_00141778
// Address: 0x141778 - 0x141798
void entry_00141778_0x141778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141778_0x141778");
#endif

    ctx->pc = 0x141778u;

    // 0x141778: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14177c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14177cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141780: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x141780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x141784: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x141784u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x141788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14178c: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x14178cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x141790: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x141790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x141794: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->pc = 0x141798u;
}
