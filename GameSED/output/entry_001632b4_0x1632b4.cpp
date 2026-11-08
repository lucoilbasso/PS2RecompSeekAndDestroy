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

// Function: entry_001632b4
// Address: 0x1632b4 - 0x1632e8
void entry_001632b4_0x1632b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001632b4_0x1632b4");
#endif

    switch (ctx->pc) {
        case 0x1632ccu: goto label_1632cc;
        default: break;
    }

    ctx->pc = 0x1632b4u;

    // 0x1632b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1632b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1632b8: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1632B8u;
    {
        const bool branch_taken_0x1632b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1632BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632B8u;
        // 0x1632bc: 0x26051a60  addiu       $a1, $s0, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632b8) {
            ctx->pc = 0x163340u;
            return;
        }
    }
    ctx->pc = 0x1632C0u;
    // 0x1632c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1632c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632c4: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x1632C4u;
    SET_GPR_U32(ctx, 31, 0x1632CCu);
    ctx->pc = 0x1632C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632C4u;
    // 0x1632c8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x1632C4u, 0x1632CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632CCu;
label_1632cc:
    // 0x1632cc: 0x8e020c0c  lw          $v0, 0xC0C($s0)
    ctx->pc = 0x1632ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3084)));
    // 0x1632d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1632D0u;
    {
        const bool branch_taken_0x1632d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1632D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632D0u;
        // 0x1632d4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632d0) {
            ctx->pc = 0x1632E8u;
            return;
        }
    }
    ctx->pc = 0x1632D8u;
    // 0x1632d8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1632d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1632dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1632DCu;
    {
        const bool branch_taken_0x1632dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632DCu;
        // 0x1632e0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632dc) {
            ctx->pc = 0x1632ECu;
            return;
        }
    }
    ctx->pc = 0x1632E4u;
    // 0x1632e4: 0x0  nop
    ctx->pc = 0x1632e4u;
    // NOP
    ctx->pc = 0x1632e8u;
}
