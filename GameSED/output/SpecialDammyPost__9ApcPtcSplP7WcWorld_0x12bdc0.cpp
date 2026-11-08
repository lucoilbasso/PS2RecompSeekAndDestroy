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

// Function: SpecialDammyPost__9ApcPtcSplP7WcWorld
// Address: 0x12bdc0 - 0x12bdf4
void SpecialDammyPost__9ApcPtcSplP7WcWorld_0x12bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpecialDammyPost__9ApcPtcSplP7WcWorld_0x12bdc0");
#endif

    switch (ctx->pc) {
        case 0x12bdc0u: goto label_12bdc0;
        case 0x12bdc4u: goto label_12bdc4;
        case 0x12bdc8u: goto label_12bdc8;
        case 0x12bdccu: goto label_12bdcc;
        case 0x12bdd0u: goto label_12bdd0;
        case 0x12bdd4u: goto label_12bdd4;
        case 0x12bdd8u: goto label_12bdd8;
        case 0x12bddcu: goto label_12bddc;
        case 0x12bde0u: goto label_12bde0;
        case 0x12bde4u: goto label_12bde4;
        case 0x12bde8u: goto label_12bde8;
        case 0x12bdecu: goto label_12bdec;
        case 0x12bdf0u: goto label_12bdf0;
        default: break;
    }

    ctx->pc = 0x12bdc0u;

label_12bdc0:
    // 0x12bdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12bdc4:
    // 0x12bdc4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x12bdc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bdc8:
    // 0x12bdc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12bdcc:
    // 0x12bdcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12bdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bdd0:
    // 0x12bdd0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_12bdd4:
    // 0x12bdd4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x12bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_12bdd8:
    // 0x12bdd8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x12bdd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12bddc:
    // 0x12bddc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12bde0:
    // 0x12bde0: 0x60f809  jalr        $v1
label_12bde4:
    if (ctx->pc == 0x12BDE4u) {
        ctx->pc = 0x12BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDE0u;
        // 0x12bde4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDE8u;
        goto label_12bde8;
    }
    ctx->pc = 0x12BDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12BDE8u);
        ctx->pc = 0x12BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDE0u;
        // 0x12bde4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BDE0u, 0x12BDE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12BDE8u;
label_12bde8:
    // 0x12bde8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12bdec:
    // 0x12bdec: 0x3e00008  jr          $ra
label_12bdf0:
    if (ctx->pc == 0x12BDF0u) {
        ctx->pc = 0x12BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDECu;
        // 0x12bdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDF4u;
        goto label_fallthrough_0x12bdec;
    }
    ctx->pc = 0x12BDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDECu;
        // 0x12bdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12bdec:
    ctx->pc = 0x12BDF4u;
}
