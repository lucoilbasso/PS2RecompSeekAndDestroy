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

// Function: entry_0017fa98
// Address: 0x17fa98 - 0x17fae4
void entry_0017fa98_0x17fa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa98_0x17fa98");
#endif

    ctx->pc = 0x17fa98u;

    // 0x17fa98: 0x85040006  lh          $a0, 0x6($t0)
    ctx->pc = 0x17fa98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x17fa9c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x17fa9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x17faa0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17faa4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17faa8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17faac: 0x12a282b  sltu        $a1, $t1, $t2
    ctx->pc = 0x17faacu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x17fab0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x17fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17fab4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x17fab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17fab8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x17fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x17fabc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x17fabcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x17fac0: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x17fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x17fac4: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x17fac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17fac8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x17fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x17facc: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x17faccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x17fad0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x17fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x17fad4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17fad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17fad8: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x17fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17fadc: 0x91a20006  lbu         $v0, 0x6($t5)
    ctx->pc = 0x17fadcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x17fae0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x17fae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    ctx->pc = 0x17fae4u;
}
