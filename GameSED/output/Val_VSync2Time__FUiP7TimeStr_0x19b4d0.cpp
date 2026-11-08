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

// Function: Val_VSync2Time__FUiP7TimeStr
// Address: 0x19b4d0 - 0x19b5d0
void Val_VSync2Time__FUiP7TimeStr_0x19b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_VSync2Time__FUiP7TimeStr_0x19b4d0");
#endif

    switch (ctx->pc) {
        case 0x19b4e0u: goto label_19b4e0;
        case 0x19b4f0u: goto label_19b4f0;
        case 0x19b560u: goto label_19b560;
        default: break;
    }

    ctx->pc = 0x19b4d0u;

    // 0x19b4d0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19b4d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b4d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b4d8: 0x2449ef78  addiu       $t1, $v0, -0x1088
    ctx->pc = 0x19b4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963064));
    // 0x19b4dc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x19b4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19b4e0:
    // 0x19b4e0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19b4e4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b4e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B4E8u;
    {
        const bool branch_taken_0x19b4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4E8u;
        // 0x19b4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4e8) {
            ctx->pc = 0x19B50Cu;
            goto label_19b50c;
        }
    }
    ctx->pc = 0x19B4F0u;
label_19b4f0:
    // 0x19b4f0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b4f4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b4f8: 0x0  nop
    ctx->pc = 0x19b4f8u;
    // NOP
    // 0x19b4fc: 0x0  nop
    ctx->pc = 0x19b4fcu;
    // NOP
    // 0x19b500: 0x0  nop
    ctx->pc = 0x19b500u;
    // NOP
    // 0x19b504: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B504u;
        // 0x19b508: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b4f0;
        }
    }
    ctx->pc = 0x19B50Cu;
label_19b50c:
    // 0x19b50c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b510: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x19b510u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19b514: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x19b518: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B518u;
    {
        const bool branch_taken_0x19b518 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x19B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B518u;
        // 0x19b51c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b518) {
            ctx->pc = 0x19B4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b4e0;
        }
    }
    ctx->pc = 0x19B520u;
    // 0x19b520: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19b520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19b524: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19b524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b528: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19b528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19b52c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b530: 0x9463ef60  lhu         $v1, -0x10A0($v1)
    ctx->pc = 0x19b530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963040)));
    // 0x19b534: 0x24a60014  addiu       $a2, $a1, 0x14
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x19b538: 0xa4a00012  sh          $zero, 0x12($a1)
    ctx->pc = 0x19b538u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b53c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b540: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x19b540u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b548: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b54c: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19b54cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b550: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19b550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19b554: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b558: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b55c: 0x0  nop
    ctx->pc = 0x19b55cu;
    // NOP
label_19b560:
    // 0x19b560: 0x10e90003  beq         $a3, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B560u;
    {
        const bool branch_taken_0x19b560 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B560u;
        // 0x19b564: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b560) {
            ctx->pc = 0x19B570u;
            goto label_19b570;
        }
    }
    ctx->pc = 0x19B568u;
    // 0x19b568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B568u;
    {
        const bool branch_taken_0x19b568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B568u;
        // 0x19b56c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b568) {
            ctx->pc = 0x19B578u;
            goto label_19b578;
        }
    }
    ctx->pc = 0x19B570u;
label_19b570:
    // 0x19b570: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b574: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x19b574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19b578:
    // 0x19b578: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B578u;
    {
        const bool branch_taken_0x19b578 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B578u;
        // 0x19b57c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b578) {
            ctx->pc = 0x19B590u;
            goto label_19b590;
        }
    }
    ctx->pc = 0x19B580u;
    // 0x19b580: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B584u;
    {
        const bool branch_taken_0x19b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B584u;
        // 0x19b588: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b584) {
            ctx->pc = 0x19B594u;
            goto label_19b594;
        }
    }
    ctx->pc = 0x19B58Cu;
    // 0x19b58c: 0x0  nop
    ctx->pc = 0x19b58cu;
    // NOP
label_19b590:
    // 0x19b590: 0xa06d0000  sb          $t5, 0x0($v1)
    ctx->pc = 0x19b590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 13));
label_19b594:
    // 0x19b594: 0x50e90006  beql        $a3, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B594u;
    {
        const bool branch_taken_0x19b594 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b594) {
            ctx->pc = 0x19B598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B594u;
            // 0x19b598: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B5B0u;
            goto label_19b5b0;
        }
    }
    ctx->pc = 0x19B59Cu;
    // 0x19b59c: 0x50ec0004  beql        $a3, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B59Cu;
    {
        const bool branch_taken_0x19b59c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        if (branch_taken_0x19b59c) {
            ctx->pc = 0x19B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B59Cu;
            // 0x19b5a0: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B5B0u;
            goto label_19b5b0;
        }
    }
    ctx->pc = 0x19B5A4u;
    // 0x19b5a4: 0x54eb0004  bnel        $a3, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B5A4u;
    {
        const bool branch_taken_0x19b5a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x19b5a4) {
            ctx->pc = 0x19B5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B5A4u;
            // 0x19b5a8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B5B8u;
            goto label_19b5b8;
        }
    }
    ctx->pc = 0x19B5ACu;
    // 0x19b5ac: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x19b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_19b5b0:
    // 0x19b5b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19b5b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19b5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19b5b8:
    // 0x19b5b8: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x19b5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19b5bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19B5BCu;
    {
        const bool branch_taken_0x19b5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5BCu;
        // 0x19b5c0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5bc) {
            ctx->pc = 0x19B560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b560;
        }
    }
    ctx->pc = 0x19B5C4u;
    // 0x19b5c4: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x19b5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5C8u;
        // 0x19b5cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B5D0u;
}
