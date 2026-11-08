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

// Function: entry_00177048
// Address: 0x177048 - 0x177088
void entry_00177048_0x177048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177048_0x177048");
#endif

    switch (ctx->pc) {
        case 0x177054u: goto label_177054;
        default: break;
    }

    ctx->pc = 0x177048u;

    // 0x177048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17704c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17704Cu;
    SET_GPR_U32(ctx, 31, 0x177054u);
    ctx->pc = 0x177050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17704Cu;
    // 0x177050: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17704Cu, 0x177054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177054u;
label_177054:
    // 0x177054: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x177054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x177058: 0x8c62cec0  lw          $v0, -0x3140($v1)
    ctx->pc = 0x177058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x26CEC0u));
    // 0x17705c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17705Cu;
    {
        const bool branch_taken_0x17705c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17705Cu;
        // 0x177060: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17705c) {
            ctx->pc = 0x177088u;
            return;
        }
    }
    ctx->pc = 0x177064u;
    // 0x177064: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x177064u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177068: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17706c: 0x248478a8  addiu       $a0, $a0, 0x78A8
    ctx->pc = 0x17706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30888));
    // 0x177070: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x177070u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x177074: 0x86280004  lh          $t0, 0x4($s1)
    ctx->pc = 0x177074u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177078: 0x86290006  lh          $t1, 0x6($s1)
    ctx->pc = 0x177078u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x17707c: 0x964a0002  lhu         $t2, 0x2($s2)
    ctx->pc = 0x17707cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x177080: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x177080u;
    SET_GPR_U32(ctx, 31, 0x177088u);
    ctx->pc = 0x177084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177080u;
    // 0x177084: 0x964b0004  lhu         $t3, 0x4($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x177080u, 0x177088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177088u;
}
