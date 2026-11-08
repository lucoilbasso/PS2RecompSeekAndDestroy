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

// Function: voBufIncCount
// Address: 0x173d80 - 0x173df0
void voBufIncCount_0x173d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufIncCount_0x173d80");
#endif

    switch (ctx->pc) {
        case 0x173d94u: goto label_173d94;
        default: break;
    }

    ctx->pc = 0x173d80u;

    // 0x173d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173d8c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x173D8Cu;
    SET_GPR_U32(ctx, 31, 0x173D94u);
    ctx->pc = 0x173D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D8Cu;
    // 0x173d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x173D8Cu, 0x173D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D94u;
label_173d94:
    // 0x173d94: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x173d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x173d98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173d9c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x173d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x173da0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x173da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173da8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173dac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173db0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x173db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x173db4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x173db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x173db8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x173db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x173dbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173dc0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x173dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x173dc4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x173DC4u;
    {
        const bool branch_taken_0x173dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173dc4) {
            ctx->pc = 0x173DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173DC4u;
            // 0x173dc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x173DCCu;
            goto label_173dcc;
        }
    }
    ctx->pc = 0x173DCCu;
label_173dcc:
    // 0x173dcc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x173dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x173dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x173dd8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x173dd8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x173ddc: 0x1810  mfhi        $v1
    ctx->pc = 0x173ddcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x173de0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x173de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x173de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173de8: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x173DE8u;
    ctx->pc = 0x173DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DE8u;
    // 0x173dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x173DF0u;
}
