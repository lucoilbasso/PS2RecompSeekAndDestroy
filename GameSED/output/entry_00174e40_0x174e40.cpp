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

// Function: entry_00174e40
// Address: 0x174e40 - 0x174e70
void entry_00174e40_0x174e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174e40_0x174e40");
#endif

    switch (ctx->pc) {
        case 0x174e4cu: goto label_174e4c;
        case 0x174e64u: goto label_174e64;
        default: break;
    }

    ctx->pc = 0x174e40u;

    // 0x174e40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e44: 0xc06ca22  jal         func_1B2888
    ctx->pc = 0x174E44u;
    SET_GPR_U32(ctx, 31, 0x174E4Cu);
    ctx->pc = 0x174E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E44u;
    // 0x174e48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2888u, 0x174E44u, 0x174E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E4Cu;
label_174e4c:
    // 0x174e4c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174E4Cu;
    {
        const bool branch_taken_0x174e4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x174E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E4Cu;
        // 0x174e50: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e4c) {
            ctx->pc = 0x174E70u;
            return;
        }
    }
    ctx->pc = 0x174E54u;
    // 0x174e54: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x174e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x174e58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x174e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e5c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174E5Cu;
    SET_GPR_U32(ctx, 31, 0x174E64u);
    ctx->pc = 0x174E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E5Cu;
    // 0x174e60: 0x248477e8  addiu       $a0, $a0, 0x77E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174E5Cu, 0x174E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E64u;
label_174e64:
    // 0x174e64: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x174E64u;
    {
        const bool branch_taken_0x174e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E64u;
        // 0x174e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e64) {
            ctx->pc = 0x174EDCu;
            return;
        }
    }
    ctx->pc = 0x174E6Cu;
    // 0x174e6c: 0x0  nop
    ctx->pc = 0x174e6cu;
    // NOP
    ctx->pc = 0x174e70u;
}
