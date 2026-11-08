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

// Function: ApItemSystemReset__FbP22ApItemSystemInfomationP20ApItemGameInfomationT0
// Address: 0x118398 - 0x118410
void ApItemSystemReset__FbP22ApItemSystemInfomationP20ApItemGameInfomationT0_0x118398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemSystemReset__FbP22ApItemSystemInfomationP20ApItemGameInfomationT0_0x118398");
#endif

    switch (ctx->pc) {
        case 0x1183d0u: goto label_1183d0;
        case 0x1183dcu: goto label_1183dc;
        case 0x1183e0u: goto label_1183e0;
        case 0x1183f0u: goto label_1183f0;
        default: break;
    }

    ctx->pc = 0x118398u;

    // 0x118398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11839c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1183a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1183a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1183a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1183a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1183a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1183ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1183acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1183b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1183b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1183b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183b8: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1183B8u;
    {
        const bool branch_taken_0x1183b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1183BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183B8u;
        // 0x1183bc: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183b8) {
            ctx->pc = 0x1183D0u;
            goto label_1183d0;
        }
    }
    ctx->pc = 0x1183C0u;
    // 0x1183c0: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1183c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1183c4: 0xaf80896c  sw          $zero, -0x7694($gp)
    ctx->pc = 0x1183c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
    // 0x1183c8: 0xc046378  jal         func_118DE0
    ctx->pc = 0x1183C8u;
    SET_GPR_U32(ctx, 31, 0x1183D0u);
    ctx->pc = 0x1183CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183C8u;
    // 0x1183cc: 0x248433b0  addiu       $a0, $a0, 0x33B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DE0u, 0x1183C8u, 0x1183D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183D0u;
label_1183d0:
    // 0x1183d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1183d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183d4: 0xc046104  jal         func_118410
    ctx->pc = 0x1183D4u;
    SET_GPR_U32(ctx, 31, 0x1183DCu);
    ctx->pc = 0x1183D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183D4u;
    // 0x1183d8: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1183D4u, 0x1183DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183DCu;
label_1183dc:
    // 0x1183dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1183dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1183e0:
    // 0x1183e0: 0x261024d0  addiu       $s0, $s0, 0x24D0
    ctx->pc = 0x1183e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9424));
    // 0x1183e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1183e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1183e8: 0xc046116  jal         func_118458
    ctx->pc = 0x1183E8u;
    SET_GPR_U32(ctx, 31, 0x1183F0u);
    ctx->pc = 0x1183ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183E8u;
    // 0x1183ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118458u, 0x1183E8u, 0x1183F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183F0u;
label_1183f0:
    // 0x1183f0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1183F0u;
    {
        const bool branch_taken_0x1183f0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1183F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183F0u;
        // 0x1183f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183f0) {
            ctx->pc = 0x1183E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1183e0;
        }
    }
    ctx->pc = 0x1183F8u;
    // 0x1183f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1183f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1183fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1183fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118404: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118408: 0x3e00008  jr          $ra
    ctx->pc = 0x118408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118408u;
        // 0x11840c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118410u;
}
