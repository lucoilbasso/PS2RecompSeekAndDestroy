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

// Function: SendEventMsg__5BcObji
// Address: 0x1a13f8 - 0x1a1464
void SendEventMsg__5BcObji_0x1a13f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SendEventMsg__5BcObji_0x1a13f8");
#endif

    switch (ctx->pc) {
        case 0x1a13f8u: goto label_1a13f8;
        case 0x1a13fcu: goto label_1a13fc;
        case 0x1a1400u: goto label_1a1400;
        case 0x1a1404u: goto label_1a1404;
        case 0x1a1408u: goto label_1a1408;
        case 0x1a140cu: goto label_1a140c;
        case 0x1a1410u: goto label_1a1410;
        case 0x1a1414u: goto label_1a1414;
        case 0x1a1418u: goto label_1a1418;
        case 0x1a141cu: goto label_1a141c;
        case 0x1a1420u: goto label_1a1420;
        case 0x1a1424u: goto label_1a1424;
        case 0x1a1428u: goto label_1a1428;
        case 0x1a142cu: goto label_1a142c;
        case 0x1a1430u: goto label_1a1430;
        case 0x1a1434u: goto label_1a1434;
        case 0x1a1438u: goto label_1a1438;
        case 0x1a143cu: goto label_1a143c;
        case 0x1a1440u: goto label_1a1440;
        case 0x1a1444u: goto label_1a1444;
        case 0x1a1448u: goto label_1a1448;
        case 0x1a144cu: goto label_1a144c;
        case 0x1a1450u: goto label_1a1450;
        case 0x1a1454u: goto label_1a1454;
        case 0x1a1458u: goto label_1a1458;
        case 0x1a145cu: goto label_1a145c;
        case 0x1a1460u: goto label_1a1460;
        default: break;
    }

    ctx->pc = 0x1a13f8u;

label_1a13f8:
    // 0x1a13f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a13f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a13fc:
    // 0x1a13fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a13fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1400:
    // 0x1a1400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1404:
    // 0x1a1404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a1408:
    // 0x1a1408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a140c:
    // 0x1a140c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a1410:
    // 0x1a1410: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1a1410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a1414:
    // 0x1a1414: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1a1418:
    if (ctx->pc == 0x1A1418u) {
        ctx->pc = 0x1A1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1414u;
        // 0x1a1418: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A141Cu;
        goto label_1a141c;
    }
    ctx->pc = 0x1A1414u;
    {
        const bool branch_taken_0x1a1414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1414u;
        // 0x1a1418: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1414) {
            ctx->pc = 0x1A144Cu;
            goto label_1a144c;
        }
    }
    ctx->pc = 0x1A141Cu;
label_1a141c:
    // 0x1a141c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1a141cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1420:
    // 0x1a1420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1424:
    // 0x1a1424: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a1424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1428:
    // 0x1a1428: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a1428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a142c:
    // 0x1a142c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1a142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1a1430:
    // 0x1a1430: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1a1434:
    // 0x1a1434: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1a1434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1438:
    // 0x1a1438: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a143c:
    // 0x1a143c: 0x60f809  jalr        $v1
label_1a1440:
    if (ctx->pc == 0x1A1440u) {
        ctx->pc = 0x1A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A143Cu;
        // 0x1a1440: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1444u;
        goto label_1a1444;
    }
    ctx->pc = 0x1A143Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1444u);
        ctx->pc = 0x1A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A143Cu;
        // 0x1a1440: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A143Cu, 0x1A1444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1444u;
label_1a1444:
    // 0x1a1444: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_1a1448:
    if (ctx->pc == 0x1A1448u) {
        ctx->pc = 0x1A1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1444u;
        // 0x1a1448: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A144Cu;
        goto label_1a144c;
    }
    ctx->pc = 0x1A1444u;
    {
        const bool branch_taken_0x1a1444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1444) {
            ctx->pc = 0x1A1448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1444u;
            // 0x1a1448: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1420;
        }
    }
    ctx->pc = 0x1A144Cu;
label_1a144c:
    // 0x1a144c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a144cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1450:
    // 0x1a1450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1454:
    // 0x1a1454: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1458:
    // 0x1a1458: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a145c:
    // 0x1a145c: 0x3e00008  jr          $ra
label_1a1460:
    if (ctx->pc == 0x1A1460u) {
        ctx->pc = 0x1A1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A145Cu;
        // 0x1a1460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1464u;
        goto label_fallthrough_0x1a145c;
    }
    ctx->pc = 0x1A145Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A145Cu;
        // 0x1a1460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A145Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a145c:
    ctx->pc = 0x1A1464u;
}
