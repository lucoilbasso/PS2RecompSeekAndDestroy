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

// Function: entry_001998b0
// Address: 0x1998b0 - 0x1998e4
void entry_001998b0_0x1998b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001998b0_0x1998b0");
#endif

    switch (ctx->pc) {
        case 0x1998c0u: goto label_1998c0;
        case 0x1998dcu: goto label_1998dc;
        default: break;
    }

    ctx->pc = 0x1998b0u;

label_1998b0:
    // 0x1998b0: 0x2644007c  addiu       $a0, $s2, 0x7C
    ctx->pc = 0x1998b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
label_1998b4:
    // 0x1998b4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1998b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1998b8:
    // 0x1998b8: 0xc068436  jal         func_1A10D8
label_1998bc:
    if (ctx->pc == 0x1998BCu) {
        ctx->pc = 0x1998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998B8u;
        // 0x1998bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998C0u;
        goto label_1998c0;
    }
    ctx->pc = 0x1998B8u;
    SET_GPR_U32(ctx, 31, 0x1998C0u);
    ctx->pc = 0x1998BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998B8u;
    // 0x1998bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1998B8u, 0x1998C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998C0u;
label_1998c0:
    // 0x1998c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1998c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1998c4:
    // 0x1998c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1998c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998c8:
    // 0x1998c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1998cc:
    // 0x1998cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1998ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1998d0:
    // 0x1998d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1998d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1998d4:
    // 0x1998d4: 0x60f809  jalr        $v1
label_1998d8:
    if (ctx->pc == 0x1998D8u) {
        ctx->pc = 0x1998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998D4u;
        // 0x1998d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998DCu;
        goto label_1998dc;
    }
    ctx->pc = 0x1998D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1998DCu);
        ctx->pc = 0x1998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998D4u;
        // 0x1998d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1998D4u, 0x1998DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1998DCu;
label_1998dc:
    // 0x1998dc: 0x5620fff4  bnel        $s1, $zero, . + 4 + (-0xC << 2)
label_1998e0:
    if (ctx->pc == 0x1998E0u) {
        ctx->pc = 0x1998E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998DCu;
        // 0x1998e0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998E4u;
        goto label_fallthrough_0x1998dc;
    }
    ctx->pc = 0x1998DCu;
    {
        const bool branch_taken_0x1998dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1998dc) {
            ctx->pc = 0x1998E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1998DCu;
            // 0x1998e0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1998B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1998b0;
        }
    }
label_fallthrough_0x1998dc:
    ctx->pc = 0x1998E4u;
}
