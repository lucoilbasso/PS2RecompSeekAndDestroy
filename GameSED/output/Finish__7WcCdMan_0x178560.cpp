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

// Function: Finish__7WcCdMan
// Address: 0x178560 - 0x1785b0
void Finish__7WcCdMan_0x178560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcCdMan_0x178560");
#endif

    switch (ctx->pc) {
        case 0x178578u: goto label_178578;
        case 0x178580u: goto label_178580;
        case 0x178588u: goto label_178588;
        case 0x178590u: goto label_178590;
        case 0x178598u: goto label_178598;
        case 0x1785a0u: goto label_1785a0;
        default: break;
    }

    ctx->pc = 0x178560u;

    // 0x178560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17856c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178570: 0xc06e742  jal         func_1B9D08
    ctx->pc = 0x178570u;
    SET_GPR_U32(ctx, 31, 0x178578u);
    ctx->pc = 0x178574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178570u;
    // 0x178574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D08u, 0x178570u, 0x178578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178578u;
label_178578:
    // 0x178578: 0xc06bcac  jal         func_1AF2B0
    ctx->pc = 0x178578u;
    SET_GPR_U32(ctx, 31, 0x178580u);
    ctx->pc = 0x17857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178578u;
    // 0x17857c: 0x8e041018  lw          $a0, 0x1018($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2B0u, 0x178578u, 0x178580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178580u;
label_178580:
    // 0x178580: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x178580u;
    SET_GPR_U32(ctx, 31, 0x178588u);
    ctx->pc = 0x178584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178580u;
    // 0x178584: 0x8e041010  lw          $a0, 0x1010($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x178580u, 0x178588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178588u;
label_178588:
    // 0x178588: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x178588u;
    SET_GPR_U32(ctx, 31, 0x178590u);
    ctx->pc = 0x17858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178588u;
    // 0x17858c: 0x8e041014  lw          $a0, 0x1014($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x178588u, 0x178590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178590u;
label_178590:
    // 0x178590: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x178590u;
    SET_GPR_U32(ctx, 31, 0x178598u);
    ctx->pc = 0x178594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178590u;
    // 0x178594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x178590u, 0x178598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178598u;
label_178598:
    // 0x178598: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x178598u;
    SET_GPR_U32(ctx, 31, 0x1785A0u);
    ctx->pc = 0x17859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178598u;
    // 0x17859c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x178598u, 0x1785A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785A0u;
label_1785a0:
    // 0x1785a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1785a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1785a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1785a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1785a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1785A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785A8u;
        // 0x1785ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1785A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1785B0u;
}
