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

// Function: iopGetArea
// Address: 0x171370 - 0x171418
void iopGetArea_0x171370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iopGetArea_0x171370");
#endif

    ctx->pc = 0x171370u;

    // 0x171370: 0x8d030048  lw          $v1, 0x48($t0)
    ctx->pc = 0x171370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x171374: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x171374u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171378: 0x8d0a004c  lw          $t2, 0x4C($t0)
    ctx->pc = 0x171378u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x17137c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x17137cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171380: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x171380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x171384: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x171384u;
    {
        const bool branch_taken_0x171384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171384) {
            ctx->pc = 0x171388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171384u;
            // 0x171388: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17138Cu;
            goto label_17138c;
        }
    }
    ctx->pc = 0x17138Cu;
label_17138c:
    // 0x17138c: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x17138cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x171390: 0x6a2823  subu        $a1, $v1, $t2
    ctx->pc = 0x171390u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x171394: 0x2529fc00  addiu       $t1, $t1, -0x400
    ctx->pc = 0x171394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966272));
    // 0x171398: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x171398u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17139c: 0x1010  mfhi        $v0
    ctx->pc = 0x17139cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1713a0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1713a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713a4: 0x252403ff  addiu       $a0, $t1, 0x3FF
    ctx->pc = 0x1713a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x1713a8: 0x29220000  slti        $v0, $t1, 0x0
    ctx->pc = 0x1713a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1713ac: 0x82480b  movn        $t1, $a0, $v0
    ctx->pc = 0x1713acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
    // 0x1713b0: 0x91a83  sra         $v1, $t1, 10
    ctx->pc = 0x1713b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 10));
    // 0x1713b4: 0x34a80  sll         $t1, $v1, 10
    ctx->pc = 0x1713b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1713b8: 0xa9282a  slt         $a1, $a1, $t1
    ctx->pc = 0x1713b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1713bc: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1713BCu;
    {
        const bool branch_taken_0x1713bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713BCu;
        // 0x1713c0: 0x8d020044  lw          $v0, 0x44($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713bc) {
            ctx->pc = 0x1713E0u;
            goto label_1713e0;
        }
    }
    ctx->pc = 0x1713C4u;
    // 0x1713c4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1713c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1713c8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x1713c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x1713cc: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x1713ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x1713d0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1713d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1713d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1713D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1713D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713D4u;
        // 0x1713d8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1713D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1713DCu;
    // 0x1713dc: 0x0  nop
    ctx->pc = 0x1713dcu;
    // NOP
label_1713e0:
    // 0x1713e0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1713e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1713e4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x1713e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x1713e8: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x1713e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x1713ec: 0x8d030048  lw          $v1, 0x48($t0)
    ctx->pc = 0x1713ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x1713f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1713f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1713f4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1713f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1713f8: 0x8d020044  lw          $v0, 0x44($t0)
    ctx->pc = 0x1713f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x1713fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1713fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x171400: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x171400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x171404: 0x8d020048  lw          $v0, 0x48($t0)
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x171408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x171408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17140c: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x17140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x171410: 0x3e00008  jr          $ra
    ctx->pc = 0x171410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171410u;
        // 0x171414: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171418u;
}
