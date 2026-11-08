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

// Function: end_fde_sort
// Address: 0x1ca870 - 0x1cade8
void end_fde_sort_0x1ca870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("end_fde_sort_0x1ca870");
#endif

    switch (ctx->pc) {
        case 0x1ca8b4u: goto label_1ca8b4;
        case 0x1ca8f0u: goto label_1ca8f0;
        case 0x1ca930u: goto label_1ca930;
        case 0x1ca998u: goto label_1ca998;
        case 0x1ca9fcu: goto label_1ca9fc;
        case 0x1caa10u: goto label_1caa10;
        case 0x1caa20u: goto label_1caa20;
        case 0x1caaf0u: goto label_1caaf0;
        case 0x1cab18u: goto label_1cab18;
        case 0x1cabe0u: goto label_1cabe0;
        case 0x1cabe8u: goto label_1cabe8;
        case 0x1cac00u: goto label_1cac00;
        case 0x1cac10u: goto label_1cac10;
        case 0x1cace0u: goto label_1cace0;
        case 0x1cad08u: goto label_1cad08;
        default: break;
    }

    ctx->pc = 0x1ca870u;

    // 0x1ca870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca87c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ca87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ca880: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ca880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca888: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca88c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ca88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ca890: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ca890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ca894: 0x8e180000  lw          $t8, 0x0($s0)
    ctx->pc = 0x1ca894u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca898: 0x13000007  beqz        $t8, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA898u;
    {
        const bool branch_taken_0x1ca898 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA898u;
        // 0x1ca89c: 0x300602d  daddu       $t4, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca898) {
            ctx->pc = 0x1CA8B8u;
            goto label_1ca8b8;
        }
    }
    ctx->pc = 0x1CA8A0u;
    // 0x1ca8a0: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1ca8a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ca8a4: 0x51d40006  beql        $t6, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA8A4u;
    {
        const bool branch_taken_0x1ca8a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 20));
        if (branch_taken_0x1ca8a4) {
            ctx->pc = 0x1CA8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA8A4u;
            // 0x1ca8a8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA8C0u;
            goto label_1ca8c0;
        }
    }
    ctx->pc = 0x1CA8ACu;
    // 0x1ca8ac: 0xc073d1a  jal         func_1CF468
    ctx->pc = 0x1CA8ACu;
    SET_GPR_U32(ctx, 31, 0x1CA8B4u);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CA8ACu, 0x1CA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8B4u;
label_1ca8b4:
    // 0x1ca8b4: 0x0  nop
    ctx->pc = 0x1ca8b4u;
    // NOP
label_1ca8b8:
    // 0x1ca8b8: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1ca8b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ca8bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ca8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ca8c0:
    // 0x1ca8c0: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1CA8C0u;
    {
        const bool branch_taken_0x1ca8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8C0u;
        // 0x1ca8c4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8c0) {
            ctx->pc = 0x1CABF0u;
            goto label_1cabf0;
        }
    }
    ctx->pc = 0x1CA8C8u;
    // 0x1ca8c8: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x1ca8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca8cc: 0x2447045c  addiu       $a3, $v0, 0x45C
    ctx->pc = 0x1ca8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1116));
    // 0x1ca8d0: 0x11c00029  beqz        $t6, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CA8D0u;
    {
        const bool branch_taken_0x1ca8d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8D0u;
        // 0x1ca8d4: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8d0) {
            ctx->pc = 0x1CA978u;
            goto label_1ca978;
        }
    }
    ctx->pc = 0x1CA8D8u;
    // 0x1ca8d8: 0x8e380000  lw          $t8, 0x0($s1)
    ctx->pc = 0x1ca8d8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ca8dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ca8dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8e0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ca8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8e4: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1ca8e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8e8: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x1ca8e8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca8ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8f0:
    // 0x1ca8f0: 0x50f2001b  beql        $a3, $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA8F0u;
    {
        const bool branch_taken_0x1ca8f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 18));
        if (branch_taken_0x1ca8f0) {
            ctx->pc = 0x1CA8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA8F0u;
            // 0x1ca8f4: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA960u;
            goto label_1ca960;
        }
    }
    ctx->pc = 0x1CA8F8u;
    // 0x1ca8f8: 0x14b3021  addu        $a2, $t2, $t3
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1ca8fc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ca8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ca900: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ca900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ca904: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1ca904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca908: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ca908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca90c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ca90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca910: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA910u;
    {
        const bool branch_taken_0x1ca910 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ca910) {
            ctx->pc = 0x1CA914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA910u;
            // 0x1ca914: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA960u;
            goto label_1ca960;
        }
    }
    ctx->pc = 0x1CA918u;
    // 0x1ca918: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1ca918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca91c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1ca91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca920: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x1ca920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca924: 0x266d045c  addiu       $t5, $s3, 0x45C
    ctx->pc = 0x1ca924u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 1116));
    // 0x1ca928: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x1ca928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ca92c: 0x0  nop
    ctx->pc = 0x1ca92cu;
    // NOP
label_1ca930:
    // 0x1ca930: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1ca930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1ca934: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ca934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca938: 0x10ed0008  beq         $a3, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA938u;
    {
        const bool branch_taken_0x1ca938 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        ctx->pc = 0x1CA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA938u;
        // 0x1ca93c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca938) {
            ctx->pc = 0x1CA95Cu;
            goto label_1ca95c;
        }
    }
    ctx->pc = 0x1CA940u;
    // 0x1ca940: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1ca940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ca944: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1ca944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ca948: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ca948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca94c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ca94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ca950: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ca950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca954: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CA954u;
    {
        const bool branch_taken_0x1ca954 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA954u;
        // 0x1ca958: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca954) {
            ctx->pc = 0x1CA930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca930;
        }
    }
    ctx->pc = 0x1CA95Cu;
label_1ca95c:
    // 0x1ca95c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1ca95cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_1ca960:
    // 0x1ca960: 0x1591021  addu        $v0, $t2, $t9
    ctx->pc = 0x1ca960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x1ca964: 0x1ee182b  sltu        $v1, $t7, $t6
    ctx->pc = 0x1ca964u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1ca968: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1ca968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1ca96c: 0x16a3821  addu        $a3, $t3, $t2
    ctx->pc = 0x1ca96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ca970: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CA970u;
    {
        const bool branch_taken_0x1ca970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA970u;
        // 0x1ca974: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca970) {
            ctx->pc = 0x1CA8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca8f0;
        }
    }
    ctx->pc = 0x1CA978u;
label_1ca978:
    // 0x1ca978: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca97c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1ca97cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca980: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CA980u;
    {
        const bool branch_taken_0x1ca980 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA980u;
        // 0x1ca984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca980) {
            ctx->pc = 0x1CA9D8u;
            goto label_1ca9d8;
        }
    }
    ctx->pc = 0x1CA988u;
    // 0x1ca988: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ca988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ca98c: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1ca98cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca990: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1ca990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca994: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ca994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca998:
    // 0x1ca998: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ca998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ca99c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA99Cu;
    {
        const bool branch_taken_0x1ca99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA99Cu;
        // 0x1ca9a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca99c) {
            ctx->pc = 0x1CA9B8u;
            goto label_1ca9b8;
        }
    }
    ctx->pc = 0x1CA9A4u;
    // 0x1ca9a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca9a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ca9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ca9ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1ca9acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1ca9b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA9B0u;
    {
        const bool branch_taken_0x1ca9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9B0u;
        // 0x1ca9b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9b0) {
            ctx->pc = 0x1CA9C8u;
            goto label_1ca9c8;
        }
    }
    ctx->pc = 0x1CA9B8u;
label_1ca9b8:
    // 0x1ca9b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca9bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ca9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ca9c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ca9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ca9c4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ca9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1ca9c8:
    // 0x1ca9c8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1ca9c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1ca9cc: 0x1ee102b  sltu        $v0, $t7, $t6
    ctx->pc = 0x1ca9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1ca9d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1CA9D0u;
    {
        const bool branch_taken_0x1ca9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9D0u;
        // 0x1ca9d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9d0) {
            ctx->pc = 0x1CA998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca998;
        }
    }
    ctx->pc = 0x1CA9D8u;
label_1ca9d8:
    // 0x1ca9d8: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x1ca9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x1ca9dc: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x1ca9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x1ca9e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ca9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ca9e4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ca9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca9e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca9ec: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA9ECu;
    {
        const bool branch_taken_0x1ca9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1CA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9ECu;
        // 0x1ca9f0: 0xe0682d  daddu       $t5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9ec) {
            ctx->pc = 0x1CAA00u;
            goto label_1caa00;
        }
    }
    ctx->pc = 0x1CA9F4u;
    // 0x1ca9f4: 0xc073d1a  jal         func_1CF468
    ctx->pc = 0x1CA9F4u;
    SET_GPR_U32(ctx, 31, 0x1CA9FCu);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CA9F4u, 0x1CA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9FCu;
label_1ca9fc:
    // 0x1ca9fc: 0x0  nop
    ctx->pc = 0x1ca9fcu;
    // NOP
label_1caa00:
    // 0x1caa00: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x1caa00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1caa04: 0x11a00033  beqz        $t5, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CAA04u;
    {
        const bool branch_taken_0x1caa04 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA04u;
        // 0x1caa08: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa04) {
            ctx->pc = 0x1CAAD4u;
            goto label_1caad4;
        }
    }
    ctx->pc = 0x1CAA0Cu;
    // 0x1caa0c: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_1caa10:
    // 0x1caa10: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1caa14: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAA14u;
    {
        const bool branch_taken_0x1caa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA14u;
        // 0x1caa18: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa14) {
            ctx->pc = 0x1CAABCu;
            goto label_1caabc;
        }
    }
    ctx->pc = 0x1CAA1Cu;
    // 0x1caa1c: 0x0  nop
    ctx->pc = 0x1caa1cu;
    // NOP
label_1caa20:
    // 0x1caa20: 0x246b0002  addiu       $t3, $v1, 0x2
    ctx->pc = 0x1caa20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1caa24: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x1caa24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1caa28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CAA28u;
    {
        const bool branch_taken_0x1caa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA28u;
        // 0x1caa2c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa28) {
            ctx->pc = 0x1CAA80u;
            goto label_1caa80;
        }
    }
    ctx->pc = 0x1CAA30u;
    // 0x1caa30: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1caa30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1caa34: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1caa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1caa38: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1caa38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1caa3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1caa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1caa40: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1caa40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1caa44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1caa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1caa48: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1caa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1caa4c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1caa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1caa50: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CAA50u;
    {
        const bool branch_taken_0x1caa50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA50u;
        // 0x1caa54: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa50) {
            ctx->pc = 0x1CAA84u;
            goto label_1caa84;
        }
    }
    ctx->pc = 0x1CAA58u;
    // 0x1caa58: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1caa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1caa5c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1caa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1caa60: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1caa64: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1caa64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1caa68: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAA68u;
    {
        const bool branch_taken_0x1caa68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA68u;
        // 0x1caa6c: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa68) {
            ctx->pc = 0x1CAA88u;
            goto label_1caa88;
        }
    }
    ctx->pc = 0x1CAA70u;
    // 0x1caa70: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1caa70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1caa74: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1caa74u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1caa78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CAA78u;
    {
        const bool branch_taken_0x1caa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA78u;
        // 0x1caa7c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa78) {
            ctx->pc = 0x1CAAB8u;
            goto label_1caab8;
        }
    }
    ctx->pc = 0x1CAA80u;
label_1caa80:
    // 0x1caa80: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1caa80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1caa84:
    // 0x1caa84: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1caa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_1caa88:
    // 0x1caa88: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x1caa88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1caa8c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1caa90: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1caa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1caa94: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1caa98: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1caa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1caa9c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1caaa0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1caaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1caaa4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAAA4u;
    {
        const bool branch_taken_0x1caaa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1caaa4) {
            ctx->pc = 0x1CAACCu;
            goto label_1caacc;
        }
    }
    ctx->pc = 0x1CAAACu;
    // 0x1caaac: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1caaacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1caab0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1caab0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1caab4: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1caab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1caab8:
    // 0x1caab8: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x1caab8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1caabc:
    // 0x1caabc: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1caabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1caac0: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x1caac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1caac4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CAAC4u;
    {
        const bool branch_taken_0x1caac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAC4u;
        // 0x1caac8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caac4) {
            ctx->pc = 0x1CAA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caa20;
        }
    }
    ctx->pc = 0x1CAACCu;
label_1caacc:
    // 0x1caacc: 0x55c0ffd0  bnel        $t6, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1CAACCu;
    {
        const bool branch_taken_0x1caacc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caacc) {
            ctx->pc = 0x1CAAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAACCu;
            // 0x1caad0: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caa10;
        }
    }
    ctx->pc = 0x1CAAD4u;
label_1caad4:
    // 0x1caad4: 0x2da20002  sltiu       $v0, $t5, 0x2
    ctx->pc = 0x1caad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1caad8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1CAAD8u;
    {
        const bool branch_taken_0x1caad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAD8u;
        // 0x1caadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caad8) {
            ctx->pc = 0x1CABD8u;
            goto label_1cabd8;
        }
    }
    ctx->pc = 0x1CAAE0u;
    // 0x1caae0: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x1caae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1caae4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1caae4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caae8: 0x4c7021  addu        $t6, $v0, $t4
    ctx->pc = 0x1caae8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1caaec: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x1caaecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_1caaf0:
    // 0x1caaf0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1caaf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1caaf4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1caaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1caaf8: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x1caaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1caafc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1caafcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1cab00: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1cab00u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1cab04: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x1cab04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cab08: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CAB08u;
    {
        const bool branch_taken_0x1cab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB08u;
        // 0x1cab0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab08) {
            ctx->pc = 0x1CABC8u;
            goto label_1cabc8;
        }
    }
    ctx->pc = 0x1CAB10u;
    // 0x1cab10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cab10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab14: 0x252b0002  addiu       $t3, $t1, 0x2
    ctx->pc = 0x1cab14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_1cab18:
    // 0x1cab18: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x1cab18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cab1c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CAB1Cu;
    {
        const bool branch_taken_0x1cab1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB1Cu;
        // 0x1cab20: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab1c) {
            ctx->pc = 0x1CAB78u;
            goto label_1cab78;
        }
    }
    ctx->pc = 0x1CAB24u;
    // 0x1cab24: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cab24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cab28: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1cab2c: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1cab2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cab30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cab34: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1cab34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cab38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1cab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cab3c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1cab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1cab40: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cab40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cab44: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CAB44u;
    {
        const bool branch_taken_0x1cab44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB44u;
        // 0x1cab48: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab44) {
            ctx->pc = 0x1CAB7Cu;
            goto label_1cab7c;
        }
    }
    ctx->pc = 0x1CAB4Cu;
    // 0x1cab4c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1cab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cab50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cab54: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1cab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cab58: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cab58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cab5c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAB5Cu;
    {
        const bool branch_taken_0x1cab5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB5Cu;
        // 0x1cab60: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab5c) {
            ctx->pc = 0x1CAB80u;
            goto label_1cab80;
        }
    }
    ctx->pc = 0x1CAB64u;
    // 0x1cab64: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1cab64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1cab68: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1cab68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1cab6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CAB6Cu;
    {
        const bool branch_taken_0x1cab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB6Cu;
        // 0x1cab70: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab6c) {
            ctx->pc = 0x1CABB0u;
            goto label_1cabb0;
        }
    }
    ctx->pc = 0x1CAB74u;
    // 0x1cab74: 0x0  nop
    ctx->pc = 0x1cab74u;
    // NOP
label_1cab78:
    // 0x1cab78: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cab78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cab7c:
    // 0x1cab7c: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_1cab80:
    // 0x1cab80: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x1cab80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cab84: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1cab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cab88: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1cab88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cab8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1cab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cab90: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1cab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cab94: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cab98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cab98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cab9c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAB9Cu;
    {
        const bool branch_taken_0x1cab9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB9Cu;
        // 0x1caba0: 0x2da20002  sltiu       $v0, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab9c) {
            ctx->pc = 0x1CABCCu;
            goto label_1cabcc;
        }
    }
    ctx->pc = 0x1CABA4u;
    // 0x1caba4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1caba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1caba8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1caba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1cabac: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1cabacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1cabb0:
    // 0x1cabb0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1cabb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cabb4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1cabb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabb8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1cabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cabbc: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x1cabbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cabc0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1CABC0u;
    {
        const bool branch_taken_0x1cabc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABC0u;
        // 0x1cabc4: 0x252b0002  addiu       $t3, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabc0) {
            ctx->pc = 0x1CAB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cab18;
        }
    }
    ctx->pc = 0x1CABC8u;
label_1cabc8:
    // 0x1cabc8: 0x2da20002  sltiu       $v0, $t5, 0x2
    ctx->pc = 0x1cabc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cabcc:
    // 0x1cabcc: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1CABCCu;
    {
        const bool branch_taken_0x1cabcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABCCu;
        // 0x1cabd0: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabcc) {
            ctx->pc = 0x1CAAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caaf0;
        }
    }
    ctx->pc = 0x1CABD4u;
    // 0x1cabd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cabd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cabd8:
    // 0x1cabd8: 0xc0729de  jal         func_1CA778
    ctx->pc = 0x1CABD8u;
    SET_GPR_U32(ctx, 31, 0x1CABE0u);
    ctx->pc = 0x1CABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABD8u;
    // 0x1cabdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA778u, 0x1CABD8u, 0x1CABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABE0u;
label_1cabe0:
    // 0x1cabe0: 0xc073d72  jal         func_1CF5C8
    ctx->pc = 0x1CABE0u;
    SET_GPR_U32(ctx, 31, 0x1CABE8u);
    ctx->pc = 0x1CABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABE0u;
    // 0x1cabe4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF5C8u, 0x1CABE0u, 0x1CABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABE8u;
label_1cabe8:
    // 0x1cabe8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1CABE8u;
    {
        const bool branch_taken_0x1cabe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABE8u;
        // 0x1cabec: 0x8e180000  lw          $t8, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabe8) {
            ctx->pc = 0x1CADC4u;
            goto label_1cadc4;
        }
    }
    ctx->pc = 0x1CABF0u;
label_1cabf0:
    // 0x1cabf0: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x1cabf0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabf4: 0x11a00033  beqz        $t5, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CABF4u;
    {
        const bool branch_taken_0x1cabf4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABF4u;
        // 0x1cabf8: 0x1a0782d  daddu       $t7, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabf4) {
            ctx->pc = 0x1CACC4u;
            goto label_1cacc4;
        }
    }
    ctx->pc = 0x1CABFCu;
    // 0x1cabfc: 0x25e4ffff  addiu       $a0, $t7, -0x1
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_1cac00:
    // 0x1cac00: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x1cac00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cac04: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAC04u;
    {
        const bool branch_taken_0x1cac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC04u;
        // 0x1cac08: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac04) {
            ctx->pc = 0x1CACACu;
            goto label_1cacac;
        }
    }
    ctx->pc = 0x1CAC0Cu;
    // 0x1cac0c: 0x0  nop
    ctx->pc = 0x1cac0cu;
    // NOP
label_1cac10:
    // 0x1cac10: 0x246b0002  addiu       $t3, $v1, 0x2
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1cac14: 0x16e102b  sltu        $v0, $t3, $t6
    ctx->pc = 0x1cac14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1cac18: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CAC18u;
    {
        const bool branch_taken_0x1cac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC18u;
        // 0x1cac1c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac18) {
            ctx->pc = 0x1CAC70u;
            goto label_1cac70;
        }
    }
    ctx->pc = 0x1CAC20u;
    // 0x1cac20: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cac20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cac24: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1cac28: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cac2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cac30: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1cac30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cac34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1cac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cac38: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1cac38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1cac3c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cac40: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CAC40u;
    {
        const bool branch_taken_0x1cac40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC40u;
        // 0x1cac44: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac40) {
            ctx->pc = 0x1CAC74u;
            goto label_1cac74;
        }
    }
    ctx->pc = 0x1CAC48u;
    // 0x1cac48: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1cac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cac4c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cac50: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1cac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cac54: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cac54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cac58: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAC58u;
    {
        const bool branch_taken_0x1cac58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC58u;
        // 0x1cac5c: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac58) {
            ctx->pc = 0x1CAC78u;
            goto label_1cac78;
        }
    }
    ctx->pc = 0x1CAC60u;
    // 0x1cac60: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1cac60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1cac64: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1cac64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1cac68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CAC68u;
    {
        const bool branch_taken_0x1cac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC68u;
        // 0x1cac6c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac68) {
            ctx->pc = 0x1CACA8u;
            goto label_1caca8;
        }
    }
    ctx->pc = 0x1CAC70u;
label_1cac70:
    // 0x1cac70: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cac70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cac74:
    // 0x1cac74: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_1cac78:
    // 0x1cac78: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cac7c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1cac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cac80: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1cac80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cac84: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1cac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cac88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1cac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cac8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cac90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cac94: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAC94u;
    {
        const bool branch_taken_0x1cac94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1cac94) {
            ctx->pc = 0x1CACBCu;
            goto label_1cacbc;
        }
    }
    ctx->pc = 0x1CAC9Cu;
    // 0x1cac9c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1cac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1caca0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1caca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1caca4: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1caca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1caca8:
    // 0x1caca8: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x1caca8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1cacac:
    // 0x1cacac: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1cacacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cacb0: 0x4e102b  sltu        $v0, $v0, $t6
    ctx->pc = 0x1cacb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1cacb4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CACB4u;
    {
        const bool branch_taken_0x1cacb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACB4u;
        // 0x1cacb8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacb4) {
            ctx->pc = 0x1CAC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cac10;
        }
    }
    ctx->pc = 0x1CACBCu;
label_1cacbc:
    // 0x1cacbc: 0x55e0ffd0  bnel        $t7, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1CACBCu;
    {
        const bool branch_taken_0x1cacbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cacbc) {
            ctx->pc = 0x1CACC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CACBCu;
            // 0x1cacc0: 0x25e4ffff  addiu       $a0, $t7, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cac00;
        }
    }
    ctx->pc = 0x1CACC4u;
label_1cacc4:
    // 0x1cacc4: 0x2dc20002  sltiu       $v0, $t6, 0x2
    ctx->pc = 0x1cacc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cacc8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1CACC8u;
    {
        const bool branch_taken_0x1cacc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACC8u;
        // 0x1caccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacc8) {
            ctx->pc = 0x1CADC8u;
            goto label_1cadc8;
        }
    }
    ctx->pc = 0x1CACD0u;
    // 0x1cacd0: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x1cacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1cacd4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cacd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cacd8: 0x4c7021  addu        $t6, $v0, $t4
    ctx->pc = 0x1cacd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1cacdc: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x1cacdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_1cace0:
    // 0x1cace0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1cace0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1cace4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1cace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1cace8: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1cacec: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1cacecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1cacf0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1cacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1cacf4: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x1cacf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cacf8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CACF8u;
    {
        const bool branch_taken_0x1cacf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACF8u;
        // 0x1cacfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacf8) {
            ctx->pc = 0x1CADB8u;
            goto label_1cadb8;
        }
    }
    ctx->pc = 0x1CAD00u;
    // 0x1cad00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cad00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad04: 0x252b0002  addiu       $t3, $t1, 0x2
    ctx->pc = 0x1cad04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_1cad08:
    // 0x1cad08: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x1cad08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cad0c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CAD0Cu;
    {
        const bool branch_taken_0x1cad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD0Cu;
        // 0x1cad10: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad0c) {
            ctx->pc = 0x1CAD68u;
            goto label_1cad68;
        }
    }
    ctx->pc = 0x1CAD14u;
    // 0x1cad14: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cad14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cad18: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1cad1c: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1cad1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cad20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cad24: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1cad24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cad28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1cad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cad2c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1cad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1cad30: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cad30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cad34: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CAD34u;
    {
        const bool branch_taken_0x1cad34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD34u;
        // 0x1cad38: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad34) {
            ctx->pc = 0x1CAD6Cu;
            goto label_1cad6c;
        }
    }
    ctx->pc = 0x1CAD3Cu;
    // 0x1cad3c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1cad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cad40: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cad40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cad44: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1cad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cad48: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cad48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cad4c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAD4Cu;
    {
        const bool branch_taken_0x1cad4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD4Cu;
        // 0x1cad50: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad4c) {
            ctx->pc = 0x1CAD70u;
            goto label_1cad70;
        }
    }
    ctx->pc = 0x1CAD54u;
    // 0x1cad54: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1cad54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1cad58: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1cad58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1cad5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CAD5Cu;
    {
        const bool branch_taken_0x1cad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD5Cu;
        // 0x1cad60: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad5c) {
            ctx->pc = 0x1CADA0u;
            goto label_1cada0;
        }
    }
    ctx->pc = 0x1CAD64u;
    // 0x1cad64: 0x0  nop
    ctx->pc = 0x1cad64u;
    // NOP
label_1cad68:
    // 0x1cad68: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cad68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cad6c:
    // 0x1cad6c: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_1cad70:
    // 0x1cad70: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x1cad70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cad74: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1cad74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cad78: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1cad78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cad7c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1cad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cad80: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1cad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cad84: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cad88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cad88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cad8c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAD8Cu;
    {
        const bool branch_taken_0x1cad8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD8Cu;
        // 0x1cad90: 0x2da20002  sltiu       $v0, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad8c) {
            ctx->pc = 0x1CADBCu;
            goto label_1cadbc;
        }
    }
    ctx->pc = 0x1CAD94u;
    // 0x1cad94: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1cad94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1cad98: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1cad98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1cad9c: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1cad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1cada0:
    // 0x1cada0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cada4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1cada4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cada8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1cada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cadac: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x1cadacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cadb0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1CADB0u;
    {
        const bool branch_taken_0x1cadb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADB0u;
        // 0x1cadb4: 0x252b0002  addiu       $t3, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadb0) {
            ctx->pc = 0x1CAD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cad08;
        }
    }
    ctx->pc = 0x1CADB8u;
label_1cadb8:
    // 0x1cadb8: 0x2da20002  sltiu       $v0, $t5, 0x2
    ctx->pc = 0x1cadb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cadbc:
    // 0x1cadbc: 0x5040ffc8  beql        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1CADBCu;
    {
        const bool branch_taken_0x1cadbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cadbc) {
            ctx->pc = 0x1CADC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CADBCu;
            // 0x1cadc0: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cace0;
        }
    }
    ctx->pc = 0x1CADC4u;
label_1cadc4:
    // 0x1cadc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cadc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cadc8:
    // 0x1cadc8: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x1cadc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cadccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cadd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cadd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cadd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cadd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cadd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cadd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1caddc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1caddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cade0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE0u;
        // 0x1cade4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CADE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CADE8u;
}
