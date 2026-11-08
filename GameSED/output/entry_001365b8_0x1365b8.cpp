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

// Function: entry_001365b8
// Address: 0x1365b8 - 0x1365e0
void entry_001365b8_0x1365b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001365b8_0x1365b8");
#endif

    switch (ctx->pc) {
        case 0x1365c0u: goto label_1365c0;
        default: break;
    }

    ctx->pc = 0x1365b8u;

    // 0x1365b8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1365B8u;
    SET_GPR_U32(ctx, 31, 0x1365C0u);
    ctx->pc = 0x1365BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365B8u;
    // 0x1365bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1365B8u, 0x1365C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365C0u;
label_1365c0:
    // 0x1365c0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1365c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1365c4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1365c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1365c8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1365c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1365cc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1365CCu;
    {
        const bool branch_taken_0x1365cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365CCu;
        // 0x1365d0: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365cc) {
            ctx->pc = 0x136624u;
            return;
        }
    }
    ctx->pc = 0x1365D4u;
    // 0x1365d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1365D4u;
    {
        const bool branch_taken_0x1365d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365D4u;
        // 0x1365d8: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365d4) {
            ctx->pc = 0x136624u;
            return;
        }
    }
    ctx->pc = 0x1365DCu;
    // 0x1365dc: 0x0  nop
    ctx->pc = 0x1365dcu;
    // NOP
    ctx->pc = 0x1365e0u;
}
