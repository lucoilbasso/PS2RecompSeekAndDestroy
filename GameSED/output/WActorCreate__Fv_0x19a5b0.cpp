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

// Function: WActorCreate__Fv
// Address: 0x19a5b0 - 0x19a604
void WActorCreate__Fv_0x19a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WActorCreate__Fv_0x19a5b0");
#endif

    switch (ctx->pc) {
        case 0x19a5c4u: goto label_19a5c4;
        case 0x19a5ccu: goto label_19a5cc;
        case 0x19a5e4u: goto label_19a5e4;
        case 0x19a5f0u: goto label_19a5f0;
        default: break;
    }

    ctx->pc = 0x19a5b0u;

    // 0x19a5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a5b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a5bc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x19A5BCu;
    SET_GPR_U32(ctx, 31, 0x19A5C4u);
    ctx->pc = 0x19A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5BCu;
    // 0x19a5c0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x19A5BCu, 0x19A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5C4u;
label_19a5c4:
    // 0x19a5c4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x19A5C4u;
    SET_GPR_U32(ctx, 31, 0x19A5CCu);
    ctx->pc = 0x19A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5C4u;
    // 0x19a5c8: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x19A5C4u, 0x19A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5CCu;
label_19a5cc:
    // 0x19a5cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x19a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x19a5d4: 0x24420b50  addiu       $v0, $v0, 0xB50
    ctx->pc = 0x19a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2896));
    // 0x19a5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5dc: 0xc066868  jal         func_19A1A0
    ctx->pc = 0x19A5DCu;
    SET_GPR_U32(ctx, 31, 0x19A5E4u);
    ctx->pc = 0x19A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5DCu;
    // 0x19a5e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A1A0u, 0x19A5DCu, 0x19A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5E4u;
label_19a5e4:
    // 0x19a5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5e8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x19A5E8u;
    SET_GPR_U32(ctx, 31, 0x19A5F0u);
    ctx->pc = 0x19A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5E8u;
    // 0x19a5ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x19A5E8u, 0x19A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5F0u;
label_19a5f0:
    // 0x19a5f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19a5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5FCu;
        // 0x19a600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A604u;
}
