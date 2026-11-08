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

// Function: ApUserDebugModeChange__FP7ApcUnit
// Address: 0x156a88 - 0x156ae4
void ApUserDebugModeChange__FP7ApcUnit_0x156a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserDebugModeChange__FP7ApcUnit_0x156a88");
#endif

    ctx->pc = 0x156a88u;

    // 0x156a88: 0x8f8388cc  lw          $v1, -0x7734($gp)
    ctx->pc = 0x156a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
    // 0x156a8c: 0x8f82914c  lw          $v0, -0x6EB4($gp)
    ctx->pc = 0x156a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938956)));
    // 0x156a90: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x156A90u;
    {
        const bool branch_taken_0x156a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x156A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A90u;
        // 0x156a94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a90) {
            ctx->pc = 0x156ADCu;
            goto label_156adc;
        }
    }
    ctx->pc = 0x156A98u;
    // 0x156a98: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x156A98u;
    {
        const bool branch_taken_0x156a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A98u;
        // 0x156a9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a98) {
            ctx->pc = 0x156AC8u;
            goto label_156ac8;
        }
    }
    ctx->pc = 0x156AA0u;
    // 0x156aa0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x156AA0u;
    {
        const bool branch_taken_0x156aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AA0u;
        // 0x156aa4: 0x8f8288cc  lw          $v0, -0x7734($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156aa0) {
            ctx->pc = 0x156AD8u;
            goto label_156ad8;
        }
    }
    ctx->pc = 0x156AA8u;
    // 0x156aa8: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x156AA8u;
    {
        const bool branch_taken_0x156aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x156aa8) {
            ctx->pc = 0x156AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156AA8u;
            // 0x156aac: 0xaf82914c  sw          $v0, -0x6EB4($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938956), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156ADCu;
            goto label_156adc;
        }
    }
    ctx->pc = 0x156AB0u;
    // 0x156ab0: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x156ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x156ab4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x156ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x156ab8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x156ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x156abc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x156abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156ac0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156AC0u;
    {
        const bool branch_taken_0x156ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AC0u;
        // 0x156ac4: 0xac830180  sw          $v1, 0x180($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ac0) {
            ctx->pc = 0x156AD4u;
            goto label_156ad4;
        }
    }
    ctx->pc = 0x156AC8u;
label_156ac8:
    // 0x156ac8: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x156acc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x156accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x156ad0: 0xac820180  sw          $v0, 0x180($a0)
    ctx->pc = 0x156ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 2));
label_156ad4:
    // 0x156ad4: 0x8f8288cc  lw          $v0, -0x7734($gp)
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
label_156ad8:
    // 0x156ad8: 0xaf82914c  sw          $v0, -0x6EB4($gp)
    ctx->pc = 0x156ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938956), GPR_U32(ctx, 2));
label_156adc:
    // 0x156adc: 0x3e00008  jr          $ra
    ctx->pc = 0x156ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156AE4u;
}
