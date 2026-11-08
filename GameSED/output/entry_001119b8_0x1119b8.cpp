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

// Function: entry_001119b8
// Address: 0x1119b8 - 0x1119c8
void entry_001119b8_0x1119b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001119b8_0x1119b8");
#endif

    switch (ctx->pc) {
        case 0x1119c4u: goto label_1119c4;
        default: break;
    }

    ctx->pc = 0x1119b8u;

    // 0x1119b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1119b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119bc: 0xc067650  jal         func_19D940
    ctx->pc = 0x1119BCu;
    SET_GPR_U32(ctx, 31, 0x1119C4u);
    ctx->pc = 0x1119C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119BCu;
    // 0x1119c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D940u, 0x1119BCu, 0x1119C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119C4u;
label_1119c4:
    // 0x1119c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1119c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1119c8u;
}
