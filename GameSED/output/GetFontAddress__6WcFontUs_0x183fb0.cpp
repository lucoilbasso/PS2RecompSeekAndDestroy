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

// Function: GetFontAddress__6WcFontUs
// Address: 0x183fb0 - 0x184010
void GetFontAddress__6WcFontUs_0x183fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFontAddress__6WcFontUs_0x183fb0");
#endif

    switch (ctx->pc) {
        case 0x183fd0u: goto label_183fd0;
        default: break;
    }

    ctx->pc = 0x183fb0u;

    // 0x183fb0: 0x8c880020  lw          $t0, 0x20($a0)
    ctx->pc = 0x183fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x183fb4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x183fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x183fb8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x183fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x183fbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183fc0: 0x8d020024  lw          $v0, 0x24($t0)
    ctx->pc = 0x183fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x183fc4: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x183fc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x183fc8: 0x23842  srl         $a3, $v0, 1
    ctx->pc = 0x183fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x183fcc: 0x0  nop
    ctx->pc = 0x183fccu;
    // NOP
label_183fd0:
    // 0x183fd0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x183fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x183fd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x183FD4u;
    {
        const bool branch_taken_0x183fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183fd4) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183FDCu;
    // 0x183fdc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x183fdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183fe0: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x183FE0u;
    {
        const bool branch_taken_0x183fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x183FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FE0u;
        // 0x183fe4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fe0) {
            ctx->pc = 0x184000u;
            goto label_184000;
        }
    }
    ctx->pc = 0x183FE8u;
    // 0x183fe8: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x183fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x183fec: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x183fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x183ff0: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x183ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x183ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x183FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FF4u;
        // 0x183ff8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183FFCu;
    // 0x183ffc: 0x0  nop
    ctx->pc = 0x183ffcu;
    // NOP
label_184000:
    // 0x184000: 0x1449fff3  bne         $v0, $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x184000u;
    {
        const bool branch_taken_0x184000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x184004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184000u;
        // 0x184004: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184000) {
            ctx->pc = 0x183FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183fd0;
        }
    }
    ctx->pc = 0x184008u;
label_184008:
    // 0x184008: 0x3e00008  jr          $ra
    ctx->pc = 0x184008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184008u;
        // 0x18400c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184010u;
}
