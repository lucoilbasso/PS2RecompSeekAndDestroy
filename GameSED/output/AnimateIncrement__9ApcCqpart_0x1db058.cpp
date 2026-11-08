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

// Function: AnimateIncrement__9ApcCqpart
// Address: 0x1db058 - 0x1db120
void AnimateIncrement__9ApcCqpart_0x1db058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnimateIncrement__9ApcCqpart_0x1db058");
#endif

    switch (ctx->pc) {
        case 0x1db058u: goto label_1db058;
        case 0x1db05cu: goto label_1db05c;
        case 0x1db060u: goto label_1db060;
        case 0x1db064u: goto label_1db064;
        case 0x1db068u: goto label_1db068;
        case 0x1db06cu: goto label_1db06c;
        case 0x1db070u: goto label_1db070;
        case 0x1db074u: goto label_1db074;
        case 0x1db078u: goto label_1db078;
        case 0x1db07cu: goto label_1db07c;
        case 0x1db080u: goto label_1db080;
        case 0x1db084u: goto label_1db084;
        case 0x1db088u: goto label_1db088;
        case 0x1db08cu: goto label_1db08c;
        case 0x1db090u: goto label_1db090;
        case 0x1db094u: goto label_1db094;
        case 0x1db098u: goto label_1db098;
        case 0x1db09cu: goto label_1db09c;
        case 0x1db0a0u: goto label_1db0a0;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db0a8u: goto label_1db0a8;
        case 0x1db0acu: goto label_1db0ac;
        case 0x1db0b0u: goto label_1db0b0;
        case 0x1db0b4u: goto label_1db0b4;
        case 0x1db0b8u: goto label_1db0b8;
        case 0x1db0bcu: goto label_1db0bc;
        case 0x1db0c0u: goto label_1db0c0;
        case 0x1db0c4u: goto label_1db0c4;
        case 0x1db0c8u: goto label_1db0c8;
        case 0x1db0ccu: goto label_1db0cc;
        case 0x1db0d0u: goto label_1db0d0;
        case 0x1db0d4u: goto label_1db0d4;
        case 0x1db0d8u: goto label_1db0d8;
        case 0x1db0dcu: goto label_1db0dc;
        case 0x1db0e0u: goto label_1db0e0;
        case 0x1db0e4u: goto label_1db0e4;
        case 0x1db0e8u: goto label_1db0e8;
        case 0x1db0ecu: goto label_1db0ec;
        case 0x1db0f0u: goto label_1db0f0;
        case 0x1db0f4u: goto label_1db0f4;
        case 0x1db0f8u: goto label_1db0f8;
        case 0x1db0fcu: goto label_1db0fc;
        case 0x1db100u: goto label_1db100;
        case 0x1db104u: goto label_1db104;
        case 0x1db108u: goto label_1db108;
        case 0x1db10cu: goto label_1db10c;
        case 0x1db110u: goto label_1db110;
        case 0x1db114u: goto label_1db114;
        case 0x1db118u: goto label_1db118;
        case 0x1db11cu: goto label_1db11c;
        default: break;
    }

    ctx->pc = 0x1db058u;

label_1db058:
    // 0x1db058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1db05c:
    // 0x1db05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1db060:
    // 0x1db060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db064:
    // 0x1db064: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1db068:
    // 0x1db068: 0x8e021100  lw          $v0, 0x1100($s0)
    ctx->pc = 0x1db068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4352)));
label_1db06c:
    // 0x1db06c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1db070:
    if (ctx->pc == 0x1DB070u) {
        ctx->pc = 0x1DB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB06Cu;
        // 0x1db070: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB074u;
        goto label_1db074;
    }
    ctx->pc = 0x1DB06Cu;
    {
        const bool branch_taken_0x1db06c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB06Cu;
        // 0x1db070: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db06c) {
            ctx->pc = 0x1DB080u;
            goto label_1db080;
        }
    }
    ctx->pc = 0x1DB074u;
label_1db074:
    // 0x1db074: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1db074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1db078:
    // 0x1db078: 0x10000002  b           . + 4 + (0x2 << 2)
label_1db07c:
    if (ctx->pc == 0x1DB07Cu) {
        ctx->pc = 0x1DB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB078u;
        // 0x1db07c: 0x8c421108  lw          $v0, 0x1108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB080u;
        goto label_1db080;
    }
    ctx->pc = 0x1DB078u;
    {
        const bool branch_taken_0x1db078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB078u;
        // 0x1db07c: 0x8c421108  lw          $v0, 0x1108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db078) {
            ctx->pc = 0x1DB084u;
            goto label_1db084;
        }
    }
    ctx->pc = 0x1DB080u;
label_1db080:
    // 0x1db080: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db084:
    // 0x1db084: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_1db088:
    if (ctx->pc == 0x1DB088u) {
        ctx->pc = 0x1DB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB084u;
        // 0x1db088: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB08Cu;
        goto label_1db08c;
    }
    ctx->pc = 0x1DB084u;
    {
        const bool branch_taken_0x1db084 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB084u;
        // 0x1db088: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db084) {
            ctx->pc = 0x1DB0B4u;
            goto label_1db0b4;
        }
    }
    ctx->pc = 0x1DB08Cu;
label_1db08c:
    // 0x1db08c: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1db08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_1db090:
    // 0x1db090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db094:
    // 0x1db094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1db094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1db098:
    // 0x1db098: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1db098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1db09c:
    // 0x1db09c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1db09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1db0a0:
    // 0x1db0a0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1db0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1db0a4:
    // 0x1db0a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1db0a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1db0a8:
    // 0x1db0a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db0ac:
    // 0x1db0ac: 0x60f809  jalr        $v1
label_1db0b0:
    if (ctx->pc == 0x1DB0B0u) {
        ctx->pc = 0x1DB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0ACu;
        // 0x1db0b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0B4u;
        goto label_1db0b4;
    }
    ctx->pc = 0x1DB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB0B4u);
        ctx->pc = 0x1DB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0ACu;
        // 0x1db0b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB0ACu, 0x1DB0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB0B4u;
label_1db0b4:
    // 0x1db0b4: 0x260410fc  addiu       $a0, $s0, 0x10FC
    ctx->pc = 0x1db0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4348));
label_1db0b8:
    // 0x1db0b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1db0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1db0bc:
    // 0x1db0bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1db0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db0c0:
    // 0x1db0c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db0c4:
    // 0x1db0c4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1db0c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1db0c8:
    // 0x1db0c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1db0cc:
    if (ctx->pc == 0x1DB0CCu) {
        ctx->pc = 0x1DB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0C8u;
        // 0x1db0cc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0D0u;
        goto label_1db0d0;
    }
    ctx->pc = 0x1DB0C8u;
    {
        const bool branch_taken_0x1db0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0C8u;
        // 0x1db0cc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0c8) {
            ctx->pc = 0x1DB0D4u;
            goto label_1db0d4;
        }
    }
    ctx->pc = 0x1DB0D0u;
label_1db0d0:
    // 0x1db0d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1db0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1db0d4:
    // 0x1db0d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1db0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1db0d8:
    // 0x1db0d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db0dc:
    // 0x1db0dc: 0x8e0401b4  lw          $a0, 0x1B4($s0)
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_1db0e0:
    // 0x1db0e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1db0e4:
    // 0x1db0e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1db0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1db0e8:
    // 0x1db0e8: 0x8c421108  lw          $v0, 0x1108($v0)
    ctx->pc = 0x1db0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
label_1db0ec:
    // 0x1db0ec: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1db0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1db0f0:
    // 0x1db0f0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1db0f4:
    // 0x1db0f4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1db0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db0f8:
    // 0x1db0f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1db0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1db0fc:
    // 0x1db0fc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1db0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1db100:
    // 0x1db100: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1db100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1db104:
    // 0x1db104: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db108:
    // 0x1db108: 0x60f809  jalr        $v1
label_1db10c:
    if (ctx->pc == 0x1DB10Cu) {
        ctx->pc = 0x1DB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB108u;
        // 0x1db10c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB110u;
        goto label_1db110;
    }
    ctx->pc = 0x1DB108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB110u);
        ctx->pc = 0x1DB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB108u;
        // 0x1db10c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB108u, 0x1DB110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB110u;
label_1db110:
    // 0x1db110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db114:
    // 0x1db114: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1db118:
    // 0x1db118: 0x3e00008  jr          $ra
label_1db11c:
    if (ctx->pc == 0x1DB11Cu) {
        ctx->pc = 0x1DB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB118u;
        // 0x1db11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB120u;
        goto label_fallthrough_0x1db118;
    }
    ctx->pc = 0x1DB118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB118u;
        // 0x1db11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db118:
    ctx->pc = 0x1DB120u;
}
