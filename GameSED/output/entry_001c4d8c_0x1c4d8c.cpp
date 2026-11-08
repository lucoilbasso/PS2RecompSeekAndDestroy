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

// Function: entry_001c4d8c
// Address: 0x1c4d8c - 0x1c4db4
void entry_001c4d8c_0x1c4d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4d8c_0x1c4d8c");
#endif

    switch (ctx->pc) {
        case 0x1c4db0u: goto label_1c4db0;
        default: break;
    }

    ctx->pc = 0x1c4d8cu;

label_1c4d8c:
    // 0x1c4d8c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1c4d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1c4d90:
    // 0x1c4d90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c4d94:
    if (ctx->pc == 0x1C4D94u) {
        ctx->pc = 0x1C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D90u;
        // 0x1c4d94: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D98u;
        goto label_1c4d98;
    }
    ctx->pc = 0x1C4D90u;
    {
        const bool branch_taken_0x1c4d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D90u;
        // 0x1c4d94: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d90) {
            ctx->pc = 0x1C4DB4u;
            return;
        }
    }
    ctx->pc = 0x1C4D98u;
label_1c4d98:
    // 0x1c4d98: 0x8c46ddd4  lw          $a2, -0x222C($v0)
    ctx->pc = 0x1c4d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958548)));
label_1c4d9c:
    // 0x1c4d9c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_1c4da0:
    if (ctx->pc == 0x1C4DA0u) {
        ctx->pc = 0x1C4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D9Cu;
        // 0x1c4da0: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DA4u;
        goto label_1c4da4;
    }
    ctx->pc = 0x1C4D9Cu;
    {
        const bool branch_taken_0x1c4d9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D9Cu;
        // 0x1c4da0: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d9c) {
            ctx->pc = 0x1C4DB4u;
            return;
        }
    }
    ctx->pc = 0x1C4DA4u;
label_1c4da4:
    // 0x1c4da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4da8:
    // 0x1c4da8: 0xc0f809  jalr        $a2
label_1c4dac:
    if (ctx->pc == 0x1C4DACu) {
        ctx->pc = 0x1C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA8u;
        // 0x1c4dac: 0x8c45dde0  lw          $a1, -0x2220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DB0u;
        goto label_1c4db0;
    }
    ctx->pc = 0x1C4DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C4DB0u);
        ctx->pc = 0x1C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA8u;
        // 0x1c4dac: 0x8c45dde0  lw          $a1, -0x2220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958560)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4DA8u, 0x1C4DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4DB0u;
label_1c4db0:
    // 0x1c4db0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1c4db4u;
}
