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

// Function: entry_001d1330
// Address: 0x1d1330 - 0x1d134c
void entry_001d1330_0x1d1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1330_0x1d1330");
#endif

    switch (ctx->pc) {
        case 0x1d1338u: goto label_1d1338;
        default: break;
    }

    ctx->pc = 0x1d1330u;

    // 0x1d1330: 0xc074b22  jal         func_1D2C88
    ctx->pc = 0x1D1330u;
    SET_GPR_U32(ctx, 31, 0x1D1338u);
    ctx->pc = 0x1D1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1330u;
    // 0x1d1334: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C88u, 0x1D1330u, 0x1D1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1338u;
label_1d1338:
    // 0x1d1338: 0x14400573  bnez        $v0, . + 4 + (0x573 << 2)
    ctx->pc = 0x1D1338u;
    {
        const bool branch_taken_0x1d1338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1338u;
        // 0x1d133c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1338) {
            ctx->pc = 0x1D2908u;
            return;
        }
    }
    ctx->pc = 0x1D1340u;
    // 0x1d1340: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x1d1340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1344: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x1d1344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d1348: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x1d1348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
    ctx->pc = 0x1d134cu;
}
