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

// Function: UnPostedSuper__8WcEntityP8WcEntity
// Address: 0x186190 - 0x186204
void UnPostedSuper__8WcEntityP8WcEntity_0x186190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnPostedSuper__8WcEntityP8WcEntity_0x186190");
#endif

    switch (ctx->pc) {
        case 0x1861a8u: goto label_1861a8;
        case 0x1861f8u: goto label_1861f8;
        default: break;
    }

    ctx->pc = 0x186190u;

    // 0x186190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186198: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x186198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x18619c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18619Cu;
    {
        const bool branch_taken_0x18619c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18619Cu;
        // 0x1861a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18619c) {
            ctx->pc = 0x1861E8u;
            goto label_1861e8;
        }
    }
    ctx->pc = 0x1861A4u;
    // 0x1861a4: 0x0  nop
    ctx->pc = 0x1861a4u;
    // NOP
label_1861a8:
    // 0x1861a8: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1861A8u;
    {
        const bool branch_taken_0x1861a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1861a8) {
            ctx->pc = 0x1861ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1861A8u;
            // 0x1861ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1861D0u;
            goto label_1861d0;
        }
    }
    ctx->pc = 0x1861B0u;
    // 0x1861b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1861B0u;
    {
        const bool branch_taken_0x1861b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1861B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861B0u;
        // 0x1861b4: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861b0) {
            ctx->pc = 0x1861C0u;
            goto label_1861c0;
        }
    }
    ctx->pc = 0x1861B8u;
    // 0x1861b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1861B8u;
    {
        const bool branch_taken_0x1861b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861B8u;
        // 0x1861bc: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861b8) {
            ctx->pc = 0x1861C4u;
            goto label_1861c4;
        }
    }
    ctx->pc = 0x1861C0u;
label_1861c0:
    // 0x1861c0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1861c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_1861c4:
    // 0x1861c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1861C4u;
    {
        const bool branch_taken_0x1861c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861C4u;
        // 0x1861c8: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861c4) {
            ctx->pc = 0x1861F8u;
            goto label_1861f8;
        }
    }
    ctx->pc = 0x1861CCu;
    // 0x1861cc: 0x0  nop
    ctx->pc = 0x1861ccu;
    // NOP
label_1861d0:
    // 0x1861d0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1861d4: 0x0  nop
    ctx->pc = 0x1861d4u;
    // NOP
    // 0x1861d8: 0x0  nop
    ctx->pc = 0x1861d8u;
    // NOP
    // 0x1861dc: 0x0  nop
    ctx->pc = 0x1861dcu;
    // NOP
    // 0x1861e0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1861E0u;
    {
        const bool branch_taken_0x1861e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1861e0) {
            ctx->pc = 0x1861A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1861a8;
        }
    }
    ctx->pc = 0x1861E8u;
label_1861e8:
    // 0x1861e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1861e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1861ec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1861ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1861f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1861F0u;
    SET_GPR_U32(ctx, 31, 0x1861F8u);
    ctx->pc = 0x1861F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861F0u;
    // 0x1861f4: 0x24a57e70  addiu       $a1, $a1, 0x7E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1861F0u, 0x1861F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861F8u;
label_1861f8:
    // 0x1861f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1861f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1861fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1861FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861FCu;
        // 0x186200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1861FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186204u;
}
