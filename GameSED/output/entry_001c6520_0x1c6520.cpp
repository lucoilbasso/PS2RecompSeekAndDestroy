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

// Function: entry_001c6520
// Address: 0x1c6520 - 0x1c6548
void entry_001c6520_0x1c6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6520_0x1c6520");
#endif

    switch (ctx->pc) {
        case 0x1c652cu: goto label_1c652c;
        default: break;
    }

    ctx->pc = 0x1c6520u;

    // 0x1c6520: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1c6520u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1c6524: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C6524u;
    SET_GPR_U32(ctx, 31, 0x1C652Cu);
    ctx->pc = 0x1C6528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6524u;
    // 0x1c6528: 0x8e24ddfc  lw          $a0, -0x2204($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C6524u, 0x1C652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C652Cu;
label_1c652c:
    // 0x1c652c: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C652Cu;
    {
        const bool branch_taken_0x1c652c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C652Cu;
        // 0x1c6530: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c652c) {
            ctx->pc = 0x1C65C8u;
            return;
        }
    }
    ctx->pc = 0x1C6534u;
    // 0x1c6534: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6534u;
    {
        const bool branch_taken_0x1c6534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6534) {
            ctx->pc = 0x1C6548u;
            return;
        }
    }
    ctx->pc = 0x1C653Cu;
    // 0x1c653c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c653cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6540: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6540u;
    {
        const bool branch_taken_0x1c6540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6540u;
        // 0x1c6544: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6540) {
            ctx->pc = 0x1C6558u;
            return;
        }
    }
    ctx->pc = 0x1C6548u;
}
