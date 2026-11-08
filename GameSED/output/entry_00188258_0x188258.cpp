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

// Function: entry_00188258
// Address: 0x188258 - 0x188288
void entry_00188258_0x188258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188258_0x188258");
#endif

    ctx->pc = 0x188258u;

    // 0x188258: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x188258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x18825c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x18825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x188260: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x188260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x188264: 0x8e83015c  lw          $v1, 0x15C($s4)
    ctx->pc = 0x188264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x188268: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x188268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x18826c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x18826cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x188270: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x188270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x188274: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x188278: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x188278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18827c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x188280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188284: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->pc = 0x188288u;
}
