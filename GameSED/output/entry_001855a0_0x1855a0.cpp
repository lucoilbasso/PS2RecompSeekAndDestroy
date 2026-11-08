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

// Function: entry_001855a0
// Address: 0x1855a0 - 0x1855e8
void entry_001855a0_0x1855a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001855a0_0x1855a0");
#endif

    switch (ctx->pc) {
        case 0x1855c4u: goto label_1855c4;
        default: break;
    }

    ctx->pc = 0x1855a0u;

label_1855a0:
    // 0x1855a0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x1855a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_1855a4:
    // 0x1855a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1855a8:
    if (ctx->pc == 0x1855A8u) {
        ctx->pc = 0x1855ACu;
        goto label_1855ac;
    }
    ctx->pc = 0x1855A4u;
    {
        const bool branch_taken_0x1855a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1855a4) {
            ctx->pc = 0x1855E8u;
            return;
        }
    }
    ctx->pc = 0x1855ACu;
label_1855ac:
    // 0x1855ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1855acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1855b0:
    // 0x1855b0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1855b4:
    // 0x1855b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1855b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1855b8:
    // 0x1855b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1855b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1855bc:
    // 0x1855bc: 0x40f809  jalr        $v0
label_1855c0:
    if (ctx->pc == 0x1855C0u) {
        ctx->pc = 0x1855C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855BCu;
        // 0x1855c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855C4u;
        goto label_1855c4;
    }
    ctx->pc = 0x1855BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1855C4u);
        ctx->pc = 0x1855C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855BCu;
        // 0x1855c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1855BCu, 0x1855C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1855C4u;
label_1855c4:
    // 0x1855c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1855c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1855c8:
    // 0x1855c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1855cc:
    if (ctx->pc == 0x1855CCu) {
        ctx->pc = 0x1855CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855C8u;
        // 0x1855cc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855D0u;
        goto label_1855d0;
    }
    ctx->pc = 0x1855C8u;
    {
        const bool branch_taken_0x1855c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1855CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855C8u;
        // 0x1855cc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855c8) {
            ctx->pc = 0x1855E8u;
            return;
        }
    }
    ctx->pc = 0x1855D0u;
label_1855d0:
    // 0x1855d0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1855d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_1855d4:
    // 0x1855d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1855d8:
    // 0x1855d8: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x1855d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
label_1855dc:
    // 0x1855dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1855dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1855e0:
    // 0x1855e0: 0xae030120  sw          $v1, 0x120($s0)
    ctx->pc = 0x1855e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
label_1855e4:
    // 0x1855e4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1855e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x1855e8u;
}
