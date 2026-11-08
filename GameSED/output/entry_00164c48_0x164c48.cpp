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

// Function: entry_00164c48
// Address: 0x164c48 - 0x164c70
void entry_00164c48_0x164c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164c48_0x164c48");
#endif

    switch (ctx->pc) {
        case 0x164c64u: goto label_164c64;
        default: break;
    }

    ctx->pc = 0x164c48u;

    // 0x164c48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x164c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164c4c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x164c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x164c50: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x164C50u;
    {
        const bool branch_taken_0x164c50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C50u;
        // 0x164c54: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c50) {
            ctx->pc = 0x164C70u;
            return;
        }
    }
    ctx->pc = 0x164C58u;
    // 0x164c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c5c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164C5Cu;
    SET_GPR_U32(ctx, 31, 0x164C64u);
    ctx->pc = 0x164C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C5Cu;
    // 0x164c60: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164C5Cu, 0x164C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C64u;
label_164c64:
    // 0x164c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164C64u;
    {
        const bool branch_taken_0x164c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C64u;
        // 0x164c68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c64) {
            ctx->pc = 0x164C78u;
            return;
        }
    }
    ctx->pc = 0x164C6Cu;
    // 0x164c6c: 0x0  nop
    ctx->pc = 0x164c6cu;
    // NOP
    ctx->pc = 0x164c70u;
}
