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

// Function: entry_00174aa0
// Address: 0x174aa0 - 0x174af8
void entry_00174aa0_0x174aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174aa0_0x174aa0");
#endif

    switch (ctx->pc) {
        case 0x174ac4u: goto label_174ac4;
        case 0x174ae0u: goto label_174ae0;
        case 0x174ae8u: goto label_174ae8;
        default: break;
    }

    ctx->pc = 0x174aa0u;

    // 0x174aa0: 0x8f828c10  lw          $v0, -0x73F0($gp)
    ctx->pc = 0x174aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x174aa4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x174AA4u;
    {
        const bool branch_taken_0x174aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AA4u;
        // 0x174aa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aa4) {
            ctx->pc = 0x174AF8u;
            return;
        }
    }
    ctx->pc = 0x174AACu;
    // 0x174aac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x174aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174ab0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174AB0u;
    {
        const bool branch_taken_0x174ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AB0u;
        // 0x174ab4: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ab0) {
            ctx->pc = 0x174AF8u;
            return;
        }
    }
    ctx->pc = 0x174AB8u;
    // 0x174ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174abc: 0xc05d044  jal         func_174110
    ctx->pc = 0x174ABCu;
    SET_GPR_U32(ctx, 31, 0x174AC4u);
    ctx->pc = 0x174AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174ABCu;
    // 0x174ac0: 0x248412d0  addiu       $a0, $a0, 0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174110u, 0x174ABCu, 0x174AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AC4u;
label_174ac4:
    // 0x174ac4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x174ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x174ac8: 0x8f858bdc  lw          $a1, -0x7424($gp)
    ctx->pc = 0x174ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937564)));
    // 0x174acc: 0x24841420  addiu       $a0, $a0, 0x1420
    ctx->pc = 0x174accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5152));
    // 0x174ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ad8: 0xc05c7b0  jal         func_171EC0
    ctx->pc = 0x174AD8u;
    SET_GPR_U32(ctx, 31, 0x174AE0u);
    ctx->pc = 0x174ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AD8u;
    // 0x174adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171EC0u, 0x174AD8u, 0x174AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AE0u;
label_174ae0:
    // 0x174ae0: 0xc05c7c4  jal         func_171F10
    ctx->pc = 0x174AE0u;
    SET_GPR_U32(ctx, 31, 0x174AE8u);
    ctx->pc = 0x174AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AE0u;
    // 0x174ae4: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F10u, 0x174AE0u, 0x174AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AE8u;
label_174ae8:
    // 0x174ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174aec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x174AECu;
    {
        const bool branch_taken_0x174aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AECu;
        // 0x174af0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aec) {
            ctx->pc = 0x174B64u;
            return;
        }
    }
    ctx->pc = 0x174AF4u;
    // 0x174af4: 0x0  nop
    ctx->pc = 0x174af4u;
    // NOP
    ctx->pc = 0x174af8u;
}
