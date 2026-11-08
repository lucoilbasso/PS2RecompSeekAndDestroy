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

// Function: InqSendTexPacket__8WcStrobj
// Address: 0x196688 - 0x1967ac
void InqSendTexPacket__8WcStrobj_0x196688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqSendTexPacket__8WcStrobj_0x196688");
#endif

    switch (ctx->pc) {
        case 0x1966e0u: goto label_1966e0;
        case 0x1966f8u: goto label_1966f8;
        case 0x196788u: goto label_196788;
        default: break;
    }

    ctx->pc = 0x196688u;

    // 0x196688: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19668c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196694: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x196694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x196698: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19669c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1966a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1966a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1966a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1966a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1966a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1966a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1966ac: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1966acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1966b0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1966B0u;
    {
        const bool branch_taken_0x1966b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1966B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B0u;
        // 0x1966b4: 0x26140200  addiu       $s4, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966b0) {
            ctx->pc = 0x196788u;
            goto label_196788;
        }
    }
    ctx->pc = 0x1966B8u;
    // 0x1966b8: 0x8e0301bc  lw          $v1, 0x1BC($s0)
    ctx->pc = 0x1966b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1966bc: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x1966bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x1966c0: 0x36730200  ori         $s3, $s3, 0x200
    ctx->pc = 0x1966c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)512);
    // 0x1966c4: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1966c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1966c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1966c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1966d0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1966D0u;
    {
        const bool branch_taken_0x1966d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1966D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966D0u;
        // 0x1966d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966d0) {
            ctx->pc = 0x196710u;
            goto label_196710;
        }
    }
    ctx->pc = 0x1966D8u;
    // 0x1966d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1966d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966dc: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x1966dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1966e0:
    // 0x1966e0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1966e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1966e8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1966e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1966ec: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x1966ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1966f0: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x1966F0u;
    SET_GPR_U32(ctx, 31, 0x1966F8u);
    ctx->pc = 0x1966F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1966F0u;
    // 0x1966f4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x1966F0u, 0x1966F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1966F8u;
label_1966f8:
    // 0x1966f8: 0x8e0301bc  lw          $v1, 0x1BC($s0)
    ctx->pc = 0x1966f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1966fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1966fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196700: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x196700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x196704: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x196704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196708: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x196708u;
    {
        const bool branch_taken_0x196708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196708) {
            ctx->pc = 0x19670Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196708u;
            // 0x19670c: 0x8c650028  lw          $a1, 0x28($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1966E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1966e0;
        }
    }
    ctx->pc = 0x196710u;
label_196710:
    // 0x196710: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x196710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196714: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x196718: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x196718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x19671c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x19671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196720: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x196724: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x196724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196728: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x196728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x19672c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x196730: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x196730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x196734: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x196734u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x196738: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x196738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x19673c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19673cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x196740: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x196740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x196744: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x196744u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x196748: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x196748u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x19674c: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x19674cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x196750: 0xfd000000  sd          $zero, 0x0($t0)
    ctx->pc = 0x196750u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x196754: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x196754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x196758: 0x1131023  subu        $v0, $t0, $s3
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x19675c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196760: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x196760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x196764: 0x284200a1  slti        $v0, $v0, 0xA1
    ctx->pc = 0x196764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x196768: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x196768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x19676c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19676Cu;
    {
        const bool branch_taken_0x19676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19676Cu;
        // 0x196770: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19676c) {
            ctx->pc = 0x196788u;
            goto label_196788;
        }
    }
    ctx->pc = 0x196774u;
    // 0x196774: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x196774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x196778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19677c: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x19677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
    // 0x196780: 0xc068186  jal         func_1A0618
    ctx->pc = 0x196780u;
    SET_GPR_U32(ctx, 31, 0x196788u);
    ctx->pc = 0x196784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196780u;
    // 0x196784: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x196780u, 0x196788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196788u;
label_196788:
    // 0x196788: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x196788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19678c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19678cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196798: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x196798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19679c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19679cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1967a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1967a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1967a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1967A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1967A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967A4u;
        // 0x1967a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1967A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1967ACu;
}
