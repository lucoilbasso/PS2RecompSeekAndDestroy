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

// Function: entry_001826d0
// Address: 0x1826d0 - 0x182700
void entry_001826d0_0x1826d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001826d0_0x1826d0");
#endif

    switch (ctx->pc) {
        case 0x1826e8u: goto label_1826e8;
        default: break;
    }

    ctx->pc = 0x1826d0u;

    // 0x1826d0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1826D0u;
    {
        const bool branch_taken_0x1826d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826D0u;
        // 0x1826d4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826d0) {
            ctx->pc = 0x182700u;
            return;
        }
    }
    ctx->pc = 0x1826D8u;
    // 0x1826d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1826d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1826dc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1826dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1826e0: 0xc06084e  jal         func_182138
    ctx->pc = 0x1826E0u;
    SET_GPR_U32(ctx, 31, 0x1826E8u);
    ctx->pc = 0x1826E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1826E0u;
    // 0x1826e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182138u, 0x1826E0u, 0x1826E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1826E8u;
label_1826e8:
    // 0x1826e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1826e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826ec: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x1826ECu;
    {
        const bool branch_taken_0x1826ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826ECu;
        // 0x1826f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826ec) {
            ctx->pc = 0x1827E0u;
            return;
        }
    }
    ctx->pc = 0x1826F4u;
    // 0x1826f4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1826f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1826f8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1826F8u;
    {
        const bool branch_taken_0x1826f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826F8u;
        // 0x1826fc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826f8) {
            ctx->pc = 0x1827E0u;
            return;
        }
    }
    ctx->pc = 0x182700u;
}
