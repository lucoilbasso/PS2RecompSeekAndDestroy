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

// Function: RankingInit__16ExpansionRanking
// Address: 0x118de0 - 0x118e84
void RankingInit__16ExpansionRanking_0x118de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RankingInit__16ExpansionRanking_0x118de0");
#endif

    switch (ctx->pc) {
        case 0x118e08u: goto label_118e08;
        case 0x118e18u: goto label_118e18;
        case 0x118e24u: goto label_118e24;
        case 0x118e48u: goto label_118e48;
        default: break;
    }

    ctx->pc = 0x118de0u;

    // 0x118de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118de8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118dec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x118decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x118df0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x118df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x118df4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x118df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118df8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x118df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x118dfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x118dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x118e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x118e04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x118e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118e08:
    // 0x118e08: 0x2538021  addu        $s0, $s2, $s3
    ctx->pc = 0x118e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x118e0c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x118e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e14: 0x0  nop
    ctx->pc = 0x118e14u;
    // NOP
label_118e18:
    // 0x118e18: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x118e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x118e1c: 0xc0463a2  jal         func_118E88
    ctx->pc = 0x118E1Cu;
    SET_GPR_U32(ctx, 31, 0x118E24u);
    ctx->pc = 0x118E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E1Cu;
    // 0x118e20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E88u, 0x118E1Cu, 0x118E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E24u;
label_118e24:
    // 0x118e24: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x118E24u;
    {
        const bool branch_taken_0x118e24 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x118E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E24u;
        // 0x118e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e24) {
            ctx->pc = 0x118E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118e18;
        }
    }
    ctx->pc = 0x118E2Cu;
    // 0x118e2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x118e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x118e30: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x118e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x118e34: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x118E34u;
    {
        const bool branch_taken_0x118e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E34u;
        // 0x118e38: 0x265200c8  addiu       $s2, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e34) {
            ctx->pc = 0x118E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118e08;
        }
    }
    ctx->pc = 0x118E3Cu;
    // 0x118e3c: 0x26640267  addiu       $a0, $s3, 0x267
    ctx->pc = 0x118e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 615));
    // 0x118e40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x118e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118e44: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x118e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_118e48:
    // 0x118e48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118e4c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x118e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x118e50: 0x0  nop
    ctx->pc = 0x118e50u;
    // NOP
    // 0x118e54: 0x0  nop
    ctx->pc = 0x118e54u;
    // NOP
    // 0x118e58: 0x0  nop
    ctx->pc = 0x118e58u;
    // NOP
    // 0x118e5c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118E5Cu;
    {
        const bool branch_taken_0x118e5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E5Cu;
        // 0x118e60: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e5c) {
            ctx->pc = 0x118E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118e48;
        }
    }
    ctx->pc = 0x118E64u;
    // 0x118e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x118e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118e74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x118e74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x118e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x118e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x118E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E7Cu;
        // 0x118e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E84u;
}
