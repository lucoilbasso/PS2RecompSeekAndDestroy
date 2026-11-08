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

// Function: entry_00178198
// Address: 0x178198 - 0x1781e0
void entry_00178198_0x178198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178198_0x178198");
#endif

    switch (ctx->pc) {
        case 0x1781c4u: goto label_1781c4;
        default: break;
    }

    ctx->pc = 0x178198u;

    // 0x178198: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x178198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17819c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17819cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1781a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781a4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1781a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1781a8: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x1781a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1781ac: 0x8e221040  lw          $v0, 0x1040($s1)
    ctx->pc = 0x1781acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4160)));
    // 0x1781b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1781b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1781b4: 0xae221040  sw          $v0, 0x1040($s1)
    ctx->pc = 0x1781b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 2));
    // 0x1781b8: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x1781b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1781bc: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x1781BCu;
    SET_GPR_U32(ctx, 31, 0x1781C4u);
    ctx->pc = 0x1781C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781BCu;
    // 0x1781c0: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x1781BCu, 0x1781C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781C4u;
label_1781c4:
    // 0x1781c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1781c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1781c8: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x1781c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x1781cc: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1781CCu;
    {
        const bool branch_taken_0x1781cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1781D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781CCu;
        // 0x1781d0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781cc) {
            ctx->pc = 0x1781E0u;
            return;
        }
    }
    ctx->pc = 0x1781D4u;
    // 0x1781d4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1781d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1781d8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1781D8u;
    SET_GPR_U32(ctx, 31, 0x1781E0u);
    ctx->pc = 0x1781DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781D8u;
    // 0x1781dc: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1781D8u, 0x1781E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781E0u;
}
