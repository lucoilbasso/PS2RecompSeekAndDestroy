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

// Function: WSheetCreate__Fv
// Address: 0x1927d8 - 0x19282c
void WSheetCreate__Fv_0x1927d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetCreate__Fv_0x1927d8");
#endif

    switch (ctx->pc) {
        case 0x1927ecu: goto label_1927ec;
        case 0x1927f4u: goto label_1927f4;
        case 0x19280cu: goto label_19280c;
        case 0x192818u: goto label_192818;
        default: break;
    }

    ctx->pc = 0x1927d8u;

    // 0x1927d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1927dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1927dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1927e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1927e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1927e4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1927E4u;
    SET_GPR_U32(ctx, 31, 0x1927ECu);
    ctx->pc = 0x1927E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927E4u;
    // 0x1927e8: 0x240400a6  addiu       $a0, $zero, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1927E4u, 0x1927ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927ECu;
label_1927ec:
    // 0x1927ec: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1927ECu;
    SET_GPR_U32(ctx, 31, 0x1927F4u);
    ctx->pc = 0x1927F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927ECu;
    // 0x1927f0: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1927ECu, 0x1927F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927F4u;
label_1927f4:
    // 0x1927f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1927f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1927f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1927fc: 0x24420530  addiu       $v0, $v0, 0x530
    ctx->pc = 0x1927fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
    // 0x192800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192804: 0xc06453c  jal         func_1914F0
    ctx->pc = 0x192804u;
    SET_GPR_U32(ctx, 31, 0x19280Cu);
    ctx->pc = 0x192808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192804u;
    // 0x192808: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914F0u, 0x192804u, 0x19280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19280Cu;
label_19280c:
    // 0x19280c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19280cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192810: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x192810u;
    SET_GPR_U32(ctx, 31, 0x192818u);
    ctx->pc = 0x192814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192810u;
    // 0x192814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x192810u, 0x192818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192818u;
label_192818:
    // 0x192818: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19281c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19281cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192824: 0x3e00008  jr          $ra
    ctx->pc = 0x192824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192824u;
        // 0x192828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19282Cu;
}
