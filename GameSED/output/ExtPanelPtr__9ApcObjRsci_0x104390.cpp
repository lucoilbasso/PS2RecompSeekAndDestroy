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

// Function: ExtPanelPtr__9ApcObjRsci
// Address: 0x104390 - 0x1043fc
void ExtPanelPtr__9ApcObjRsci_0x104390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelPtr__9ApcObjRsci_0x104390");
#endif

    switch (ctx->pc) {
        case 0x1043dcu: goto label_1043dc;
        default: break;
    }

    ctx->pc = 0x104390u;

    // 0x104390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104394: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x104394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x104398: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x104398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10439c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1043a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1043a4: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1043a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1043a8: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1043A8u;
    {
        const bool branch_taken_0x1043a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043A8u;
        // 0x1043ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043a8) {
            ctx->pc = 0x1043C0u;
            goto label_1043c0;
        }
    }
    ctx->pc = 0x1043B0u;
    // 0x1043b0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1043b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1043b4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1043b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1043b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1043B8u;
    {
        const bool branch_taken_0x1043b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1043b8) {
            ctx->pc = 0x1043C4u;
            goto label_1043c4;
        }
    }
    ctx->pc = 0x1043C0u;
label_1043c0:
    // 0x1043c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1043c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1043c4:
    // 0x1043c4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1043C4u;
    {
        const bool branch_taken_0x1043c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043C4u;
        // 0x1043c8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043c4) {
            ctx->pc = 0x1043E8u;
            goto label_1043e8;
        }
    }
    ctx->pc = 0x1043CCu;
    // 0x1043cc: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1043ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1043d0: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x1043d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    // 0x1043d4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1043D4u;
    SET_GPR_U32(ctx, 31, 0x1043DCu);
    ctx->pc = 0x1043D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043D4u;
    // 0x1043d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1043D4u, 0x1043DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043DCu;
label_1043dc:
    // 0x1043dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1043DCu;
    {
        const bool branch_taken_0x1043dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043DCu;
        // 0x1043e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043dc) {
            ctx->pc = 0x1043F0u;
            goto label_1043f0;
        }
    }
    ctx->pc = 0x1043E4u;
    // 0x1043e4: 0x0  nop
    ctx->pc = 0x1043e4u;
    // NOP
label_1043e8:
    // 0x1043e8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1043ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1043ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1043f0:
    // 0x1043f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1043f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1043f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1043F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1043F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043F4u;
        // 0x1043f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1043F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1043FCu;
}
