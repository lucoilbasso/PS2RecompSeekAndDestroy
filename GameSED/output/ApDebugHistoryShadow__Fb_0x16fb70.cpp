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

// Function: ApDebugHistoryShadow__Fb
// Address: 0x16fb70 - 0x16fc10
void ApDebugHistoryShadow__Fb_0x16fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugHistoryShadow__Fb_0x16fb70");
#endif

    switch (ctx->pc) {
        case 0x16fb9cu: goto label_16fb9c;
        case 0x16fbe4u: goto label_16fbe4;
        default: break;
    }

    ctx->pc = 0x16fb70u;

    // 0x16fb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fb74: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16FB74u;
    {
        const bool branch_taken_0x16fb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB74u;
        // 0x16fb78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb74) {
            ctx->pc = 0x16FBC8u;
            goto label_16fbc8;
        }
    }
    ctx->pc = 0x16FB7Cu;
    // 0x16fb7c: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x16fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x16fb80: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16fb84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16FB84u;
    {
        const bool branch_taken_0x16fb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB84u;
        // 0x16fb88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb84) {
            ctx->pc = 0x16FB9Cu;
            goto label_16fb9c;
        }
    }
    ctx->pc = 0x16FB8Cu;
    // 0x16fb8c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16fb90: 0x24a57590  addiu       $a1, $a1, 0x7590
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30096));
    // 0x16fb94: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16FB94u;
    SET_GPR_U32(ctx, 31, 0x16FB9Cu);
    ctx->pc = 0x16FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB94u;
    // 0x16fb98: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16FB94u, 0x16FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB9Cu;
label_16fb9c:
    // 0x16fb9c: 0x27848b68  addiu       $a0, $gp, -0x7498
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937448));
    // 0x16fba0: 0x8f858b64  lw          $a1, -0x749C($gp)
    ctx->pc = 0x16fba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x16fba4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fba8: 0xaf808b64  sw          $zero, -0x749C($gp)
    ctx->pc = 0x16fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 0));
    // 0x16fbac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fbb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16fbb4: 0x3c010027  lui         $at, 0x27
    ctx->pc = 0x16fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)39 << 16));
    // 0x16fbb8: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x16fbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x16fbbc: 0xac25ba00  sw          $a1, -0x4600($at)
    ctx->pc = 0x16fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), GPR_U32(ctx, 5));
    // 0x16fbc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16FBC0u;
    {
        const bool branch_taken_0x16fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBC0u;
        // 0x16fbc4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbc0) {
            ctx->pc = 0x16FC04u;
            goto label_16fc04;
        }
    }
    ctx->pc = 0x16FBC8u;
label_16fbc8:
    // 0x16fbc8: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x16fbcc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16FBCCu;
    {
        const bool branch_taken_0x16fbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fbcc) {
            ctx->pc = 0x16FBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FBCCu;
            // 0x16fbd0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FBECu;
            goto label_16fbec;
        }
    }
    ctx->pc = 0x16FBD4u;
    // 0x16fbd4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16fbd8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x16fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x16fbdc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16FBDCu;
    SET_GPR_U32(ctx, 31, 0x16FBE4u);
    ctx->pc = 0x16FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FBDCu;
    // 0x16fbe0: 0x24a575b0  addiu       $a1, $a1, 0x75B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16FBDCu, 0x16FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FBE4u;
label_16fbe4:
    // 0x16fbe4: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x16fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x16fbe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16fbec:
    // 0x16fbec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x16fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fbf0: 0xaf828b68  sw          $v0, -0x7498($gp)
    ctx->pc = 0x16fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 2));
    // 0x16fbf4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x16fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x16fbf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fbfc: 0x8c63ba00  lw          $v1, -0x4600($v1)
    ctx->pc = 0x16fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949376)));
    // 0x16fc00: 0xaf838b64  sw          $v1, -0x749C($gp)
    ctx->pc = 0x16fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 3));
label_16fc04:
    // 0x16fc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x16FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC08u;
        // 0x16fc0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FC10u;
}
