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

// Function: WModelPresetPacketTotalSize__FP5PBHDRi
// Address: 0x17f978 - 0x17f9bc
void WModelPresetPacketTotalSize__FP5PBHDRi_0x17f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelPresetPacketTotalSize__FP5PBHDRi_0x17f978");
#endif

    switch (ctx->pc) {
        case 0x17f990u: goto label_17f990;
        default: break;
    }

    ctx->pc = 0x17f978u;

    // 0x17f978: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x17f978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17f97c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f980: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x17F980u;
    {
        const bool branch_taken_0x17f980 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F980u;
        // 0x17f984: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f980) {
            ctx->pc = 0x17F9B4u;
            goto label_17f9b4;
        }
    }
    ctx->pc = 0x17F988u;
    // 0x17f988: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x17f988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x17f98c: 0x0  nop
    ctx->pc = 0x17f98cu;
    // NOP
label_17f990:
    // 0x17f990: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17f994: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x17f994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x17f998: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17f998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x17f99c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f9a0: 0x109202b  sltu        $a0, $t0, $t1
    ctx->pc = 0x17f9a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x17f9a4: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x17f9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f9a8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x17f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17f9ac: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F9ACu;
    {
        const bool branch_taken_0x17f9ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9ACu;
        // 0x17f9b0: 0x24660002  addiu       $a2, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9ac) {
            ctx->pc = 0x17F990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f990;
        }
    }
    ctx->pc = 0x17F9B4u;
label_17f9b4:
    // 0x17f9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9B4u;
        // 0x17f9b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F9BCu;
}
