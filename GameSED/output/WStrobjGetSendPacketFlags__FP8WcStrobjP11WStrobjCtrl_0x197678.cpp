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

// Function: WStrobjGetSendPacketFlags__FP8WcStrobjP11WStrobjCtrl
// Address: 0x197678 - 0x197730
void WStrobjGetSendPacketFlags__FP8WcStrobjP11WStrobjCtrl_0x197678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WStrobjGetSendPacketFlags__FP8WcStrobjP11WStrobjCtrl_0x197678");
#endif

    ctx->pc = 0x197678u;

    // 0x197678: 0x248b0150  addiu       $t3, $a0, 0x150
    ctx->pc = 0x197678u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x19767c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x19767cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197680: 0x95670000  lhu         $a3, 0x0($t3)
    ctx->pc = 0x197680u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x197684: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197688: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x197688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19768c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x19768cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x197690: 0x30e40800  andi        $a0, $a3, 0x800
    ctx->pc = 0x197690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
    // 0x197694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197698: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x197698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19769c: 0xea1824  and         $v1, $a3, $t2
    ctx->pc = 0x19769cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x1976a0: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x1976a0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1976a4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1976A4u;
    {
        const bool branch_taken_0x1976a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1976A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976A4u;
        // 0x1976a8: 0x24a50154  addiu       $a1, $a1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976a4) {
            ctx->pc = 0x1976BCu;
            goto label_1976bc;
        }
    }
    ctx->pc = 0x1976ACu;
    // 0x1976ac: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1976acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1976b0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1976b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1976b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1976B4u;
    {
        const bool branch_taken_0x1976b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976B4u;
        // 0x1976b8: 0x30e30100  andi        $v1, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976b4) {
            ctx->pc = 0x1976C8u;
            goto label_1976c8;
        }
    }
    ctx->pc = 0x1976BCu;
label_1976bc:
    // 0x1976bc: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1976bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1976c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1976C0u;
    {
        const bool branch_taken_0x1976c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976C0u;
        // 0x1976c4: 0x34c60200  ori         $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976c0) {
            ctx->pc = 0x1976D0u;
            goto label_1976d0;
        }
    }
    ctx->pc = 0x1976C8u;
label_1976c8:
    // 0x1976c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1976c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1976cc: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x1976ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_1976d0:
    // 0x1976d0: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x1976d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1976d4: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x1976d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x1976d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1976D8u;
    {
        const bool branch_taken_0x1976d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1976DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976D8u;
        // 0x1976dc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976d8) {
            ctx->pc = 0x1976E8u;
            goto label_1976e8;
        }
    }
    ctx->pc = 0x1976E0u;
    // 0x1976e0: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x1976e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x1976e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1976e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1976e8:
    // 0x1976e8: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1976e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1976ec: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x1976ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x1976f0: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x1976f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1976f4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1976f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1976f8: 0x8d230028  lw          $v1, 0x28($t1)
    ctx->pc = 0x1976f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x1976fc: 0x34c20100  ori         $v0, $a2, 0x100
    ctx->pc = 0x1976fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x197700: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x197700u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x197704: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x197704u;
    {
        const bool branch_taken_0x197704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x197704) {
            ctx->pc = 0x197708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197704u;
            // 0x197708: 0xad28002c  sw          $t0, 0x2C($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19771Cu;
            goto label_19771c;
        }
    }
    ctx->pc = 0x19770Cu;
    // 0x19770c: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x197710: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197710u;
    {
        const bool branch_taken_0x197710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x197710) {
            ctx->pc = 0x197728u;
            goto label_197728;
        }
    }
    ctx->pc = 0x197718u;
    // 0x197718: 0xad28002c  sw          $t0, 0x2C($t1)
    ctx->pc = 0x197718u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 8));
label_19771c:
    // 0x19771c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197720: 0x3e00008  jr          $ra
    ctx->pc = 0x197720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197720u;
        // 0x197724: 0xad260028  sw          $a2, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197728u;
label_197728:
    // 0x197728: 0x3e00008  jr          $ra
    ctx->pc = 0x197728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197728u;
        // 0x19772c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197730u;
}
