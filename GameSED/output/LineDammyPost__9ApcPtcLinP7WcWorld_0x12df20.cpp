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

// Function: LineDammyPost__9ApcPtcLinP7WcWorld
// Address: 0x12df20 - 0x12df54
void LineDammyPost__9ApcPtcLinP7WcWorld_0x12df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LineDammyPost__9ApcPtcLinP7WcWorld_0x12df20");
#endif

    switch (ctx->pc) {
        case 0x12df20u: goto label_12df20;
        case 0x12df24u: goto label_12df24;
        case 0x12df28u: goto label_12df28;
        case 0x12df2cu: goto label_12df2c;
        case 0x12df30u: goto label_12df30;
        case 0x12df34u: goto label_12df34;
        case 0x12df38u: goto label_12df38;
        case 0x12df3cu: goto label_12df3c;
        case 0x12df40u: goto label_12df40;
        case 0x12df44u: goto label_12df44;
        case 0x12df48u: goto label_12df48;
        case 0x12df4cu: goto label_12df4c;
        case 0x12df50u: goto label_12df50;
        default: break;
    }

    ctx->pc = 0x12df20u;

label_12df20:
    // 0x12df20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12df24:
    // 0x12df24: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x12df24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12df28:
    // 0x12df28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12df2c:
    // 0x12df2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12df2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12df30:
    // 0x12df30: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x12df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_12df34:
    // 0x12df34: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x12df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_12df38:
    // 0x12df38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x12df38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12df3c:
    // 0x12df3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12df40:
    // 0x12df40: 0x60f809  jalr        $v1
label_12df44:
    if (ctx->pc == 0x12DF44u) {
        ctx->pc = 0x12DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF40u;
        // 0x12df44: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF48u;
        goto label_12df48;
    }
    ctx->pc = 0x12DF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12DF48u);
        ctx->pc = 0x12DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF40u;
        // 0x12df44: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DF40u, 0x12DF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12DF48u;
label_12df48:
    // 0x12df48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12df48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12df4c:
    // 0x12df4c: 0x3e00008  jr          $ra
label_12df50:
    if (ctx->pc == 0x12DF50u) {
        ctx->pc = 0x12DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF4Cu;
        // 0x12df50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF54u;
        goto label_fallthrough_0x12df4c;
    }
    ctx->pc = 0x12DF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF4Cu;
        // 0x12df50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12df4c:
    ctx->pc = 0x12DF54u;
}
