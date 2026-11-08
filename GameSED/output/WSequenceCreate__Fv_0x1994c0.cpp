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

// Function: WSequenceCreate__Fv
// Address: 0x1994c0 - 0x199514
void WSequenceCreate__Fv_0x1994c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSequenceCreate__Fv_0x1994c0");
#endif

    switch (ctx->pc) {
        case 0x1994d4u: goto label_1994d4;
        case 0x1994dcu: goto label_1994dc;
        case 0x1994f4u: goto label_1994f4;
        case 0x199500u: goto label_199500;
        default: break;
    }

    ctx->pc = 0x1994c0u;

    // 0x1994c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1994c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1994c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1994c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1994c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1994c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1994cc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1994CCu;
    SET_GPR_U32(ctx, 31, 0x1994D4u);
    ctx->pc = 0x1994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994CCu;
    // 0x1994d0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1994CCu, 0x1994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994D4u;
label_1994d4:
    // 0x1994d4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1994D4u;
    SET_GPR_U32(ctx, 31, 0x1994DCu);
    ctx->pc = 0x1994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994D4u;
    // 0x1994d8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1994D4u, 0x1994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994DCu;
label_1994dc:
    // 0x1994dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1994dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1994e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1994e4: 0x24420ab0  addiu       $v0, $v0, 0xAB0
    ctx->pc = 0x1994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x1994e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1994e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994ec: 0xc066546  jal         func_199518
    ctx->pc = 0x1994ECu;
    SET_GPR_U32(ctx, 31, 0x1994F4u);
    ctx->pc = 0x1994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994ECu;
    // 0x1994f0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199518u, 0x1994ECu, 0x1994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994F4u;
label_1994f4:
    // 0x1994f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1994f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994f8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1994F8u;
    SET_GPR_U32(ctx, 31, 0x199500u);
    ctx->pc = 0x1994FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994F8u;
    // 0x1994fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1994F8u, 0x199500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199500u;
label_199500:
    // 0x199500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x199504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19950c: 0x3e00008  jr          $ra
    ctx->pc = 0x19950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19950Cu;
        // 0x199510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199514u;
}
