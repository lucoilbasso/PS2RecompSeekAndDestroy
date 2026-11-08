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

// Function: entry_0017fa08
// Address: 0x17fa08 - 0x17fa30
void entry_0017fa08_0x17fa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa08_0x17fa08");
#endif

    ctx->pc = 0x17fa08u;

    // 0x17fa08: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x17fa08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17fa0c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17fa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17fa10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fa14: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17fa18: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x17fa18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fa1c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x17fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x17fa20: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17fa20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17fa24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17fa28: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17fa2c: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x17fa2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    ctx->pc = 0x17fa30u;
}
