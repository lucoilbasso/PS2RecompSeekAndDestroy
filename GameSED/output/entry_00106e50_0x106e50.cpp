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

// Function: entry_00106e50
// Address: 0x106e50 - 0x106e80
void entry_00106e50_0x106e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106e50_0x106e50");
#endif

    switch (ctx->pc) {
        case 0x106e5cu: goto label_106e5c;
        case 0x106e78u: goto label_106e78;
        default: break;
    }

    ctx->pc = 0x106e50u;

    // 0x106e50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x106e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e54: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x106E54u;
    SET_GPR_U32(ctx, 31, 0x106E5Cu);
    ctx->pc = 0x106E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E54u;
    // 0x106e58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x106E54u, 0x106E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E5Cu;
label_106e5c:
    // 0x106e5c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x106e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106e60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x106e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x106e64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106e68: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106E68u;
    {
        const bool branch_taken_0x106e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x106e68) {
            ctx->pc = 0x106E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E68u;
            // 0x106e6c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106E80u;
            return;
        }
    }
    ctx->pc = 0x106E70u;
    // 0x106e70: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106E70u;
    SET_GPR_U32(ctx, 31, 0x106E78u);
    ctx->pc = 0x106E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E70u;
    // 0x106e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106E70u, 0x106E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E78u;
label_106e78:
    // 0x106e78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x106E78u;
    {
        const bool branch_taken_0x106e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E78u;
        // 0x106e7c: 0xae22012c  sw          $v0, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e78) {
            ctx->pc = 0x106E88u;
            return;
        }
    }
    ctx->pc = 0x106E80u;
}
