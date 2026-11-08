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

// Function: BUtilityMoveColor__FPUcUci
// Address: 0x19f170 - 0x19f1d8
void BUtilityMoveColor__FPUcUci_0x19f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveColor__FPUcUci_0x19f170");
#endif

    ctx->pc = 0x19f170u;

    // 0x19f170: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x19f170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19f174: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x19f174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f178: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19f178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f17c: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x19f17cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x19f180: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x19f180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f184: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F184u;
    {
        const bool branch_taken_0x19f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f184) {
            ctx->pc = 0x19F1A8u;
            goto label_19f1a8;
        }
    }
    ctx->pc = 0x19F18Cu;
    // 0x19f18c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19f18cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f190: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x19f190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19f194: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19f194u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19f198: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19f198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19f19c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19F19Cu;
    {
        const bool branch_taken_0x19f19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F19Cu;
        // 0x19f1a0: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f19c) {
            ctx->pc = 0x19F1C4u;
            goto label_19f1c4;
        }
    }
    ctx->pc = 0x19F1A4u;
    // 0x19f1a4: 0x0  nop
    ctx->pc = 0x19f1a4u;
    // NOP
label_19f1a8:
    // 0x19f1a8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F1A8u;
    {
        const bool branch_taken_0x19f1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1a8) {
            ctx->pc = 0x19F1D0u;
            goto label_19f1d0;
        }
    }
    ctx->pc = 0x19F1B0u;
    // 0x19f1b0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19f1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f1b4: 0xe31023  subu        $v0, $a3, $v1
    ctx->pc = 0x19f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x19f1b8: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19f1b8u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19f1bc: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19f1c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19f1c4:
    // 0x19f1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C8u;
        // 0x19f1cc: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F1D0u;
label_19f1d0:
    // 0x19f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D0u;
        // 0x19f1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F1D8u;
}
