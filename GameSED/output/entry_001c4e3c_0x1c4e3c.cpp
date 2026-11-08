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

// Function: entry_001c4e3c
// Address: 0x1c4e3c - 0x1c4e70
void entry_001c4e3c_0x1c4e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4e3c_0x1c4e3c");
#endif

    switch (ctx->pc) {
        case 0x1c4e4cu: goto label_1c4e4c;
        case 0x1c4e54u: goto label_1c4e54;
        case 0x1c4e5cu: goto label_1c4e5c;
        default: break;
    }

    ctx->pc = 0x1c4e3cu;

    // 0x1c4e3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e44: 0xc071606  jal         func_1C5818
    ctx->pc = 0x1C4E44u;
    SET_GPR_U32(ctx, 31, 0x1C4E4Cu);
    ctx->pc = 0x1C4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E44u;
    // 0x1c4e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x1C4E44u, 0x1C4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E4Cu;
label_1c4e4c:
    // 0x1c4e4c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1C4E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C4E54u);
    ctx->pc = 0x1C4E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E4Cu;
    // 0x1c4e50: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1C4E4Cu, 0x1C4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E54u;
label_1c4e54:
    // 0x1c4e54: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1C4E54u;
    SET_GPR_U32(ctx, 31, 0x1C4E5Cu);
    ctx->pc = 0x1C4E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E54u;
    // 0x1c4e58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1C4E54u, 0x1C4E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E5Cu;
label_1c4e5c:
    // 0x1c4e5c: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1c4e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1c4e60: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1c4e60u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1c4e64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C4E64u;
    {
        const bool branch_taken_0x1c4e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E64u;
        // 0x1c4e68: 0x3c140041  lui         $s4, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e64) {
            ctx->pc = 0x1C4E94u;
            return;
        }
    }
    ctx->pc = 0x1C4E6Cu;
    // 0x1c4e6c: 0x0  nop
    ctx->pc = 0x1c4e6cu;
    // NOP
    ctx->pc = 0x1c4e70u;
}
