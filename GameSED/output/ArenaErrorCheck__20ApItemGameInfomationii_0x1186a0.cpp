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

// Function: ArenaErrorCheck__20ApItemGameInfomationii
// Address: 0x1186a0 - 0x1186f8
void ArenaErrorCheck__20ApItemGameInfomationii_0x1186a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ArenaErrorCheck__20ApItemGameInfomationii_0x1186a0");
#endif

    switch (ctx->pc) {
        case 0x1186d4u: goto label_1186d4;
        case 0x1186ecu: goto label_1186ec;
        default: break;
    }

    ctx->pc = 0x1186a0u;

    // 0x1186a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1186a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1186a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1186a8: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1186a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1186ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1186acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1186b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1186B0u;
    {
        const bool branch_taken_0x1186b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186B0u;
        // 0x1186b4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186b0) {
            ctx->pc = 0x1186C8u;
            goto label_1186c8;
        }
    }
    ctx->pc = 0x1186B8u;
    // 0x1186b8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1186B8u;
    {
        const bool branch_taken_0x1186b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1186BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186B8u;
        // 0x1186bc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186b8) {
            ctx->pc = 0x1186C8u;
            goto label_1186c8;
        }
    }
    ctx->pc = 0x1186C0u;
    // 0x1186c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1186C0u;
    {
        const bool branch_taken_0x1186c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1186C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186C0u;
        // 0x1186c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186c0) {
            ctx->pc = 0x1186F0u;
            goto label_1186f0;
        }
    }
    ctx->pc = 0x1186C8u;
label_1186c8:
    // 0x1186c8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1186cc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1186CCu;
    SET_GPR_U32(ctx, 31, 0x1186D4u);
    ctx->pc = 0x1186D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186CCu;
    // 0x1186d0: 0x248442c0  addiu       $a0, $a0, 0x42C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1186CCu, 0x1186D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186D4u;
label_1186d4:
    // 0x1186d4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1186d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1186d8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1186d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1186dc: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1186dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1186e0: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x1186e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    // 0x1186e4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1186E4u;
    SET_GPR_U32(ctx, 31, 0x1186ECu);
    ctx->pc = 0x1186E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186E4u;
    // 0x1186e8: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1186E4u, 0x1186ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186ECu;
label_1186ec:
    // 0x1186ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1186ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1186f0:
    // 0x1186f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1186F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1186F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186F0u;
        // 0x1186f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1186F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1186F8u;
}
