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

// Function: entry_001c7748
// Address: 0x1c7748 - 0x1c77a0
void entry_001c7748_0x1c7748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7748_0x1c7748");
#endif

    switch (ctx->pc) {
        case 0x1c7764u: goto label_1c7764;
        case 0x1c7774u: goto label_1c7774;
        default: break;
    }

    ctx->pc = 0x1c7748u;

label_1c7748:
    // 0x1c7748: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1c7748u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c774c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1c774cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c7750: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c7750u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7754: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1c7754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c7758: 0x7fa60260  sq          $a2, 0x260($sp)
    ctx->pc = 0x1c7758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 6));
    // 0x1c775c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C775Cu;
    SET_GPR_U32(ctx, 31, 0x1C7764u);
    ctx->pc = 0x1C7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C775Cu;
    // 0x1c7760: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C775Cu, 0x1C7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7764u;
label_1c7764:
    // 0x1c7764: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C776Cu;
    SET_GPR_U32(ctx, 31, 0x1C7774u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C776Cu, 0x1C7774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7774u;
label_1c7774:
    // 0x1c7774: 0x2f5182a  slt         $v1, $s7, $s5
    ctx->pc = 0x1c7774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1c7778: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x1c7778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1c777c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c777cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7780: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x1c7780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1c7784: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7784u;
    {
        const bool branch_taken_0x1c7784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7784u;
        // 0x1c7788: 0x7ba60260  lq          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7784) {
            ctx->pc = 0x1C77A4u;
            return;
        }
    }
    ctx->pc = 0x1C778Cu;
    // 0x1c778c: 0x1060ffee  beqz        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C778Cu;
    {
        const bool branch_taken_0x1c778c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C778Cu;
        // 0x1c7790: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c778c) {
            ctx->pc = 0x1C7748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7748;
        }
    }
    ctx->pc = 0x1C7794u;
    // 0x1c7794: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7794u;
    {
        const bool branch_taken_0x1c7794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7794u;
        // 0x1c7798: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7794) {
            ctx->pc = 0x1C77ACu;
            return;
        }
    }
    ctx->pc = 0x1C779Cu;
    // 0x1c779c: 0x0  nop
    ctx->pc = 0x1c779cu;
    // NOP
    ctx->pc = 0x1c77a0u;
}
