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

// Function: BObjClassInit__Fv
// Address: 0x1a0b48 - 0x1a0bcc
void BObjClassInit__Fv_0x1a0b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjClassInit__Fv_0x1a0b48");
#endif

    switch (ctx->pc) {
        case 0x1a0b70u: goto label_1a0b70;
        default: break;
    }

    ctx->pc = 0x1a0b48u;

    // 0x1a0b48: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1a0b4c: 0x2404257e  addiu       $a0, $zero, 0x257E
    ctx->pc = 0x1a0b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9598));
    // 0x1a0b50: 0x2442e530  addiu       $v0, $v0, -0x1AD0
    ctx->pc = 0x1a0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x1a0b54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a0b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a0b58: 0x34632bf0  ori         $v1, $v1, 0x2BF0
    ctx->pc = 0x1a0b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11248);
    // 0x1a0b5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0b60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0b64: 0x34212bf8  ori         $at, $at, 0x2BF8
    ctx->pc = 0x1a0b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11256);
    // 0x1a0b68: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1a0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a0b6c: 0x0  nop
    ctx->pc = 0x1a0b6cu;
    // NOP
label_1a0b70:
    // 0x1a0b70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a0b74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a0b78: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1a0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1a0b7c: 0x0  nop
    ctx->pc = 0x1a0b7cu;
    // NOP
    // 0x1a0b80: 0x0  nop
    ctx->pc = 0x1a0b80u;
    // NOP
    // 0x1a0b84: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A0B84u;
    {
        const bool branch_taken_0x1a0b84 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B84u;
        // 0x1a0b88: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b84) {
            ctx->pc = 0x1A0B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0b70;
        }
    }
    ctx->pc = 0x1A0B8Cu;
    // 0x1a0b8c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1a0b90: 0x2442e530  addiu       $v0, $v0, -0x1AD0
    ctx->pc = 0x1a0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x1a0b94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0b98: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a0b98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a0b9c: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a0b9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281138u, _value); } while (0);
    // 0x1a0ba0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0ba4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a0ba8: 0xac202bf8  sw          $zero, 0x2BF8($at)
    ctx->pc = 0x1a0ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281128u, _value); } while (0);
    // 0x1a0bac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0bb0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a0bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a0bb4: 0xac222c00  sw          $v0, 0x2C00($at)
    ctx->pc = 0x1a0bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281130u, _value); } while (0);
    // 0x1a0bb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0bbc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a0bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a0bc0: 0xac202c04  sw          $zero, 0x2C04($at)
    ctx->pc = 0x1a0bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281134u, _value); } while (0);
    // 0x1a0bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0BCCu;
}
