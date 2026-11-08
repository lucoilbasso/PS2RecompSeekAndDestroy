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

// Function: entry_001c9ac8
// Address: 0x1c9ac8 - 0x1c9b28
void entry_001c9ac8_0x1c9ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9ac8_0x1c9ac8");
#endif

    switch (ctx->pc) {
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9b0cu: goto label_1c9b0c;
        case 0x1c9b18u: goto label_1c9b18;
        default: break;
    }

    ctx->pc = 0x1c9ac8u;

    // 0x1c9ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c9accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ad0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C9AD0u;
    SET_GPR_U32(ctx, 31, 0x1C9AD8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C9AD0u, 0x1C9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AD8u;
label_1c9ad8:
    // 0x1c9ad8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c9ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae8: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C9AE8u;
    SET_GPR_U32(ctx, 31, 0x1C9AF0u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C9AE8u, 0x1C9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AF0u;
label_1c9af0:
    // 0x1c9af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9AF8u;
    {
        const bool branch_taken_0x1c9af8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c9af8) {
            ctx->pc = 0x1C9B28u;
            return;
        }
    }
    ctx->pc = 0x1C9B00u;
    // 0x1c9b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b04: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C9B04u;
    SET_GPR_U32(ctx, 31, 0x1C9B0Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C9B04u, 0x1C9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B0Cu;
label_1c9b0c:
    // 0x1c9b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b10: 0xc07298e  jal         func_1CA638
    ctx->pc = 0x1C9B10u;
    SET_GPR_U32(ctx, 31, 0x1C9B18u);
    ctx->pc = 0x1CA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA638u, 0x1C9B10u, 0x1C9B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B18u;
label_1c9b18:
    // 0x1c9b18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c9b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9b1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c9b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c9b20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B20u;
    {
        const bool branch_taken_0x1c9b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B20u;
        // 0x1c9b24: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b20) {
            ctx->pc = 0x1C9B3Cu;
            return;
        }
    }
    ctx->pc = 0x1C9B28u;
}
