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

// Function: AddNearTrackParts__9ApcCqtanki
// Address: 0x1da990 - 0x1da9e4
void AddNearTrackParts__9ApcCqtanki_0x1da990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddNearTrackParts__9ApcCqtanki_0x1da990");
#endif

    switch (ctx->pc) {
        case 0x1da9d8u: goto label_1da9d8;
        default: break;
    }

    ctx->pc = 0x1da990u;

    // 0x1da990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da994: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1da994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da99c: 0x8cc20cf0  lw          $v0, 0xCF0($a2)
    ctx->pc = 0x1da99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3312)));
    // 0x1da9a0: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x1da9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1da9a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA9A4u;
    {
        const bool branch_taken_0x1da9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9A4u;
        // 0x1da9a8: 0x24c70cf0  addiu       $a3, $a2, 0xCF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9a4) {
            ctx->pc = 0x1DA9C8u;
            goto label_1da9c8;
        }
    }
    ctx->pc = 0x1DA9ACu;
    // 0x1da9ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da9b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1da9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1da9b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da9b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1da9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1da9bc: 0xac450cf4  sw          $a1, 0xCF4($v0)
    ctx->pc = 0x1da9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3316), GPR_U32(ctx, 5));
    // 0x1da9c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA9C0u;
    {
        const bool branch_taken_0x1da9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9C0u;
        // 0x1da9c4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9c0) {
            ctx->pc = 0x1DA9D8u;
            goto label_1da9d8;
        }
    }
    ctx->pc = 0x1DA9C8u;
label_1da9c8:
    // 0x1da9c8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1da9cc: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1da9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1da9d0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DA9D0u;
    SET_GPR_U32(ctx, 31, 0x1DA9D8u);
    ctx->pc = 0x1DA9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9D0u;
    // 0x1da9d4: 0x24a56e90  addiu       $a1, $a1, 0x6E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DA9D0u, 0x1DA9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9D8u;
label_1da9d8:
    // 0x1da9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9DCu;
        // 0x1da9e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA9E4u;
}
