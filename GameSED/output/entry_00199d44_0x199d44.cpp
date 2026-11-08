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

// Function: entry_00199d44
// Address: 0x199d44 - 0x199d64
void entry_00199d44_0x199d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d44_0x199d44");
#endif

    switch (ctx->pc) {
        case 0x199d60u: goto label_199d60;
        default: break;
    }

    ctx->pc = 0x199d44u;

label_199d44:
    // 0x199d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_199d48:
    // 0x199d48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x199d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_199d4c:
    // 0x199d4c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x199d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_199d50:
    // 0x199d50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_199d54:
    if (ctx->pc == 0x199D54u) {
        ctx->pc = 0x199D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D50u;
        // 0x199d54: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D58u;
        goto label_199d58;
    }
    ctx->pc = 0x199D50u;
    {
        const bool branch_taken_0x199d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d50) {
            ctx->pc = 0x199D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199D50u;
            // 0x199d54: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199D64u;
            return;
        }
    }
    ctx->pc = 0x199D58u;
label_199d58:
    // 0x199d58: 0x40f809  jalr        $v0
label_199d5c:
    if (ctx->pc == 0x199D5Cu) {
        ctx->pc = 0x199D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D58u;
        // 0x199d5c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D60u;
        goto label_199d60;
    }
    ctx->pc = 0x199D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199D60u);
        ctx->pc = 0x199D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D58u;
        // 0x199d5c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199D58u, 0x199D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199D60u;
label_199d60:
    // 0x199d60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x199d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x199d64u;
}
