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

// Function: RadarGaugeVisible__8ApcPanelb
// Address: 0x160300 - 0x160448
void RadarGaugeVisible__8ApcPanelb_0x160300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RadarGaugeVisible__8ApcPanelb_0x160300");
#endif

    switch (ctx->pc) {
        case 0x160300u: goto label_160300;
        case 0x160304u: goto label_160304;
        case 0x160308u: goto label_160308;
        case 0x16030cu: goto label_16030c;
        case 0x160310u: goto label_160310;
        case 0x160314u: goto label_160314;
        case 0x160318u: goto label_160318;
        case 0x16031cu: goto label_16031c;
        case 0x160320u: goto label_160320;
        case 0x160324u: goto label_160324;
        case 0x160328u: goto label_160328;
        case 0x16032cu: goto label_16032c;
        case 0x160330u: goto label_160330;
        case 0x160334u: goto label_160334;
        case 0x160338u: goto label_160338;
        case 0x16033cu: goto label_16033c;
        case 0x160340u: goto label_160340;
        case 0x160344u: goto label_160344;
        case 0x160348u: goto label_160348;
        case 0x16034cu: goto label_16034c;
        case 0x160350u: goto label_160350;
        case 0x160354u: goto label_160354;
        case 0x160358u: goto label_160358;
        case 0x16035cu: goto label_16035c;
        case 0x160360u: goto label_160360;
        case 0x160364u: goto label_160364;
        case 0x160368u: goto label_160368;
        case 0x16036cu: goto label_16036c;
        case 0x160370u: goto label_160370;
        case 0x160374u: goto label_160374;
        case 0x160378u: goto label_160378;
        case 0x16037cu: goto label_16037c;
        case 0x160380u: goto label_160380;
        case 0x160384u: goto label_160384;
        case 0x160388u: goto label_160388;
        case 0x16038cu: goto label_16038c;
        case 0x160390u: goto label_160390;
        case 0x160394u: goto label_160394;
        case 0x160398u: goto label_160398;
        case 0x16039cu: goto label_16039c;
        case 0x1603a0u: goto label_1603a0;
        case 0x1603a4u: goto label_1603a4;
        case 0x1603a8u: goto label_1603a8;
        case 0x1603acu: goto label_1603ac;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603b4u: goto label_1603b4;
        case 0x1603b8u: goto label_1603b8;
        case 0x1603bcu: goto label_1603bc;
        case 0x1603c0u: goto label_1603c0;
        case 0x1603c4u: goto label_1603c4;
        case 0x1603c8u: goto label_1603c8;
        case 0x1603ccu: goto label_1603cc;
        case 0x1603d0u: goto label_1603d0;
        case 0x1603d4u: goto label_1603d4;
        case 0x1603d8u: goto label_1603d8;
        case 0x1603dcu: goto label_1603dc;
        case 0x1603e0u: goto label_1603e0;
        case 0x1603e4u: goto label_1603e4;
        case 0x1603e8u: goto label_1603e8;
        case 0x1603ecu: goto label_1603ec;
        case 0x1603f0u: goto label_1603f0;
        case 0x1603f4u: goto label_1603f4;
        case 0x1603f8u: goto label_1603f8;
        case 0x1603fcu: goto label_1603fc;
        case 0x160400u: goto label_160400;
        case 0x160404u: goto label_160404;
        case 0x160408u: goto label_160408;
        case 0x16040cu: goto label_16040c;
        case 0x160410u: goto label_160410;
        case 0x160414u: goto label_160414;
        case 0x160418u: goto label_160418;
        case 0x16041cu: goto label_16041c;
        case 0x160420u: goto label_160420;
        case 0x160424u: goto label_160424;
        case 0x160428u: goto label_160428;
        case 0x16042cu: goto label_16042c;
        case 0x160430u: goto label_160430;
        case 0x160434u: goto label_160434;
        case 0x160438u: goto label_160438;
        case 0x16043cu: goto label_16043c;
        case 0x160440u: goto label_160440;
        case 0x160444u: goto label_160444;
        default: break;
    }

    ctx->pc = 0x160300u;

label_160300:
    // 0x160300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_160304:
    // 0x160304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_160308:
    // 0x160308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16030c:
    // 0x16030c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_160310:
    // 0x160310: 0x14a0002d  bnez        $a1, . + 4 + (0x2D << 2)
label_160314:
    if (ctx->pc == 0x160314u) {
        ctx->pc = 0x160314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160310u;
        // 0x160314: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160318u;
        goto label_160318;
    }
    ctx->pc = 0x160310u;
    {
        const bool branch_taken_0x160310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x160314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160310u;
        // 0x160314: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160310) {
            ctx->pc = 0x1603C8u;
            goto label_1603c8;
        }
    }
    ctx->pc = 0x160318u;
label_160318:
    // 0x160318: 0x8e060f30  lw          $a2, 0xF30($s0)
    ctx->pc = 0x160318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3888)));
label_16031c:
    // 0x16031c: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
label_160320:
    if (ctx->pc == 0x160320u) {
        ctx->pc = 0x160320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16031Cu;
        // 0x160320: 0x8e060f34  lw          $a2, 0xF34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160324u;
        goto label_160324;
    }
    ctx->pc = 0x16031Cu;
    {
        const bool branch_taken_0x16031c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16031c) {
            ctx->pc = 0x160320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16031Cu;
            // 0x160320: 0x8e060f34  lw          $a2, 0xF34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160340u;
            goto label_160340;
        }
    }
    ctx->pc = 0x160324u;
label_160324:
    // 0x160324: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160328:
    // 0x160328: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16032c:
    // 0x16032c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160330:
    // 0x160330: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160334:
    // 0x160334: 0x60f809  jalr        $v1
label_160338:
    if (ctx->pc == 0x160338u) {
        ctx->pc = 0x160338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160334u;
        // 0x160338: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16033Cu;
        goto label_16033c;
    }
    ctx->pc = 0x160334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16033Cu);
        ctx->pc = 0x160338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160334u;
        // 0x160338: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160334u, 0x16033Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16033Cu;
label_16033c:
    // 0x16033c: 0x8e060f34  lw          $a2, 0xF34($s0)
    ctx->pc = 0x16033cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3892)));
label_160340:
    // 0x160340: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_160344:
    if (ctx->pc == 0x160344u) {
        ctx->pc = 0x160344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160340u;
        // 0x160344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160348u;
        goto label_160348;
    }
    ctx->pc = 0x160340u;
    {
        const bool branch_taken_0x160340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160340u;
        // 0x160344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160340) {
            ctx->pc = 0x160360u;
            goto label_160360;
        }
    }
    ctx->pc = 0x160348u;
label_160348:
    // 0x160348: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16034c:
    // 0x16034c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160350:
    // 0x160350: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160354:
    // 0x160354: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160358:
    // 0x160358: 0x60f809  jalr        $v1
label_16035c:
    if (ctx->pc == 0x16035Cu) {
        ctx->pc = 0x16035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160358u;
        // 0x16035c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160360u;
        goto label_160360;
    }
    ctx->pc = 0x160358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160360u);
        ctx->pc = 0x16035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160358u;
        // 0x16035c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160358u, 0x160360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160360u;
label_160360:
    // 0x160360: 0x8e060f38  lw          $a2, 0xF38($s0)
    ctx->pc = 0x160360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3896)));
label_160364:
    // 0x160364: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
label_160368:
    if (ctx->pc == 0x160368u) {
        ctx->pc = 0x160368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160364u;
        // 0x160368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16036Cu;
        goto label_16036c;
    }
    ctx->pc = 0x160364u;
    {
        const bool branch_taken_0x160364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160364u;
        // 0x160368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160364) {
            ctx->pc = 0x160434u;
            goto label_160434;
        }
    }
    ctx->pc = 0x16036Cu;
label_16036c:
    // 0x16036c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160370:
    // 0x160370: 0x26100f3c  addiu       $s0, $s0, 0xF3C
    ctx->pc = 0x160370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3900));
label_160374:
    // 0x160374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x160374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160378:
    // 0x160378: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16037c:
    // 0x16037c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16037cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160380:
    // 0x160380: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160384:
    // 0x160384: 0x60f809  jalr        $v1
label_160388:
    if (ctx->pc == 0x160388u) {
        ctx->pc = 0x160388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160384u;
        // 0x160388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16038Cu;
        goto label_16038c;
    }
    ctx->pc = 0x160384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16038Cu);
        ctx->pc = 0x160388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160384u;
        // 0x160388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160384u, 0x16038Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16038Cu;
label_16038c:
    // 0x16038c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16038cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_160390:
    // 0x160390: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x160390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_160394:
    // 0x160394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160398:
    // 0x160398: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16039c:
    // 0x16039c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1603a0:
    // 0x1603a0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1603a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1603a4:
    // 0x1603a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1603a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1603a8:
    // 0x1603a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1603a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1603ac:
    // 0x1603ac: 0x60f809  jalr        $v1
label_1603b0:
    if (ctx->pc == 0x1603B0u) {
        ctx->pc = 0x1603B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603ACu;
        // 0x1603b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603B4u;
        goto label_1603b4;
    }
    ctx->pc = 0x1603ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1603B4u);
        ctx->pc = 0x1603B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603ACu;
        // 0x1603b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1603ACu, 0x1603B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1603B4u;
label_1603b4:
    // 0x1603b4: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1603b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_1603b8:
    // 0x1603b8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1603bc:
    if (ctx->pc == 0x1603BCu) {
        ctx->pc = 0x1603BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603B8u;
        // 0x1603bc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603C0u;
        goto label_1603c0;
    }
    ctx->pc = 0x1603B8u;
    {
        const bool branch_taken_0x1603b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1603b8) {
            ctx->pc = 0x1603BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1603B8u;
            // 0x1603bc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160390;
        }
    }
    ctx->pc = 0x1603C0u;
label_1603c0:
    // 0x1603c0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1603c4:
    if (ctx->pc == 0x1603C4u) {
        ctx->pc = 0x1603C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603C0u;
        // 0x1603c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603C8u;
        goto label_1603c8;
    }
    ctx->pc = 0x1603C0u;
    {
        const bool branch_taken_0x1603c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603C0u;
        // 0x1603c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603c0) {
            ctx->pc = 0x160438u;
            goto label_160438;
        }
    }
    ctx->pc = 0x1603C8u;
label_1603c8:
    // 0x1603c8: 0x8e060f30  lw          $a2, 0xF30($s0)
    ctx->pc = 0x1603c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3888)));
label_1603cc:
    // 0x1603cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1603d0:
    if (ctx->pc == 0x1603D0u) {
        ctx->pc = 0x1603D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603CCu;
        // 0x1603d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603D4u;
        goto label_1603d4;
    }
    ctx->pc = 0x1603CCu;
    {
        const bool branch_taken_0x1603cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603CCu;
        // 0x1603d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603cc) {
            ctx->pc = 0x1603ECu;
            goto label_1603ec;
        }
    }
    ctx->pc = 0x1603D4u;
label_1603d4:
    // 0x1603d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1603d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1603d8:
    // 0x1603d8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1603d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1603dc:
    // 0x1603dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1603dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1603e0:
    // 0x1603e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1603e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1603e4:
    // 0x1603e4: 0x60f809  jalr        $v1
label_1603e8:
    if (ctx->pc == 0x1603E8u) {
        ctx->pc = 0x1603E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603E4u;
        // 0x1603e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603ECu;
        goto label_1603ec;
    }
    ctx->pc = 0x1603E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1603ECu);
        ctx->pc = 0x1603E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603E4u;
        // 0x1603e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1603E4u, 0x1603ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1603ECu;
label_1603ec:
    // 0x1603ec: 0x8e060f34  lw          $a2, 0xF34($s0)
    ctx->pc = 0x1603ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3892)));
label_1603f0:
    // 0x1603f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1603f4:
    if (ctx->pc == 0x1603F4u) {
        ctx->pc = 0x1603F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603F0u;
        // 0x1603f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603F8u;
        goto label_1603f8;
    }
    ctx->pc = 0x1603F0u;
    {
        const bool branch_taken_0x1603f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603F0u;
        // 0x1603f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603f0) {
            ctx->pc = 0x160410u;
            goto label_160410;
        }
    }
    ctx->pc = 0x1603F8u;
label_1603f8:
    // 0x1603f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1603f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1603fc:
    // 0x1603fc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1603fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160400:
    // 0x160400: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160404:
    // 0x160404: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160408:
    // 0x160408: 0x60f809  jalr        $v1
label_16040c:
    if (ctx->pc == 0x16040Cu) {
        ctx->pc = 0x16040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160408u;
        // 0x16040c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160410u;
        goto label_160410;
    }
    ctx->pc = 0x160408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160410u);
        ctx->pc = 0x16040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160408u;
        // 0x16040c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160408u, 0x160410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160410u;
label_160410:
    // 0x160410: 0x8e060f38  lw          $a2, 0xF38($s0)
    ctx->pc = 0x160410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3896)));
label_160414:
    // 0x160414: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_160418:
    if (ctx->pc == 0x160418u) {
        ctx->pc = 0x160418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160414u;
        // 0x160418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16041Cu;
        goto label_16041c;
    }
    ctx->pc = 0x160414u;
    {
        const bool branch_taken_0x160414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160414u;
        // 0x160418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160414) {
            ctx->pc = 0x160434u;
            goto label_160434;
        }
    }
    ctx->pc = 0x16041Cu;
label_16041c:
    // 0x16041c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160420:
    // 0x160420: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160424:
    // 0x160424: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160428:
    // 0x160428: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16042c:
    // 0x16042c: 0x60f809  jalr        $v1
label_160430:
    if (ctx->pc == 0x160430u) {
        ctx->pc = 0x160430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16042Cu;
        // 0x160430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160434u;
        goto label_160434;
    }
    ctx->pc = 0x16042Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160434u);
        ctx->pc = 0x160430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16042Cu;
        // 0x160430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16042Cu, 0x160434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160434u;
label_160434:
    // 0x160434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160438:
    // 0x160438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16043c:
    // 0x16043c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16043cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160440:
    // 0x160440: 0x3e00008  jr          $ra
label_160444:
    if (ctx->pc == 0x160444u) {
        ctx->pc = 0x160444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160440u;
        // 0x160444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160448u;
        goto label_fallthrough_0x160440;
    }
    ctx->pc = 0x160440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160440u;
        // 0x160444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160440:
    ctx->pc = 0x160448u;
}
