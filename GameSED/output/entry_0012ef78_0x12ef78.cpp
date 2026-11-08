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

// Function: entry_0012ef78
// Address: 0x12ef78 - 0x12efa0
void entry_0012ef78_0x12ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ef78_0x12ef78");
#endif

    switch (ctx->pc) {
        case 0x12ef8cu: goto label_12ef8c;
        default: break;
    }

    ctx->pc = 0x12ef78u;

    // 0x12ef78: 0x1010  mfhi        $v0
    ctx->pc = 0x12ef78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12ef7c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EF7Cu;
    {
        const bool branch_taken_0x12ef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef7c) {
            ctx->pc = 0x12EF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF7Cu;
            // 0x12ef80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFA4u;
            return;
        }
    }
    ctx->pc = 0x12EF84u;
    // 0x12ef84: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12EF84u;
    SET_GPR_U32(ctx, 31, 0x12EF8Cu);
    ctx->pc = 0x12EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF84u;
    // 0x12ef88: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12EF84u, 0x12EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF8Cu;
label_12ef8c:
    // 0x12ef8c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x12ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x12ef90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef94: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x12ef94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12ef98: 0xc04bc46  jal         func_12F118
    ctx->pc = 0x12EF98u;
    SET_GPR_U32(ctx, 31, 0x12EFA0u);
    ctx->pc = 0x12EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF98u;
    // 0x12ef9c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F118u, 0x12EF98u, 0x12EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFA0u;
}
