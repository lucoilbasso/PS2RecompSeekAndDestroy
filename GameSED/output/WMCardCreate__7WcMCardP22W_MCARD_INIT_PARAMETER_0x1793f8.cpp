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

// Function: WMCardCreate__7WcMCardP22W_MCARD_INIT_PARAMETER
// Address: 0x1793f8 - 0x17945c
void WMCardCreate__7WcMCardP22W_MCARD_INIT_PARAMETER_0x1793f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardCreate__7WcMCardP22W_MCARD_INIT_PARAMETER_0x1793f8");
#endif

    switch (ctx->pc) {
        case 0x179414u: goto label_179414;
        case 0x17941cu: goto label_17941c;
        case 0x179438u: goto label_179438;
        case 0x179444u: goto label_179444;
        default: break;
    }

    ctx->pc = 0x1793f8u;

    // 0x1793f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1793f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1793fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1793fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17940c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17940Cu;
    SET_GPR_U32(ctx, 31, 0x179414u);
    ctx->pc = 0x179410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17940Cu;
    // 0x179410: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17940Cu, 0x179414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179414u;
label_179414:
    // 0x179414: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x179414u;
    SET_GPR_U32(ctx, 31, 0x17941Cu);
    ctx->pc = 0x179418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179414u;
    // 0x179418: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x179414u, 0x17941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17941Cu;
label_17941c:
    // 0x17941c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179424: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x179424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x179428: 0x2442f9e0  addiu       $v0, $v0, -0x620
    ctx->pc = 0x179428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x17942c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179430: 0xc05e518  jal         func_179460
    ctx->pc = 0x179430u;
    SET_GPR_U32(ctx, 31, 0x179438u);
    ctx->pc = 0x179434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179430u;
    // 0x179434: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179460u, 0x179430u, 0x179438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179438u;
label_179438:
    // 0x179438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17943c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x17943Cu;
    SET_GPR_U32(ctx, 31, 0x179444u);
    ctx->pc = 0x179440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17943Cu;
    // 0x179440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x17943Cu, 0x179444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179444u;
label_179444:
    // 0x179444: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17944c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17944cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179454: 0x3e00008  jr          $ra
    ctx->pc = 0x179454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179454u;
        // 0x179458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17945Cu;
}
