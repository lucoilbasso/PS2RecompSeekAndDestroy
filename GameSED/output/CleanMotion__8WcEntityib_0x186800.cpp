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

// Function: CleanMotion__8WcEntityib
// Address: 0x186800 - 0x1868d4
void CleanMotion__8WcEntityib_0x186800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CleanMotion__8WcEntityib_0x186800");
#endif

    switch (ctx->pc) {
        case 0x186848u: goto label_186848;
        case 0x18689cu: goto label_18689c;
        default: break;
    }

    ctx->pc = 0x186800u;

    // 0x186800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186808: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x186808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18680c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x186810: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x186810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186814: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x186814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x186818: 0x101603  sra         $v0, $s0, 24
    ctx->pc = 0x186818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 24));
    // 0x18681c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x186820: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x186820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186828: 0x30530001  andi        $s3, $v0, 0x1
    ctx->pc = 0x186828u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18682c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x186830: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186834: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x186834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x186838: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x186838u;
    {
        const bool branch_taken_0x186838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186838u;
        // 0x18683c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186838) {
            ctx->pc = 0x1868ACu;
            goto label_1868ac;
        }
    }
    ctx->pc = 0x186840u;
    // 0x186840: 0x3c150100  lui         $s5, 0x100
    ctx->pc = 0x186840u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)256 << 16));
    // 0x186844: 0x0  nop
    ctx->pc = 0x186844u;
    // NOP
label_186848:
    // 0x186848: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x186848u;
    {
        const bool branch_taken_0x186848 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x18684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186848u;
        // 0x18684c: 0x8c710008  lw          $s1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186848) {
            ctx->pc = 0x186864u;
            goto label_186864;
        }
    }
    ctx->pc = 0x186850u;
    // 0x186850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x186850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186854: 0x502024  and         $a0, $v0, $s0
    ctx->pc = 0x186854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x186858: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x186858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x18685c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18685Cu;
    {
        const bool branch_taken_0x18685c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18685c) {
            ctx->pc = 0x186878u;
            goto label_186878;
        }
    }
    ctx->pc = 0x186864u;
label_186864:
    // 0x186864: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x186864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186868: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186868u;
    {
        const bool branch_taken_0x186868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x186868) {
            ctx->pc = 0x186880u;
            goto label_186880;
        }
    }
    ctx->pc = 0x186870u;
    // 0x186870: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x186870u;
    {
        const bool branch_taken_0x186870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186870u;
        // 0x186874: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186870) {
            ctx->pc = 0x1868A4u;
            goto label_1868a4;
        }
    }
    ctx->pc = 0x186878u;
label_186878:
    // 0x186878: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x186878u;
    {
        const bool branch_taken_0x186878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186878) {
            ctx->pc = 0x18687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186878u;
            // 0x18687c: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1868A4u;
            goto label_1868a4;
        }
    }
    ctx->pc = 0x186880u;
label_186880:
    // 0x186880: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x186880u;
    {
        const bool branch_taken_0x186880 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x186884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186880u;
        // 0x186884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186880) {
            ctx->pc = 0x1868A0u;
            goto label_1868a0;
        }
    }
    ctx->pc = 0x186888u;
    // 0x186888: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x186888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18688c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18688cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186894: 0xc068866  jal         func_1A2198
    ctx->pc = 0x186894u;
    SET_GPR_U32(ctx, 31, 0x18689Cu);
    ctx->pc = 0x186898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186894u;
    // 0x186898: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x186894u, 0x18689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18689Cu;
label_18689c:
    // 0x18689c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1868a0:
    // 0x1868a0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1868a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1868a4:
    // 0x1868a4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1868A4u;
    {
        const bool branch_taken_0x1868a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1868a4) {
            ctx->pc = 0x186848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186848;
        }
    }
    ctx->pc = 0x1868ACu;
label_1868ac:
    // 0x1868ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1868acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1868b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1868b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1868b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1868b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1868b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1868bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1868bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1868c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1868c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1868c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1868c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1868c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1868c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1868cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1868CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1868D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868CCu;
        // 0x1868d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1868CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1868D4u;
}
