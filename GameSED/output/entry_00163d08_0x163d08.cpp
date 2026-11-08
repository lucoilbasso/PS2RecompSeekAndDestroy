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

// Function: entry_00163d08
// Address: 0x163d08 - 0x163d24
void entry_00163d08_0x163d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163d08_0x163d08");
#endif

    ctx->pc = 0x163d08u;

    // 0x163d08: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x163d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x163d0c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x163d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x163d10: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x163d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x163d14: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x163d14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x163d18: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x163d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x163d1c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x163d1cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x163d20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x163d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x163d24u;
}
