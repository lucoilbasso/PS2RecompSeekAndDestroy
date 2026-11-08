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

// Function: __tf8WcStrobj
// Address: 0x1e0310 - 0x1e0360
void ps2___tf8WcStrobj_0x1e0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8WcStrobj_0x1e0310");
#endif

    switch (ctx->pc) {
        case 0x1e0334u: goto label_1e0334;
        case 0x1e034cu: goto label_1e034c;
        default: break;
    }

    ctx->pc = 0x1e0310u;

    // 0x1e0310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0314: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e0314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e0318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e031c: 0x24501c80  addiu       $s0, $v0, 0x1C80
    ctx->pc = 0x1e031cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7296));
    // 0x1e0320: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0320u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411C80u));
    // 0x1e0324: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0324u;
    {
        const bool branch_taken_0x1e0324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0324u;
        // 0x1e0328: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0324) {
            ctx->pc = 0x1E034Cu;
            goto label_1e034c;
        }
    }
    ctx->pc = 0x1E032Cu;
    // 0x1e032c: 0xc077e40  jal         func_1DF900
    ctx->pc = 0x1E032Cu;
    SET_GPR_U32(ctx, 31, 0x1E0334u);
    ctx->pc = 0x1DF900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF900u, 0x1E032Cu, 0x1E0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0334u;
label_1e0334:
    // 0x1e0334: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e0334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e0338: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1e0338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1e033c: 0x24a583a8  addiu       $a1, $a1, -0x7C58
    ctx->pc = 0x1e033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935464));
    // 0x1e0340: 0x24c61c40  addiu       $a2, $a2, 0x1C40
    ctx->pc = 0x1e0340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7232));
    // 0x1e0344: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E0344u;
    SET_GPR_U32(ctx, 31, 0x1E034Cu);
    ctx->pc = 0x1E0348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0344u;
    // 0x1e0348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E0344u, 0x1E034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E034Cu;
label_1e034c:
    // 0x1e034c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e034cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0358: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0358u;
        // 0x1e035c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0360u;
}
