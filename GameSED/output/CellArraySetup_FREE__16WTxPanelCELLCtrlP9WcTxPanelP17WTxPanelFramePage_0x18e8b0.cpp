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

// Function: CellArraySetup_FREE__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePage
// Address: 0x18e8b0 - 0x18e90c
void CellArraySetup_FREE__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePage_0x18e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CellArraySetup_FREE__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePage_0x18e8b0");
#endif

    switch (ctx->pc) {
        case 0x18e8f8u: goto label_18e8f8;
        default: break;
    }

    ctx->pc = 0x18e8b0u;

    // 0x18e8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e8b4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x18e8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18e8c4: 0x8c680048  lw          $t0, 0x48($v1)
    ctx->pc = 0x18e8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x18e8c8: 0x84690014  lh          $t1, 0x14($v1)
    ctx->pc = 0x18e8c8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x18e8cc: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18E8CCu;
    {
        const bool branch_taken_0x18e8cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8cc) {
            ctx->pc = 0x18E8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E8CCu;
            // 0x18e8d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E8D4u;
            goto label_18e8d4;
        }
    }
    ctx->pc = 0x18E8D4u;
label_18e8d4:
    // 0x18e8d4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x18e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x18e8d8: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x18e8d8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18e8dc: 0x84670016  lh          $a3, 0x16($v1)
    ctx->pc = 0x18e8dcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x18e8e0: 0x4812  mflo        $t1
    ctx->pc = 0x18e8e0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x18e8e4: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x18e8e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18e8e8: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x18e8e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8ec: 0x3812  mflo        $a3
    ctx->pc = 0x18e8ecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x18e8f0: 0xc063342  jal         func_18CD08
    ctx->pc = 0x18E8F0u;
    SET_GPR_U32(ctx, 31, 0x18E8F8u);
    ctx->pc = 0x18E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8F0u;
    // 0x18e8f4: 0x1273818  mult        $a3, $t1, $a3 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD08u, 0x18E8F0u, 0x18E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8F8u;
label_18e8f8:
    // 0x18e8f8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x18e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x18e8fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e904: 0x3e00008  jr          $ra
    ctx->pc = 0x18E904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E904u;
        // 0x18e908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E90Cu;
}
