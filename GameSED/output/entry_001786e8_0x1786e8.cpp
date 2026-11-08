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

// Function: entry_001786e8
// Address: 0x1786e8 - 0x178714
void entry_001786e8_0x1786e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001786e8_0x1786e8");
#endif

    switch (ctx->pc) {
        case 0x1786f8u: goto label_1786f8;
        case 0x178704u: goto label_178704;
        default: break;
    }

    ctx->pc = 0x1786e8u;

    // 0x1786e8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1786e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1786ec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1786ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1786f0: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x1786F0u;
    SET_GPR_U32(ctx, 31, 0x1786F8u);
    ctx->pc = 0x1786F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786F0u;
    // 0x1786f4: 0x24c6d528  addiu       $a2, $a2, -0x2AD8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x1786F0u, 0x1786F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786F8u;
label_1786f8:
    // 0x1786f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1786f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786fc: 0xc06ca22  jal         func_1B2888
    ctx->pc = 0x1786FCu;
    SET_GPR_U32(ctx, 31, 0x178704u);
    ctx->pc = 0x178700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786FCu;
    // 0x178700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2888u, 0x1786FCu, 0x178704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178704u;
label_178704:
    // 0x178704: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x178704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x178708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17870c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17870Cu;
    {
        const bool branch_taken_0x17870c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x178710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17870Cu;
        // 0x178710: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17870c) {
            ctx->pc = 0x178720u;
            return;
        }
    }
    ctx->pc = 0x178714u;
}
