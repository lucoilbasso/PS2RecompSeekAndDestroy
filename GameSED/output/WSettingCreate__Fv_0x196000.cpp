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

// Function: WSettingCreate__Fv
// Address: 0x196000 - 0x196054
void WSettingCreate__Fv_0x196000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSettingCreate__Fv_0x196000");
#endif

    switch (ctx->pc) {
        case 0x196014u: goto label_196014;
        case 0x19601cu: goto label_19601c;
        case 0x196034u: goto label_196034;
        case 0x196040u: goto label_196040;
        default: break;
    }

    ctx->pc = 0x196000u;

    // 0x196000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196008: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x196008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19600c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x19600Cu;
    SET_GPR_U32(ctx, 31, 0x196014u);
    ctx->pc = 0x196010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19600Cu;
    // 0x196010: 0x24040146  addiu       $a0, $zero, 0x146 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x19600Cu, 0x196014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196014u;
label_196014:
    // 0x196014: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x196014u;
    SET_GPR_U32(ctx, 31, 0x19601Cu);
    ctx->pc = 0x196018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196014u;
    // 0x196018: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x196014u, 0x19601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19601Cu;
label_19601c:
    // 0x19601c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196020: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x196020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x196024: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x196024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x196028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19602c: 0xc065816  jal         func_196058
    ctx->pc = 0x19602Cu;
    SET_GPR_U32(ctx, 31, 0x196034u);
    ctx->pc = 0x196030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19602Cu;
    // 0x196030: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196058u, 0x19602Cu, 0x196034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196034u;
label_196034:
    // 0x196034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196038: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x196038u;
    SET_GPR_U32(ctx, 31, 0x196040u);
    ctx->pc = 0x19603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196038u;
    // 0x19603c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x196038u, 0x196040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196040u;
label_196040:
    // 0x196040: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x196044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19604c: 0x3e00008  jr          $ra
    ctx->pc = 0x19604Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19604Cu;
        // 0x196050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19604Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196054u;
}
