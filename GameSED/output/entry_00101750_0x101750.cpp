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

// Function: entry_00101750
// Address: 0x101750 - 0x101788
void entry_00101750_0x101750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101750_0x101750");
#endif

    switch (ctx->pc) {
        case 0x101760u: goto label_101760;
        case 0x10176cu: goto label_10176c;
        case 0x101774u: goto label_101774;
        default: break;
    }

    ctx->pc = 0x101750u;

    // 0x101750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x101750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101758: 0xc05f820  jal         func_17E080
    ctx->pc = 0x101758u;
    SET_GPR_U32(ctx, 31, 0x101760u);
    ctx->pc = 0x10175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101758u;
    // 0x10175c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x101758u, 0x101760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101760u;
label_101760:
    // 0x101760: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x101760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x101764: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101764u;
    SET_GPR_U32(ctx, 31, 0x10176Cu);
    ctx->pc = 0x101768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101764u;
    // 0x101768: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101764u, 0x10176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10176Cu;
label_10176c:
    // 0x10176c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10176Cu;
    SET_GPR_U32(ctx, 31, 0x101774u);
    ctx->pc = 0x101770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10176Cu;
    // 0x101770: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10176Cu, 0x101774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101774u;
label_101774:
    // 0x101774: 0x8e330020  lw          $s3, 0x20($s1)
    ctx->pc = 0x101774u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x101778: 0x5a600024  blezl       $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x101778u;
    {
        const bool branch_taken_0x101778 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x101778) {
            ctx->pc = 0x10177Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101778u;
            // 0x10177c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10180Cu;
            return;
        }
    }
    ctx->pc = 0x101780u;
    // 0x101780: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x101780u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101784: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x101784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101788u;
}
