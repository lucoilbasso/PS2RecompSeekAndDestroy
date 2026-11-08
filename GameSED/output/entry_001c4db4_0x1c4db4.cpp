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

// Function: entry_001c4db4
// Address: 0x1c4db4 - 0x1c4dd8
void entry_001c4db4_0x1c4db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4db4_0x1c4db4");
#endif

    ctx->pc = 0x1c4db4u;

label_1c4db4:
    // 0x1c4db4: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1c4db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1c4db8:
    // 0x1c4db8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c4dbc:
    if (ctx->pc == 0x1C4DBCu) {
        ctx->pc = 0x1C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DB8u;
        // 0x1c4dbc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DC0u;
        goto label_1c4dc0;
    }
    ctx->pc = 0x1C4DB8u;
    {
        const bool branch_taken_0x1c4db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DB8u;
        // 0x1c4dbc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4db8) {
            ctx->pc = 0x1C4DD8u;
            return;
        }
    }
    ctx->pc = 0x1C4DC0u;
label_1c4dc0:
    // 0x1c4dc0: 0x8c43ddd8  lw          $v1, -0x2228($v0)
    ctx->pc = 0x1c4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958552)));
label_1c4dc4:
    // 0x1c4dc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c4dc8:
    if (ctx->pc == 0x1C4DC8u) {
        ctx->pc = 0x1C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC4u;
        // 0x1c4dc8: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DCCu;
        goto label_1c4dcc;
    }
    ctx->pc = 0x1C4DC4u;
    {
        const bool branch_taken_0x1c4dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC4u;
        // 0x1c4dc8: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4dc4) {
            ctx->pc = 0x1C4DD8u;
            return;
        }
    }
    ctx->pc = 0x1C4DCCu;
label_1c4dcc:
    // 0x1c4dcc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c4dd0:
    // 0x1c4dd0: 0x60f809  jalr        $v1
label_1c4dd4:
    if (ctx->pc == 0x1C4DD4u) {
        ctx->pc = 0x1C4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DD0u;
        // 0x1c4dd4: 0x8c45dde4  lw          $a1, -0x221C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DD8u;
        goto label_fallthrough_0x1c4dd0;
    }
    ctx->pc = 0x1C4DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C4DD8u);
        ctx->pc = 0x1C4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DD0u;
        // 0x1c4dd4: 0x8c45dde4  lw          $a1, -0x221C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958564)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4DD0u, 0x1C4DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1c4dd0:
    ctx->pc = 0x1C4DD8u;
}
