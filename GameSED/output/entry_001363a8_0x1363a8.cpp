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

// Function: entry_001363a8
// Address: 0x1363a8 - 0x1363d0
void entry_001363a8_0x1363a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363a8_0x1363a8");
#endif

    switch (ctx->pc) {
        case 0x1363c4u: goto label_1363c4;
        default: break;
    }

    ctx->pc = 0x1363a8u;

label_1363a8:
    // 0x1363a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1363a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1363ac:
    // 0x1363ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1363acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1363b0:
    // 0x1363b0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1363b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1363b4:
    // 0x1363b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1363b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1363b8:
    // 0x1363b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1363b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1363bc:
    // 0x1363bc: 0x60f809  jalr        $v1
label_1363c0:
    if (ctx->pc == 0x1363C0u) {
        ctx->pc = 0x1363C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363BCu;
        // 0x1363c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1363C4u;
        goto label_1363c4;
    }
    ctx->pc = 0x1363BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1363C4u);
        ctx->pc = 0x1363C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363BCu;
        // 0x1363c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1363BCu, 0x1363C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1363C4u;
label_1363c4:
    // 0x1363c4: 0x10000045  b           . + 4 + (0x45 << 2)
label_1363c8:
    if (ctx->pc == 0x1363C8u) {
        ctx->pc = 0x1363CCu;
        goto label_1363cc;
    }
    ctx->pc = 0x1363C4u;
    {
        const bool branch_taken_0x1363c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363c4) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x1363CCu;
label_1363cc:
    // 0x1363cc: 0x0  nop
    ctx->pc = 0x1363ccu;
    // NOP
    ctx->pc = 0x1363d0u;
}
