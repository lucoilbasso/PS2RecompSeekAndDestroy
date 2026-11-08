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

// Function: Val_VSync2Sec__FUiP7TimeStr
// Address: 0x19b708 - 0x19b80c
void Val_VSync2Sec__FUiP7TimeStr_0x19b708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_VSync2Sec__FUiP7TimeStr_0x19b708");
#endif

    switch (ctx->pc) {
        case 0x19b718u: goto label_19b718;
        case 0x19b728u: goto label_19b728;
        case 0x19b790u: goto label_19b790;
        default: break;
    }

    ctx->pc = 0x19b708u;

    // 0x19b708: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19b708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19b70c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b710: 0x2449efb8  addiu       $t1, $v0, -0x1048
    ctx->pc = 0x19b710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963128));
    // 0x19b714: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x19b714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19b718:
    // 0x19b718: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19b71c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b720: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B720u;
    {
        const bool branch_taken_0x19b720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B720u;
        // 0x19b724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b720) {
            ctx->pc = 0x19B744u;
            goto label_19b744;
        }
    }
    ctx->pc = 0x19B728u;
label_19b728:
    // 0x19b728: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19b728u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b72c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b730: 0x0  nop
    ctx->pc = 0x19b730u;
    // NOP
    // 0x19b734: 0x0  nop
    ctx->pc = 0x19b734u;
    // NOP
    // 0x19b738: 0x0  nop
    ctx->pc = 0x19b738u;
    // NOP
    // 0x19b73c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B73Cu;
    {
        const bool branch_taken_0x19b73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B73Cu;
        // 0x19b740: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b73c) {
            ctx->pc = 0x19B728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b728;
        }
    }
    ctx->pc = 0x19B744u;
label_19b744:
    // 0x19b744: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b748: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x19b748u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19b74c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x19b750: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B750u;
    {
        const bool branch_taken_0x19b750 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x19B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B750u;
        // 0x19b754: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b750) {
            ctx->pc = 0x19B718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b718;
        }
    }
    ctx->pc = 0x19B758u;
    // 0x19b758: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19b758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19b75c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19b75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b760: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19b764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b768: 0x9463ef60  lhu         $v1, -0x10A0($v1)
    ctx->pc = 0x19b768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963040)));
    // 0x19b76c: 0x24a60014  addiu       $a2, $a1, 0x14
    ctx->pc = 0x19b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x19b770: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19b770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b778: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x19b778u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b77c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19b77cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b780: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19b780u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b784: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19b784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19b788: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19b788u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b78c: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19b78cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19b790:
    // 0x19b790: 0x10e90003  beq         $a3, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B790u;
    {
        const bool branch_taken_0x19b790 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B790u;
        // 0x19b794: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b790) {
            ctx->pc = 0x19B7A0u;
            goto label_19b7a0;
        }
    }
    ctx->pc = 0x19B798u;
    // 0x19b798: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B798u;
    {
        const bool branch_taken_0x19b798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B798u;
        // 0x19b79c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b798) {
            ctx->pc = 0x19B7A8u;
            goto label_19b7a8;
        }
    }
    ctx->pc = 0x19B7A0u;
label_19b7a0:
    // 0x19b7a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b7a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7a4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x19b7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19b7a8:
    // 0x19b7a8: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B7A8u;
    {
        const bool branch_taken_0x19b7a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7A8u;
        // 0x19b7ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7a8) {
            ctx->pc = 0x19B7C0u;
            goto label_19b7c0;
        }
    }
    ctx->pc = 0x19B7B0u;
    // 0x19b7b0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b7b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B7B4u;
    {
        const bool branch_taken_0x19b7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7B4u;
        // 0x19b7b8: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7b4) {
            ctx->pc = 0x19B7C4u;
            goto label_19b7c4;
        }
    }
    ctx->pc = 0x19B7BCu;
    // 0x19b7bc: 0x0  nop
    ctx->pc = 0x19b7bcu;
    // NOP
label_19b7c0:
    // 0x19b7c0: 0xa06d0000  sb          $t5, 0x0($v1)
    ctx->pc = 0x19b7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 13));
label_19b7c4:
    // 0x19b7c4: 0x50e90006  beql        $a3, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B7C4u;
    {
        const bool branch_taken_0x19b7c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b7c4) {
            ctx->pc = 0x19B7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7C4u;
            // 0x19b7c8: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7E0u;
            goto label_19b7e0;
        }
    }
    ctx->pc = 0x19B7CCu;
    // 0x19b7cc: 0x50ec0004  beql        $a3, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B7CCu;
    {
        const bool branch_taken_0x19b7cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        if (branch_taken_0x19b7cc) {
            ctx->pc = 0x19B7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7CCu;
            // 0x19b7d0: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7E0u;
            goto label_19b7e0;
        }
    }
    ctx->pc = 0x19B7D4u;
    // 0x19b7d4: 0x54eb0004  bnel        $a3, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B7D4u;
    {
        const bool branch_taken_0x19b7d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x19b7d4) {
            ctx->pc = 0x19B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7D4u;
            // 0x19b7d8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7E8u;
            goto label_19b7e8;
        }
    }
    ctx->pc = 0x19B7DCu;
    // 0x19b7dc: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x19b7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_19b7e0:
    // 0x19b7e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19b7e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19b7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19b7e8:
    // 0x19b7e8: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x19b7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19b7ec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19B7ECu;
    {
        const bool branch_taken_0x19b7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7ECu;
        // 0x19b7f0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7ec) {
            ctx->pc = 0x19B790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b790;
        }
    }
    ctx->pc = 0x19B7F4u;
    // 0x19b7f4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x19b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19b7f8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x19b7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b7fc: 0xa0a20017  sb          $v0, 0x17($a1)
    ctx->pc = 0x19b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b800: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19b800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b804: 0x3e00008  jr          $ra
    ctx->pc = 0x19B804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B804u;
        // 0x19b808: 0xa0a0001a  sb          $zero, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B80Cu;
}
