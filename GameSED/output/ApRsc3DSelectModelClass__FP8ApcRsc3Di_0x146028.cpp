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

// Function: ApRsc3DSelectModelClass__FP8ApcRsc3Di
// Address: 0x146028 - 0x146098
void ApRsc3DSelectModelClass__FP8ApcRsc3Di_0x146028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DSelectModelClass__FP8ApcRsc3Di_0x146028");
#endif

    switch (ctx->pc) {
        case 0x146084u: goto label_146084;
        default: break;
    }

    ctx->pc = 0x146028u;

    // 0x146028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14602c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146034: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x146038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14603c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14603Cu;
    {
        const bool branch_taken_0x14603c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x146040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14603Cu;
        // 0x146040: 0x28a30002  slti        $v1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14603c) {
            ctx->pc = 0x146070u;
            goto label_146070;
        }
    }
    ctx->pc = 0x146044u;
    // 0x146044: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x146044u;
    {
        const bool branch_taken_0x146044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146044) {
            ctx->pc = 0x146048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146044u;
            // 0x146048: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146060u;
            goto label_146060;
        }
    }
    ctx->pc = 0x14604Cu;
    // 0x14604c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x14604Cu;
    {
        const bool branch_taken_0x14604c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14604Cu;
        // 0x146050: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14604c) {
            ctx->pc = 0x146088u;
            goto label_146088;
        }
    }
    ctx->pc = 0x146054u;
    // 0x146054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x146054u;
    {
        const bool branch_taken_0x146054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146054u;
        // 0x146058: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146054) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x14605Cu;
    // 0x14605c: 0x0  nop
    ctx->pc = 0x14605cu;
    // NOP
label_146060:
    // 0x146060: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146060u;
    {
        const bool branch_taken_0x146060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x146060) {
            ctx->pc = 0x146064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146060u;
            // 0x146064: 0x8c900058  lw          $s0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146084u;
            goto label_146084;
        }
    }
    ctx->pc = 0x146068u;
    // 0x146068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146068u;
    {
        const bool branch_taken_0x146068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146068u;
        // 0x14606c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146068) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x146070u;
label_146070:
    // 0x146070: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146070u;
    {
        const bool branch_taken_0x146070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146070u;
        // 0x146074: 0x8c900034  lw          $s0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146070) {
            ctx->pc = 0x146084u;
            goto label_146084;
        }
    }
    ctx->pc = 0x146078u;
label_146078:
    // 0x146078: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x146078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x14607c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14607Cu;
    SET_GPR_U32(ctx, 31, 0x146084u);
    ctx->pc = 0x146080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14607Cu;
    // 0x146080: 0x24a56a98  addiu       $a1, $a1, 0x6A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14607Cu, 0x146084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146084u;
label_146084:
    // 0x146084: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146088:
    // 0x146088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14608c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14608cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146090: 0x3e00008  jr          $ra
    ctx->pc = 0x146090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146090u;
        // 0x146094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146098u;
}
