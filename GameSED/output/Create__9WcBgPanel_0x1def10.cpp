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

// Function: Create__9WcBgPanel
// Address: 0x1def10 - 0x1def64
void Create__9WcBgPanel_0x1def10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9WcBgPanel_0x1def10");
#endif

    switch (ctx->pc) {
        case 0x1def24u: goto label_1def24;
        case 0x1def2cu: goto label_1def2c;
        case 0x1def44u: goto label_1def44;
        case 0x1def50u: goto label_1def50;
        default: break;
    }

    ctx->pc = 0x1def10u;

    // 0x1def10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1def10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1def14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1def14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1def18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1def18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1def1c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DEF1Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF24u);
    ctx->pc = 0x1DEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF1Cu;
    // 0x1def20: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DEF1Cu, 0x1DEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF24u;
label_1def24:
    // 0x1def24: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DEF24u;
    SET_GPR_U32(ctx, 31, 0x1DEF2Cu);
    ctx->pc = 0x1DEF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF24u;
    // 0x1def28: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DEF24u, 0x1DEF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF2Cu;
label_1def2c:
    // 0x1def2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1def2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def30: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1def30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1def34: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x1def34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x1def38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1def38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def3c: 0xc062de2  jal         func_18B788
    ctx->pc = 0x1DEF3Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF44u);
    ctx->pc = 0x1DEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF3Cu;
    // 0x1def40: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B788u, 0x1DEF3Cu, 0x1DEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF44u;
label_1def44:
    // 0x1def44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1def44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def48: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DEF48u;
    SET_GPR_U32(ctx, 31, 0x1DEF50u);
    ctx->pc = 0x1DEF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF48u;
    // 0x1def4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DEF48u, 0x1DEF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF50u;
label_1def50:
    // 0x1def50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1def50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1def54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1def58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1def58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1def5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF5Cu;
        // 0x1def60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEF64u;
}
