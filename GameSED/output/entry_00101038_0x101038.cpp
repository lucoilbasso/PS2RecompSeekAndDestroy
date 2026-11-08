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

// Function: entry_00101038
// Address: 0x101038 - 0x1010b0
void entry_00101038_0x101038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101038_0x101038");
#endif

    switch (ctx->pc) {
        case 0x101040u: goto label_101040;
        case 0x101048u: goto label_101048;
        default: break;
    }

    ctx->pc = 0x101038u;

label_101038:
    // 0x101038: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101038u;
    SET_GPR_U32(ctx, 31, 0x101040u);
    ctx->pc = 0x10103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101038u;
    // 0x10103c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101038u, 0x101040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101040u;
label_101040:
    // 0x101040: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101040u;
    SET_GPR_U32(ctx, 31, 0x101048u);
    ctx->pc = 0x101044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101040u;
    // 0x101044: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101040u, 0x101048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101048u;
label_101048:
    // 0x101048: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10104c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x101050: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x101050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x101054: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x101054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x101058: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x101058u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x10105c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x10105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x101060: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x101060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x101064: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x101064u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101068: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x101068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10106c: 0x253302a  slt         $a2, $s2, $s3
    ctx->pc = 0x10106cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x101070: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x101070u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x101074: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x101074u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x101078: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x101078u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x10107c: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x10107cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x101080: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x101080u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x101084: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x101084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x101088: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x101088u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x10108c: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x10108cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x101090: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x101090u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x101094: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x101094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x101098: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x101098u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x10109c: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x10109cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1010a0: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x1010a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x1010a4: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x1010a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1010a8: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1010A8u;
    {
        const bool branch_taken_0x1010a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1010ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010A8u;
        // 0x1010ac: 0xfca20038  sd          $v0, 0x38($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010a8) {
            ctx->pc = 0x101038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101038;
        }
    }
    ctx->pc = 0x1010B0u;
}
