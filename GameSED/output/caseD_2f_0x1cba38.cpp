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

// Function: caseD_2f
// Address: 0x1cba38 - 0x1cba88
void caseD_2f_0x1cba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2f_0x1cba38");
#endif

    switch (ctx->pc) {
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba50u: goto label_1cba50;
        default: break;
    }

    ctx->pc = 0x1cba38u;

    // 0x1cba38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba3c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CBA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA44u);
    ctx->pc = 0x1CBA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA3Cu;
    // 0x1cba40: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CBA3Cu, 0x1CBA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA44u;
label_1cba44:
    // 0x1cba44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba48: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CBA48u;
    SET_GPR_U32(ctx, 31, 0x1CBA50u);
    ctx->pc = 0x1CBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA48u;
    // 0x1cba4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CBA48u, 0x1CBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA50u;
label_1cba50:
    // 0x1cba50: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cba54: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cba58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cba58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba5c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cba60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cba64: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1cba64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cba68: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cba6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cba70: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cba74: 0xa04603fc  sb          $a2, 0x3FC($v0)
    ctx->pc = 0x1cba74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cba78: 0x42823  negu        $a1, $a0
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1cba7c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1cba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1cba80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBA80u;
    {
        const bool branch_taken_0x1cba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA80u;
        // 0x1cba84: 0xfc650020  sd          $a1, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba80) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CBA88u;
}
