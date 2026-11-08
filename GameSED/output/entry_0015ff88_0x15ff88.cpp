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

// Function: entry_0015ff88
// Address: 0x15ff88 - 0x15ffa4
void entry_0015ff88_0x15ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff88_0x15ff88");
#endif

    switch (ctx->pc) {
        case 0x15ffa0u: goto label_15ffa0;
        default: break;
    }

    ctx->pc = 0x15ff88u;

    // 0x15ff88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ff88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ff8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ff8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ff94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ff94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff98: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x15FF98u;
    SET_GPR_U32(ctx, 31, 0x15FFA0u);
    ctx->pc = 0x15FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF98u;
    // 0x15ff9c: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x15FF98u, 0x15FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFA0u;
label_15ffa0:
    // 0x15ffa0: 0x8e650fc8  lw          $a1, 0xFC8($s3)
    ctx->pc = 0x15ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
    ctx->pc = 0x15ffa4u;
}
