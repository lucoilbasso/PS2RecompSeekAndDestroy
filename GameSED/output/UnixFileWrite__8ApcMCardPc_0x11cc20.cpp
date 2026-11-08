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

// Function: UnixFileWrite__8ApcMCardPc
// Address: 0x11cc20 - 0x11cc94
void UnixFileWrite__8ApcMCardPc_0x11cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnixFileWrite__8ApcMCardPc_0x11cc20");
#endif

    switch (ctx->pc) {
        case 0x11cc44u: goto label_11cc44;
        case 0x11cc50u: goto label_11cc50;
        case 0x11cc68u: goto label_11cc68;
        case 0x11cc78u: goto label_11cc78;
        case 0x11cc80u: goto label_11cc80;
        default: break;
    }

    ctx->pc = 0x11cc20u;

    // 0x11cc20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11cc24: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x11cc28: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x11cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x11cc2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11cc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc30: 0x24c6d220  addiu       $a2, $a2, -0x2DE0
    ctx->pc = 0x11cc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955552));
    // 0x11cc34: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x11cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11cc38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11cc3c: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x11CC3Cu;
    SET_GPR_U32(ctx, 31, 0x11CC44u);
    ctx->pc = 0x11CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC3Cu;
    // 0x11cc40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x11CC3Cu, 0x11CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC44u;
label_11cc44:
    // 0x11cc44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc48: 0xc06ca22  jal         func_1B2888
    ctx->pc = 0x11CC48u;
    SET_GPR_U32(ctx, 31, 0x11CC50u);
    ctx->pc = 0x11CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC48u;
    // 0x11cc4c: 0x24050602  addiu       $a1, $zero, 0x602 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2888u, 0x11CC48u, 0x11CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC50u;
label_11cc50:
    // 0x11cc50: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x11cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11cc54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11cc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc58: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CC58u;
    {
        const bool branch_taken_0x11cc58 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC58u;
        // 0x11cc5c: 0x24844808  addiu       $a0, $a0, 0x4808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc58) {
            ctx->pc = 0x11CC68u;
            goto label_11cc68;
        }
    }
    ctx->pc = 0x11CC60u;
    // 0x11cc60: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11CC60u;
    SET_GPR_U32(ctx, 31, 0x11CC68u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11CC60u, 0x11CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC68u;
label_11cc68:
    // 0x11cc68: 0x26254600  addiu       $a1, $s1, 0x4600
    ctx->pc = 0x11cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17920));
    // 0x11cc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc70: 0xc06cc4a  jal         func_1B3128
    ctx->pc = 0x11CC70u;
    SET_GPR_U32(ctx, 31, 0x11CC78u);
    ctx->pc = 0x11CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC70u;
    // 0x11cc74: 0x34069800  ori         $a2, $zero, 0x9800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3128u, 0x11CC70u, 0x11CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC78u;
label_11cc78:
    // 0x11cc78: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x11CC78u;
    SET_GPR_U32(ctx, 31, 0x11CC80u);
    ctx->pc = 0x11CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC78u;
    // 0x11cc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x11CC78u, 0x11CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC80u;
label_11cc80:
    // 0x11cc80: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11cc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11cc84: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x11cc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11cc88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11cc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11cc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC8Cu;
        // 0x11cc90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC94u;
}
