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

// Function: SetPolygonGifTag__7WcFrameP10Q_WORDDATAb
// Address: 0x193318 - 0x193424
void SetPolygonGifTag__7WcFrameP10Q_WORDDATAb_0x193318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPolygonGifTag__7WcFrameP10Q_WORDDATAb_0x193318");
#endif

    ctx->pc = 0x193318u;

    // 0x193318: 0x24880150  addiu       $t0, $a0, 0x150
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x19331c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x19331cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193320: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x193320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193324: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x193324u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193328: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x193328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x19332c: 0x252a0010  addiu       $t2, $t1, 0x10
    ctx->pc = 0x19332cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x193330: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x193330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x193334: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x193334u;
    {
        const bool branch_taken_0x193334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193334u;
        // 0x193338: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193334) {
            ctx->pc = 0x193378u;
            goto label_193378;
        }
    }
    ctx->pc = 0x19333Cu;
    // 0x19333c: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x19333cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x193340: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x193340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x193344: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x193344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x193348: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x193348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x19334c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x193350: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x193350u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x193354: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x193358: 0x25270020  addiu       $a3, $t1, 0x20
    ctx->pc = 0x193358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x19335c: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x19335cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x193360: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x193360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x193364: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x193364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x193368: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x193368u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x19336c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x19336cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x193370: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x193370u;
    {
        const bool branch_taken_0x193370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193370u;
        // 0x193374: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193370) {
            ctx->pc = 0x1933A4u;
            goto label_1933a4;
        }
    }
    ctx->pc = 0x193378u;
label_193378:
    // 0x193378: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19337c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x193380: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x193380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x193384: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x193384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x193388: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x19338c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x19338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x193390: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x193390u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x193394: 0x25270020  addiu       $a3, $t1, 0x20
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x193398: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x193398u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x19339c: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x19339cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x1933a0: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1933a0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_1933a4:
    // 0x1933a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1933a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933a8: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1933A8u;
    {
        const bool branch_taken_0x1933a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933A8u;
        // 0x1933ac: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933a8) {
            ctx->pc = 0x1933C8u;
            goto label_1933c8;
        }
    }
    ctx->pc = 0x1933B0u;
    // 0x1933b0: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x1933b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x1933b4: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1933b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1933b8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1933b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1933bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1933BCu;
    {
        const bool branch_taken_0x1933bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933BCu;
        // 0x1933c0: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933bc) {
            ctx->pc = 0x1933D8u;
            goto label_1933d8;
        }
    }
    ctx->pc = 0x1933C4u;
    // 0x1933c4: 0x0  nop
    ctx->pc = 0x1933c4u;
    // NOP
label_1933c8:
    // 0x1933c8: 0xdf838c80  ld          $v1, -0x7380($gp)
    ctx->pc = 0x1933c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x1933cc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1933ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1933d0: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x1933d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x1933d4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1933d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_1933d8:
    // 0x1933d8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1933d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1933dc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1933dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933e0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1933e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1933e4: 0x12c1823  subu        $v1, $t1, $t4
    ctx->pc = 0x1933e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1933e8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1933e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1933ec: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x1933ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x1933f0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1933f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1933f4: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1933f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x1933f8: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x1933f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x1933fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1933fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x193400: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x193404: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x193404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x193408: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x193408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x19340c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x19340cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x193410: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x193410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193414: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x193414u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x193418: 0xfd860008  sd          $a2, 0x8($t4)
    ctx->pc = 0x193418u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 6));
    // 0x19341c: 0x3e00008  jr          $ra
    ctx->pc = 0x19341Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19341Cu;
        // 0x193420: 0xfd830000  sd          $v1, 0x0($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19341Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193424u;
}
