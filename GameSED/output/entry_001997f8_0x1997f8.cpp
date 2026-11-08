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

// Function: entry_001997f8
// Address: 0x1997f8 - 0x199830
void entry_001997f8_0x1997f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001997f8_0x1997f8");
#endif

    switch (ctx->pc) {
        case 0x199808u: goto label_199808;
        case 0x199824u: goto label_199824;
        default: break;
    }

    ctx->pc = 0x1997f8u;

label_1997f8:
    // 0x1997f8: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x1997f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
label_1997fc:
    // 0x1997fc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_199800:
    // 0x199800: 0xc068436  jal         func_1A10D8
label_199804:
    if (ctx->pc == 0x199804u) {
        ctx->pc = 0x199804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199800u;
        // 0x199804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199808u;
        goto label_199808;
    }
    ctx->pc = 0x199800u;
    SET_GPR_U32(ctx, 31, 0x199808u);
    ctx->pc = 0x199804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199800u;
    // 0x199804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x199800u, 0x199808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199808u;
label_199808:
    // 0x199808: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19980c:
    // 0x19980c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199810:
    // 0x199810: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x199810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_199814:
    // 0x199814: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x199814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_199818:
    // 0x199818: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x199818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19981c:
    // 0x19981c: 0x60f809  jalr        $v1
label_199820:
    if (ctx->pc == 0x199820u) {
        ctx->pc = 0x199820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19981Cu;
        // 0x199820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199824u;
        goto label_199824;
    }
    ctx->pc = 0x19981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x199824u);
        ctx->pc = 0x199820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19981Cu;
        // 0x199820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19981Cu, 0x199824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199824u;
label_199824:
    // 0x199824: 0x5620fff4  bnel        $s1, $zero, . + 4 + (-0xC << 2)
label_199828:
    if (ctx->pc == 0x199828u) {
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19982Cu;
        goto label_19982c;
    }
    ctx->pc = 0x199824u;
    {
        const bool branch_taken_0x199824 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x199824) {
            ctx->pc = 0x199828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199824u;
            // 0x199828: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1997F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1997f8;
        }
    }
    ctx->pc = 0x19982Cu;
label_19982c:
    // 0x19982c: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x19982cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    ctx->pc = 0x199830u;
}
