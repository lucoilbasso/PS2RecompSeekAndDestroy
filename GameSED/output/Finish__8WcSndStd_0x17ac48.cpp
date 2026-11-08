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

// Function: Finish__8WcSndStd
// Address: 0x17ac48 - 0x17acac
void Finish__8WcSndStd_0x17ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8WcSndStd_0x17ac48");
#endif

    switch (ctx->pc) {
        case 0x17ac70u: goto label_17ac70;
        case 0x17ac7cu: goto label_17ac7c;
        case 0x17ac8cu: goto label_17ac8c;
        case 0x17ac94u: goto label_17ac94;
        default: break;
    }

    ctx->pc = 0x17ac48u;

    // 0x17ac48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ac4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ac50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17ac50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17ac58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ac5c: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x17ac5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17ac60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ac64: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17ac64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ac68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ac68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac6c: 0x0  nop
    ctx->pc = 0x17ac6cu;
    // NOP
label_17ac70:
    // 0x17ac70: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17ac74: 0xc05e9e6  jal         func_17A798
    ctx->pc = 0x17AC74u;
    SET_GPR_U32(ctx, 31, 0x17AC7Cu);
    ctx->pc = 0x17AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC74u;
    // 0x17ac78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A798u, 0x17AC74u, 0x17AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC7Cu;
label_17ac7c:
    // 0x17ac7c: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17AC7Cu;
    {
        const bool branch_taken_0x17ac7c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17ac7c) {
            ctx->pc = 0x17AC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AC7Cu;
            // 0x17ac80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ac70;
        }
    }
    ctx->pc = 0x17AC84u;
    // 0x17ac84: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17AC84u;
    SET_GPR_U32(ctx, 31, 0x17AC8Cu);
    ctx->pc = 0x17AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC84u;
    // 0x17ac88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17AC84u, 0x17AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC8Cu;
label_17ac8c:
    // 0x17ac8c: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x17AC8Cu;
    SET_GPR_U32(ctx, 31, 0x17AC94u);
    ctx->pc = 0x17AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC8Cu;
    // 0x17ac90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x17AC8Cu, 0x17AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC94u;
label_17ac94:
    // 0x17ac94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ac94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ac98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ac9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ac9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aca0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17aca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17aca4: 0x3e00008  jr          $ra
    ctx->pc = 0x17ACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACA4u;
        // 0x17aca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ACACu;
}
