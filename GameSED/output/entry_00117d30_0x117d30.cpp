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

// Function: entry_00117d30
// Address: 0x117d30 - 0x117d54
void entry_00117d30_0x117d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117d30_0x117d30");
#endif

    ctx->pc = 0x117d30u;

    // 0x117d30: 0x1662021  addu        $a0, $t3, $a2
    ctx->pc = 0x117d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x117d34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x117d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x117d38: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x117d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117d3c: 0x28c50005  slti        $a1, $a2, 0x5
    ctx->pc = 0x117d3cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x117d40: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x117d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x117d44: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x117d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x117d48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x117d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x117d4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117d50: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x117d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    ctx->pc = 0x117d54u;
}
