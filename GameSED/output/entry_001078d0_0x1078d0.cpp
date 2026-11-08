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

// Function: entry_001078d0
// Address: 0x1078d0 - 0x107908
void entry_001078d0_0x1078d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001078d0_0x1078d0");
#endif

    switch (ctx->pc) {
        case 0x1078d8u: goto label_1078d8;
        default: break;
    }

    ctx->pc = 0x1078d0u;

    // 0x1078d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1078D0u;
    SET_GPR_U32(ctx, 31, 0x1078D8u);
    ctx->pc = 0x1078D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078D0u;
    // 0x1078d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1078D0u, 0x1078D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078D8u;
label_1078d8:
    // 0x1078d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1078d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1078dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1078e0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1078E0u;
    {
        const bool branch_taken_0x1078e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1078e0) {
            ctx->pc = 0x1078E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1078E0u;
            // 0x1078e4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107908u;
            return;
        }
    }
    ctx->pc = 0x1078E8u;
    // 0x1078e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1078e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1078ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1078f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1078f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1078f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1078f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1078f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1078fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1078fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x107900: 0x8061906  j           func_186418
    ctx->pc = 0x107900u;
    ctx->pc = 0x107904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107900u;
    // 0x107904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186418u;
    WEntityAllSubVisibility__FP8WcEntityb_0x186418(rdram, ctx, runtime); return;
    ctx->pc = 0x107908u;
}
