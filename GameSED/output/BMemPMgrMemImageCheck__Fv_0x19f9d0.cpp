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

// Function: BMemPMgrMemImageCheck__Fv
// Address: 0x19f9d0 - 0x19faf4
void BMemPMgrMemImageCheck__Fv_0x19f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrMemImageCheck__Fv_0x19f9d0");
#endif

    switch (ctx->pc) {
        case 0x19f9f8u: goto label_19f9f8;
        case 0x19fa28u: goto label_19fa28;
        case 0x19fa64u: goto label_19fa64;
        case 0x19fabcu: goto label_19fabc;
        case 0x19fad0u: goto label_19fad0;
        case 0x19fae4u: goto label_19fae4;
        default: break;
    }

    ctx->pc = 0x19f9d0u;

    // 0x19f9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f9d4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x19f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x19f9d8: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x19f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x19f9dc: 0x3c0b0fff  lui         $t3, 0xFFF
    ctx->pc = 0x19f9dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4095 << 16));
    // 0x19f9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f9e4: 0x2445e130  addiu       $a1, $v0, -0x1ED0
    ctx->pc = 0x19f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x19f9e8: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x19f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x19f9ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19f9ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9f0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x19f9f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x19f9f4: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x19f9f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
label_19f9f8:
    // 0x19f9f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f9fc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x19F9FCu;
    {
        const bool branch_taken_0x19f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9FCu;
        // 0x19fa00: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9fc) {
            ctx->pc = 0x19FA98u;
            goto label_19fa98;
        }
    }
    ctx->pc = 0x19FA04u;
    // 0x19fa04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fa08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fa0c: 0xab1024  and         $v0, $a1, $t3
    ctx->pc = 0x19fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x19fa10: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x19FA10u;
    {
        const bool branch_taken_0x19fa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa10) {
            ctx->pc = 0x19FA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA10u;
            // 0x19fa14: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FA64u;
            goto label_19fa64;
        }
    }
    ctx->pc = 0x19FA18u;
    // 0x19fa18: 0x3c080fff  lui         $t0, 0xFFF
    ctx->pc = 0x19fa18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4095 << 16));
    // 0x19fa1c: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x19fa1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x19fa20: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x19fa20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x19fa24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19fa24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fa28:
    // 0x19fa28: 0x483024  and         $a2, $v0, $t0
    ctx->pc = 0x19fa28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x19fa2c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x19fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x19fa30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FA30u;
    {
        const bool branch_taken_0x19fa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fa30) {
            ctx->pc = 0x19FA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA30u;
            // 0x19fa34: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FA48u;
            goto label_19fa48;
        }
    }
    ctx->pc = 0x19FA38u;
    // 0x19fa38: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x19fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19fa3c: 0x1446000e  bne         $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19FA3Cu;
    {
        const bool branch_taken_0x19fa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x19FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA3Cu;
        // 0x19fa40: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa3c) {
            ctx->pc = 0x19FA78u;
            goto label_19fa78;
        }
    }
    ctx->pc = 0x19FA44u;
    // 0x19fa44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19fa48:
    // 0x19fa48: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x19fa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x19fa4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19fa50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fa54: 0xa81024  and         $v0, $a1, $t0
    ctx->pc = 0x19fa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x19fa58: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x19FA58u;
    {
        const bool branch_taken_0x19fa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA58u;
        // 0x19fa5c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa58) {
            ctx->pc = 0x19FA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fa28;
        }
    }
    ctx->pc = 0x19FA60u;
    // 0x19fa60: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19fa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19fa64:
    // 0x19fa64: 0x54a0000d  bnel        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x19FA64u;
    {
        const bool branch_taken_0x19fa64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fa64) {
            ctx->pc = 0x19FA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA64u;
            // 0x19fa68: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FA9Cu;
            goto label_19fa9c;
        }
    }
    ctx->pc = 0x19FA6Cu;
    // 0x19fa6c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19FA6Cu;
    {
        const bool branch_taken_0x19fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA6Cu;
        // 0x19fa70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa6c) {
            ctx->pc = 0x19FAE8u;
            goto label_19fae8;
        }
    }
    ctx->pc = 0x19FA74u;
    // 0x19fa74: 0x0  nop
    ctx->pc = 0x19fa74u;
    // NOP
label_19fa78:
    // 0x19fa78: 0xac1025  or          $v0, $a1, $t4
    ctx->pc = 0x19fa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x19fa7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa80: 0x0  nop
    ctx->pc = 0x19fa80u;
    // NOP
    // 0x19fa84: 0x0  nop
    ctx->pc = 0x19fa84u;
    // NOP
    // 0x19fa88: 0x0  nop
    ctx->pc = 0x19fa88u;
    // NOP
    // 0x19fa8c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x19FA8Cu;
    {
        const bool branch_taken_0x19fa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA8Cu;
        // 0x19fa90: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa8c) {
            ctx->pc = 0x19FA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fa64;
        }
    }
    ctx->pc = 0x19FA94u;
    // 0x19fa94: 0x0  nop
    ctx->pc = 0x19fa94u;
    // NOP
label_19fa98:
    // 0x19fa98: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x19fa98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_19fa9c:
    // 0x19fa9c: 0x29420008  slti        $v0, $t2, 0x8
    ctx->pc = 0x19fa9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19faa0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x19FAA0u;
    {
        const bool branch_taken_0x19faa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAA0u;
        // 0x19faa4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faa0) {
            ctx->pc = 0x19F9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9f8;
        }
    }
    ctx->pc = 0x19FAA8u;
    // 0x19faa8: 0x8f83915c  lw          $v1, -0x6EA4($gp)
    ctx->pc = 0x19faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
    // 0x19faac: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19FAACu;
    {
        const bool branch_taken_0x19faac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x19FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAACu;
        // 0x19fab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faac) {
            ctx->pc = 0x19FAE8u;
            goto label_19fae8;
        }
    }
    ctx->pc = 0x19FAB4u;
    // 0x19fab4: 0xc0683b2  jal         func_1A0EC8
    ctx->pc = 0x19FAB4u;
    SET_GPR_U32(ctx, 31, 0x19FABCu);
    ctx->pc = 0x1A0EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0EC8u, 0x19FAB4u, 0x19FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FABCu;
label_19fabc:
    // 0x19fabc: 0x8f839160  lw          $v1, -0x6EA0($gp)
    ctx->pc = 0x19fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938976)));
    // 0x19fac0: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FAC0u;
    {
        const bool branch_taken_0x19fac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19fac0) {
            ctx->pc = 0x19FAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FAC0u;
            // 0x19fac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FAE8u;
            goto label_19fae8;
        }
    }
    ctx->pc = 0x19FAC8u;
    // 0x19fac8: 0xc0683b2  jal         func_1A0EC8
    ctx->pc = 0x19FAC8u;
    SET_GPR_U32(ctx, 31, 0x19FAD0u);
    ctx->pc = 0x1A0EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0EC8u, 0x19FAC8u, 0x19FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAD0u;
label_19fad0:
    // 0x19fad0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19fad4: 0x8f859160  lw          $a1, -0x6EA0($gp)
    ctx->pc = 0x19fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938976)));
    // 0x19fad8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19fad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fadc: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x19FADCu;
    SET_GPR_U32(ctx, 31, 0x19FAE4u);
    ctx->pc = 0x19FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FADCu;
    // 0x19fae0: 0x248487b0  addiu       $a0, $a0, -0x7850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x19FADCu, 0x19FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAE4u;
label_19fae4:
    // 0x19fae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fae8:
    // 0x19fae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19faec: 0x3e00008  jr          $ra
    ctx->pc = 0x19FAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAECu;
        // 0x19faf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FAF4u;
}
