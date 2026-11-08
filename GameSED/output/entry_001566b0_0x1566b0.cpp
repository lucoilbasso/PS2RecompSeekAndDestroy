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

// Function: entry_001566b0
// Address: 0x1566b0 - 0x1566e8
void entry_001566b0_0x1566b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001566b0_0x1566b0");
#endif

    switch (ctx->pc) {
        case 0x1566c4u: goto label_1566c4;
        default: break;
    }

    ctx->pc = 0x1566b0u;

label_1566b0:
    // 0x1566b0: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x1566b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_1566b4:
    // 0x1566b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1566b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1566b8:
    // 0x1566b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1566b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1566bc:
    // 0x1566bc: 0x40f809  jalr        $v0
label_1566c0:
    if (ctx->pc == 0x1566C0u) {
        ctx->pc = 0x1566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566BCu;
        // 0x1566c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566C4u;
        goto label_1566c4;
    }
    ctx->pc = 0x1566BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1566C4u);
        ctx->pc = 0x1566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566BCu;
        // 0x1566c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1566BCu, 0x1566C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1566C4u;
label_1566c4:
    // 0x1566c4: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x1566c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1566c8:
    // 0x1566c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1566cc:
    if (ctx->pc == 0x1566CCu) {
        ctx->pc = 0x1566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C8u;
        // 0x1566cc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566D0u;
        goto label_1566d0;
    }
    ctx->pc = 0x1566C8u;
    {
        const bool branch_taken_0x1566c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C8u;
        // 0x1566cc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566c8) {
            ctx->pc = 0x1566E8u;
            return;
        }
    }
    ctx->pc = 0x1566D0u;
label_1566d0:
    // 0x1566d0: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x1566d0u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1566d4:
    // 0x1566d4: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_1566d8:
    // 0x1566d8: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x1566d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
label_1566dc:
    // 0x1566dc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1566dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1566e0:
    // 0x1566e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1566e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1566e4:
    // 0x1566e4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1566e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->pc = 0x1566e8u;
}
