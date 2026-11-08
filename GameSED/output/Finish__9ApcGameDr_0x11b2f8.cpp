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

// Function: Finish__9ApcGameDr
// Address: 0x11b2f8 - 0x11b390
void Finish__9ApcGameDr_0x11b2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcGameDr_0x11b2f8");
#endif

    switch (ctx->pc) {
        case 0x11b2f8u: goto label_11b2f8;
        case 0x11b2fcu: goto label_11b2fc;
        case 0x11b300u: goto label_11b300;
        case 0x11b304u: goto label_11b304;
        case 0x11b308u: goto label_11b308;
        case 0x11b30cu: goto label_11b30c;
        case 0x11b310u: goto label_11b310;
        case 0x11b314u: goto label_11b314;
        case 0x11b318u: goto label_11b318;
        case 0x11b31cu: goto label_11b31c;
        case 0x11b320u: goto label_11b320;
        case 0x11b324u: goto label_11b324;
        case 0x11b328u: goto label_11b328;
        case 0x11b32cu: goto label_11b32c;
        case 0x11b330u: goto label_11b330;
        case 0x11b334u: goto label_11b334;
        case 0x11b338u: goto label_11b338;
        case 0x11b33cu: goto label_11b33c;
        case 0x11b340u: goto label_11b340;
        case 0x11b344u: goto label_11b344;
        case 0x11b348u: goto label_11b348;
        case 0x11b34cu: goto label_11b34c;
        case 0x11b350u: goto label_11b350;
        case 0x11b354u: goto label_11b354;
        case 0x11b358u: goto label_11b358;
        case 0x11b35cu: goto label_11b35c;
        case 0x11b360u: goto label_11b360;
        case 0x11b364u: goto label_11b364;
        case 0x11b368u: goto label_11b368;
        case 0x11b36cu: goto label_11b36c;
        case 0x11b370u: goto label_11b370;
        case 0x11b374u: goto label_11b374;
        case 0x11b378u: goto label_11b378;
        case 0x11b37cu: goto label_11b37c;
        case 0x11b380u: goto label_11b380;
        case 0x11b384u: goto label_11b384;
        case 0x11b388u: goto label_11b388;
        case 0x11b38cu: goto label_11b38c;
        default: break;
    }

    ctx->pc = 0x11b2f8u;

label_11b2f8:
    // 0x11b2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11b2fc:
    // 0x11b2fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b300:
    // 0x11b300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b304:
    // 0x11b304: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_11b308:
    // 0x11b308: 0xc06bd1c  jal         func_1AF470
label_11b30c:
    if (ctx->pc == 0x11B30Cu) {
        ctx->pc = 0x11B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B308u;
        // 0x11b30c: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B310u;
        goto label_11b310;
    }
    ctx->pc = 0x11B308u;
    SET_GPR_U32(ctx, 31, 0x11B310u);
    ctx->pc = 0x11B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B308u;
    // 0x11b30c: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x11B308u, 0x11B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B310u;
label_11b310:
    // 0x11b310: 0x8e06009c  lw          $a2, 0x9C($s0)
    ctx->pc = 0x11b310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_11b314:
    // 0x11b314: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_11b318:
    if (ctx->pc == 0x11B318u) {
        ctx->pc = 0x11B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B314u;
        // 0x11b318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B31Cu;
        goto label_11b31c;
    }
    ctx->pc = 0x11B314u;
    {
        const bool branch_taken_0x11b314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B314u;
        // 0x11b318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b314) {
            ctx->pc = 0x11B334u;
            goto label_11b334;
        }
    }
    ctx->pc = 0x11B31Cu;
label_11b31c:
    // 0x11b31c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11b320:
    // 0x11b320: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11b324:
    // 0x11b324: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b328:
    // 0x11b328: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b32c:
    // 0x11b32c: 0x60f809  jalr        $v1
label_11b330:
    if (ctx->pc == 0x11B330u) {
        ctx->pc = 0x11B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B32Cu;
        // 0x11b330: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B334u;
        goto label_11b334;
    }
    ctx->pc = 0x11B32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B334u);
        ctx->pc = 0x11B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B32Cu;
        // 0x11b330: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B32Cu, 0x11B334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B334u;
label_11b334:
    // 0x11b334: 0x8e060098  lw          $a2, 0x98($s0)
    ctx->pc = 0x11b334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_11b338:
    // 0x11b338: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_11b33c:
    if (ctx->pc == 0x11B33Cu) {
        ctx->pc = 0x11B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B338u;
        // 0x11b33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B340u;
        goto label_11b340;
    }
    ctx->pc = 0x11B338u;
    {
        const bool branch_taken_0x11b338 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B338u;
        // 0x11b33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b338) {
            ctx->pc = 0x11B358u;
            goto label_11b358;
        }
    }
    ctx->pc = 0x11B340u;
label_11b340:
    // 0x11b340: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11b344:
    // 0x11b344: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11b348:
    // 0x11b348: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b34c:
    // 0x11b34c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b350:
    // 0x11b350: 0x60f809  jalr        $v1
label_11b354:
    if (ctx->pc == 0x11B354u) {
        ctx->pc = 0x11B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B350u;
        // 0x11b354: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B358u;
        goto label_11b358;
    }
    ctx->pc = 0x11B350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B358u);
        ctx->pc = 0x11B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B350u;
        // 0x11b354: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B350u, 0x11B358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B358u;
label_11b358:
    // 0x11b358: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x11b358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_11b35c:
    // 0x11b35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b360:
    // 0x11b360: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11b364:
    // 0x11b364: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11b368:
    // 0x11b368: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b36c:
    // 0x11b36c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b370:
    // 0x11b370: 0x60f809  jalr        $v1
label_11b374:
    if (ctx->pc == 0x11B374u) {
        ctx->pc = 0x11B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B370u;
        // 0x11b374: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B378u;
        goto label_11b378;
    }
    ctx->pc = 0x11B370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B378u);
        ctx->pc = 0x11B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B370u;
        // 0x11b374: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B370u, 0x11B378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B378u;
label_11b378:
    // 0x11b378: 0xc066580  jal         func_199600
label_11b37c:
    if (ctx->pc == 0x11B37Cu) {
        ctx->pc = 0x11B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B378u;
        // 0x11b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B380u;
        goto label_11b380;
    }
    ctx->pc = 0x11B378u;
    SET_GPR_U32(ctx, 31, 0x11B380u);
    ctx->pc = 0x11B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B378u;
    // 0x11b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199600u, 0x11B378u, 0x11B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B380u;
label_11b380:
    // 0x11b380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b384:
    // 0x11b384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11b388:
    // 0x11b388: 0x3e00008  jr          $ra
label_11b38c:
    if (ctx->pc == 0x11B38Cu) {
        ctx->pc = 0x11B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B388u;
        // 0x11b38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B390u;
        goto label_fallthrough_0x11b388;
    }
    ctx->pc = 0x11B388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B388u;
        // 0x11b38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11b388:
    ctx->pc = 0x11B390u;
}
