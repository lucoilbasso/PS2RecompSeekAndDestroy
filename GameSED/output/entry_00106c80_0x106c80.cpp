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

// Function: entry_00106c80
// Address: 0x106c80 - 0x106cd4
void entry_00106c80_0x106c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c80_0x106c80");
#endif

    ctx->pc = 0x106c80u;

    // 0x106c80: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x106c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x106c84: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x106c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x106c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x106c8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x106c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x106c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106c94: 0x704810e8  pminw       $v0, $v0, $t0
    ctx->pc = 0x106c94u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x106c98: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x106c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x106c9c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x106c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x106ca0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x106ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x106ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x106ca8: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x106ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x106cac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x106cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x106cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106cb4: 0x704810e8  pminw       $v0, $v0, $t0
    ctx->pc = 0x106cb4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x106cb8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x106cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x106cbc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x106cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x106cc0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x106cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106cc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x106cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x106cc8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x106cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x106ccc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x106cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x106cd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x106cd4u;
}
