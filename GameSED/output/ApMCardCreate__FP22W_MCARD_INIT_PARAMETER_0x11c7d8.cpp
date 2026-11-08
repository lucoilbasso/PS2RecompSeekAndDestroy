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

// Function: ApMCardCreate__FP22W_MCARD_INIT_PARAMETER
// Address: 0x11c7d8 - 0x11c83c
void ApMCardCreate__FP22W_MCARD_INIT_PARAMETER_0x11c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMCardCreate__FP22W_MCARD_INIT_PARAMETER_0x11c7d8");
#endif

    switch (ctx->pc) {
        case 0x11c7f4u: goto label_11c7f4;
        case 0x11c7fcu: goto label_11c7fc;
        case 0x11c818u: goto label_11c818;
        case 0x11c824u: goto label_11c824;
        default: break;
    }

    ctx->pc = 0x11c7d8u;

    // 0x11c7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c7dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11c7e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c7ec: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11C7ECu;
    SET_GPR_U32(ctx, 31, 0x11C7F4u);
    ctx->pc = 0x11C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7ECu;
    // 0x11c7f0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11C7ECu, 0x11C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7F4u;
label_11c7f4:
    // 0x11c7f4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x11C7F4u;
    SET_GPR_U32(ctx, 31, 0x11C7FCu);
    ctx->pc = 0x11C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7F4u;
    // 0x11c7f8: 0x3404e2c0  ori         $a0, $zero, 0xE2C0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x11C7F4u, 0x11C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7FCu;
label_11c7fc:
    // 0x11c7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c804: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11c804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11c808: 0x2442e900  addiu       $v0, $v0, -0x1700
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961408));
    // 0x11c80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c810: 0xc047210  jal         func_11C840
    ctx->pc = 0x11C810u;
    SET_GPR_U32(ctx, 31, 0x11C818u);
    ctx->pc = 0x11C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C810u;
    // 0x11c814: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C840u, 0x11C810u, 0x11C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C818u;
label_11c818:
    // 0x11c818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c81c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x11C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C81Cu;
    // 0x11c820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x11C81Cu, 0x11C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C824u;
label_11c824:
    // 0x11c824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c82c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c82cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c834: 0x3e00008  jr          $ra
    ctx->pc = 0x11C834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C834u;
        // 0x11c838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C83Cu;
}
