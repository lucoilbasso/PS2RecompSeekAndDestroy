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

// Function: ContSEChangePitch__12ApContSECtrli
// Address: 0x15a150 - 0x15a1a4
void ContSEChangePitch__12ApContSECtrli_0x15a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ContSEChangePitch__12ApContSECtrli_0x15a150");
#endif

    switch (ctx->pc) {
        case 0x15a198u: goto label_15a198;
        default: break;
    }

    ctx->pc = 0x15a150u;

    // 0x15a150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a154: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x15a154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a15c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x15a15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a160: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x15a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x15a164: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x15a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15a168: 0x1103000b  beq         $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15A168u;
    {
        const bool branch_taken_0x15a168 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A168u;
        // 0x15a16c: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a168) {
            ctx->pc = 0x15A198u;
            goto label_15a198;
        }
    }
    ctx->pc = 0x15A170u;
    // 0x15a170: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x15a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15a174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a178: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x15a178u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x15a17c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A17Cu;
    {
        const bool branch_taken_0x15a17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A17Cu;
        // 0x15a180: 0xace8000c  sw          $t0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a17c) {
            ctx->pc = 0x15A198u;
            goto label_15a198;
        }
    }
    ctx->pc = 0x15A184u;
    // 0x15a184: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x15a184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15a188: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x15a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x15a18c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x15a190: 0xc0477ca  jal         func_11DF28
    ctx->pc = 0x15A190u;
    SET_GPR_U32(ctx, 31, 0x15A198u);
    ctx->pc = 0x15A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A190u;
    // 0x15a194: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF28u, 0x15A190u, 0x15A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A198u;
label_15a198:
    // 0x15a198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a19c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A19Cu;
        // 0x15a1a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A1A4u;
}
