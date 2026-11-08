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

// Function: entry_0013fec0
// Address: 0x13fec0 - 0x13fee8
void entry_0013fec0_0x13fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fec0_0x13fec0");
#endif

    ctx->pc = 0x13fec0u;

    // 0x13fec0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x13fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13fec4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FEC4u;
    {
        const bool branch_taken_0x13fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEC4u;
        // 0x13fec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fec4) {
            ctx->pc = 0x13FEE8u;
            return;
        }
    }
    ctx->pc = 0x13FECCu;
    // 0x13fecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13feccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fed0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13fed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fed4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x13fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x13fed8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x13fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x13fedc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13fee0: 0xc050a56  jal         func_142958
    ctx->pc = 0x13FEE0u;
    SET_GPR_U32(ctx, 31, 0x13FEE8u);
    ctx->pc = 0x13FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEE0u;
    // 0x13fee4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142958u, 0x13FEE0u, 0x13FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEE8u;
}
