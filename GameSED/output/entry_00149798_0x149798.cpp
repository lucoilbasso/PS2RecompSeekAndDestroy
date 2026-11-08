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

// Function: entry_00149798
// Address: 0x149798 - 0x1497f4
void entry_00149798_0x149798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149798_0x149798");
#endif

    switch (ctx->pc) {
        case 0x1497d0u: goto label_1497d0;
        default: break;
    }

    ctx->pc = 0x149798u;

    // 0x149798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14979c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14979cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1497a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1497a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1497a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1497a8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1497a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1497ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1497acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1497b0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1497b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1497b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1497b8: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1497b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1497bc: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x1497bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1497c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1497c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1497c4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1497c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497c8: 0xc05250a  jal         func_149428
    ctx->pc = 0x1497C8u;
    SET_GPR_U32(ctx, 31, 0x1497D0u);
    ctx->pc = 0x1497CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1497C8u;
    // 0x1497cc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x1497C8u, 0x1497D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497D0u;
label_1497d0:
    // 0x1497d0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1497d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1497D4u;
    {
        const bool branch_taken_0x1497d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1497D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497D4u;
        // 0x1497d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497d4) {
            ctx->pc = 0x1497F4u;
            return;
        }
    }
    ctx->pc = 0x1497DCu;
    // 0x1497dc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1497dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1497e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1497E0u;
    {
        const bool branch_taken_0x1497e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1497e0) {
            ctx->pc = 0x1497F4u;
            return;
        }
    }
    ctx->pc = 0x1497E8u;
    // 0x1497e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1497e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1497ec: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1497ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1497f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1497f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1497f4u;
}
