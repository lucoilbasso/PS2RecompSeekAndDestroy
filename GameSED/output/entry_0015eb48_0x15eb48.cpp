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

// Function: entry_0015eb48
// Address: 0x15eb48 - 0x15eb94
void entry_0015eb48_0x15eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb48_0x15eb48");
#endif

    switch (ctx->pc) {
        case 0x15eb50u: goto label_15eb50;
        case 0x15eb5cu: goto label_15eb5c;
        case 0x15eb7cu: goto label_15eb7c;
        default: break;
    }

    ctx->pc = 0x15eb48u;

    // 0x15eb48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EB48u;
    SET_GPR_U32(ctx, 31, 0x15EB50u);
    ctx->pc = 0x15EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB48u;
    // 0x15eb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EB48u, 0x15EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB50u;
label_15eb50:
    // 0x15eb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb54: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EB54u;
    SET_GPR_U32(ctx, 31, 0x15EB5Cu);
    ctx->pc = 0x15EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB54u;
    // 0x15eb58: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EB54u, 0x15EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB5Cu;
label_15eb5c:
    // 0x15eb5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15eb5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb60: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15eb64: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x15eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x15eb68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15eb6c: 0x5064000e  beql        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x15EB6Cu;
    {
        const bool branch_taken_0x15eb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15eb6c) {
            ctx->pc = 0x15EB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB6Cu;
            // 0x15eb70: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EBA8u;
            return;
        }
    }
    ctx->pc = 0x15EB74u;
    // 0x15eb74: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EB74u;
    SET_GPR_U32(ctx, 31, 0x15EB7Cu);
    ctx->pc = 0x15EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB74u;
    // 0x15eb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EB74u, 0x15EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB7Cu;
label_15eb7c:
    // 0x15eb7c: 0x131bc0  sll         $v1, $s3, 15
    ctx->pc = 0x15eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 15));
    // 0x15eb80: 0x1223c0  sll         $a0, $s2, 15
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x15eb84: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15eb84u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15eb88: 0x7082001a  div1        $zero, $a0, $v0
    ctx->pc = 0x15eb88u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x15eb8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15EB8Cu;
    {
        const bool branch_taken_0x15eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb8c) {
            ctx->pc = 0x15EB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB8Cu;
            // 0x15eb90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EB94u;
            return;
        }
    }
    ctx->pc = 0x15EB94u;
}
