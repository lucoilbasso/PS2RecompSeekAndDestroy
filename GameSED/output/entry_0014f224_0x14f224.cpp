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

// Function: entry_0014f224
// Address: 0x14f224 - 0x14f238
void entry_0014f224_0x14f224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f224_0x14f224");
#endif

    switch (ctx->pc) {
        case 0x14f234u: goto label_14f234;
        default: break;
    }

    ctx->pc = 0x14f224u;

    // 0x14f224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f228: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f22c: 0xc0585d0  jal         func_161740
    ctx->pc = 0x14F22Cu;
    SET_GPR_U32(ctx, 31, 0x14F234u);
    ctx->pc = 0x14F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F22Cu;
    // 0x14f230: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x14F22Cu, 0x14F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F234u;
label_14f234:
    // 0x14f234: 0x8e220818  lw          $v0, 0x818($s1)
    ctx->pc = 0x14f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
    ctx->pc = 0x14f238u;
}
