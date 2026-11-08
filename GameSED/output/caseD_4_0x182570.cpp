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

// Function: caseD_4
// Address: 0x182570 - 0x1825e0
void caseD_4_0x182570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x182570");
#endif

    switch (ctx->pc) {
        case 0x1825d8u: goto label_1825d8;
        default: break;
    }

    ctx->pc = 0x182570u;

    // 0x182570: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x182570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182574: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x182574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182578: 0x2e830080  sltiu       $v1, $s4, 0x80
    ctx->pc = 0x182578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x18257c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18257cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182584: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x182584u;
    {
        const bool branch_taken_0x182584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182584u;
        // 0x182588: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182584) {
            ctx->pc = 0x182610u;
            return;
        }
    }
    ctx->pc = 0x18258Cu;
    // 0x18258c: 0x6200020  bltz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x18258Cu;
    {
        const bool branch_taken_0x18258c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x182590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18258Cu;
        // 0x182590: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18258c) {
            ctx->pc = 0x182610u;
            return;
        }
    }
    ctx->pc = 0x182594u;
    // 0x182594: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x182594u;
    {
        const bool branch_taken_0x182594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182594u;
        // 0x182598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182594) {
            ctx->pc = 0x182614u;
            return;
        }
    }
    ctx->pc = 0x18259Cu;
    // 0x18259c: 0x1411c0  sll         $v0, $s4, 7
    ctx->pc = 0x18259cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x1825a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1825a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1825a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1825a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1825a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1825a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1825ac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1825acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1825b0: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x1825b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1825b4: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1825B4u;
    {
        const bool branch_taken_0x1825b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1825B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825B4u;
        // 0x1825b8: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825b4) {
            ctx->pc = 0x182614u;
            return;
        }
    }
    ctx->pc = 0x1825BCu;
    // 0x1825bc: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1825c0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1825c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1825c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1825C4u;
    {
        const bool branch_taken_0x1825c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1825C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825C4u;
        // 0x1825c8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825c4) {
            ctx->pc = 0x1825E0u;
            return;
        }
    }
    ctx->pc = 0x1825CCu;
    // 0x1825cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1825ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825d0: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x1825D0u;
    SET_GPR_U32(ctx, 31, 0x1825D8u);
    ctx->pc = 0x1825D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825D0u;
    // 0x1825d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x1825D0u, 0x1825D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825D8u;
label_1825d8:
    // 0x1825d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1825D8u;
    {
        const bool branch_taken_0x1825d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1825d8) {
            ctx->pc = 0x1825ECu;
            return;
        }
    }
    ctx->pc = 0x1825E0u;
}
