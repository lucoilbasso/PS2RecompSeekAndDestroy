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

// Function: Clear__9ApcCqpart
// Address: 0x1dad18 - 0x1dae54
void Clear__9ApcCqpart_0x1dad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9ApcCqpart_0x1dad18");
#endif

    switch (ctx->pc) {
        case 0x1dad30u: goto label_1dad30;
        case 0x1dad58u: goto label_1dad58;
        case 0x1dae30u: goto label_1dae30;
        default: break;
    }

    ctx->pc = 0x1dad18u;

    // 0x1dad18: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1dad18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad1c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1dad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1dad20: 0xad200c04  sw          $zero, 0xC04($t1)
    ctx->pc = 0x1dad20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3076), GPR_U32(ctx, 0));
    // 0x1dad24: 0x25220cc8  addiu       $v0, $t1, 0xCC8
    ctx->pc = 0x1dad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3272));
    // 0x1dad28: 0xad200c08  sw          $zero, 0xC08($t1)
    ctx->pc = 0x1dad28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3080), GPR_U32(ctx, 0));
    // 0x1dad2c: 0x0  nop
    ctx->pc = 0x1dad2cu;
    // NOP
label_1dad30:
    // 0x1dad30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dad34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dad34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1dad38: 0x0  nop
    ctx->pc = 0x1dad38u;
    // NOP
    // 0x1dad3c: 0x0  nop
    ctx->pc = 0x1dad3cu;
    // NOP
    // 0x1dad40: 0x0  nop
    ctx->pc = 0x1dad40u;
    // NOP
    // 0x1dad44: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DAD44u;
    {
        const bool branch_taken_0x1dad44 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD44u;
        // 0x1dad48: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad44) {
            ctx->pc = 0x1DAD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dad30;
        }
    }
    ctx->pc = 0x1DAD4Cu;
    // 0x1dad4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dad50: 0x2522125c  addiu       $v0, $t1, 0x125C
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4700));
    // 0x1dad54: 0x0  nop
    ctx->pc = 0x1dad54u;
    // NOP
label_1dad58:
    // 0x1dad58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dad5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1dad60: 0x0  nop
    ctx->pc = 0x1dad60u;
    // NOP
    // 0x1dad64: 0x0  nop
    ctx->pc = 0x1dad64u;
    // NOP
    // 0x1dad68: 0x0  nop
    ctx->pc = 0x1dad68u;
    // NOP
    // 0x1dad6c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DAD6Cu;
    {
        const bool branch_taken_0x1dad6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DAD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD6Cu;
        // 0x1dad70: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad6c) {
            ctx->pc = 0x1DAD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dad58;
        }
    }
    ctx->pc = 0x1DAD74u;
    // 0x1dad74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dad78: 0x2524111c  addiu       $a0, $t1, 0x111C
    ctx->pc = 0x1dad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4380));
    // 0x1dad7c: 0x252310fc  addiu       $v1, $t1, 0x10FC
    ctx->pc = 0x1dad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4348));
    // 0x1dad80: 0x25251200  addiu       $a1, $t1, 0x1200
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4608));
    // 0x1dad84: 0x2526120c  addiu       $a2, $t1, 0x120C
    ctx->pc = 0x1dad84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4620));
    // 0x1dad88: 0x25271218  addiu       $a3, $t1, 0x1218
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4632));
    // 0x1dad8c: 0x25281224  addiu       $t0, $t1, 0x1224
    ctx->pc = 0x1dad8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4644));
    // 0x1dad90: 0xad201260  sw          $zero, 0x1260($t1)
    ctx->pc = 0x1dad90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4704), GPR_U32(ctx, 0));
    // 0x1dad94: 0xad220c98  sw          $v0, 0xC98($t1)
    ctx->pc = 0x1dad94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3224), GPR_U32(ctx, 2));
    // 0x1dad98: 0x252a1240  addiu       $t2, $t1, 0x1240
    ctx->pc = 0x1dad98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4672));
    // 0x1dad9c: 0xad220c9c  sw          $v0, 0xC9C($t1)
    ctx->pc = 0x1dad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3228), GPR_U32(ctx, 2));
    // 0x1dada0: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dada4: 0xad220ca0  sw          $v0, 0xCA0($t1)
    ctx->pc = 0x1dada4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3232), GPR_U32(ctx, 2));
    // 0x1dada8: 0xad220c1c  sw          $v0, 0xC1C($t1)
    ctx->pc = 0x1dada8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3100), GPR_U32(ctx, 2));
    // 0x1dadac: 0xad220cb4  sw          $v0, 0xCB4($t1)
    ctx->pc = 0x1dadacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3252), GPR_U32(ctx, 2));
    // 0x1dadb0: 0xad220cc0  sw          $v0, 0xCC0($t1)
    ctx->pc = 0x1dadb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3264), GPR_U32(ctx, 2));
    // 0x1dadb4: 0xad220ca4  sw          $v0, 0xCA4($t1)
    ctx->pc = 0x1dadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3236), GPR_U32(ctx, 2));
    // 0x1dadb8: 0xad200ccc  sw          $zero, 0xCCC($t1)
    ctx->pc = 0x1dadb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 3276), GPR_U32(ctx, 0));
    // 0x1dadbc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1dadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1dadc0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1dadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1dadc4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dadc8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1dadc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1dadcc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1dadccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1dadd0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1dadd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1dadd4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1dadd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1dadd8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1dadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1daddc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1daddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1dade0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1dade0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1dade4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dade4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dade8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1dade8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1dadec: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1dadecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1dadf0: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1dadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1dadf4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1dadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1dadf8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1dadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1dadfc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1dadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1dae00: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1dae00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1dae04: 0xad201264  sw          $zero, 0x1264($t1)
    ctx->pc = 0x1dae04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4708), GPR_U32(ctx, 0));
    // 0x1dae08: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1dae08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1dae0c: 0xad2011c0  sw          $zero, 0x11C0($t1)
    ctx->pc = 0x1dae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4544), GPR_U32(ctx, 0));
    // 0x1dae10: 0xad2011e0  sw          $zero, 0x11E0($t1)
    ctx->pc = 0x1dae10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4576), GPR_U32(ctx, 0));
    // 0x1dae14: 0xad201230  sw          $zero, 0x1230($t1)
    ctx->pc = 0x1dae14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4656), GPR_U32(ctx, 0));
    // 0x1dae18: 0xad201268  sw          $zero, 0x1268($t1)
    ctx->pc = 0x1dae18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4712), GPR_U32(ctx, 0));
    // 0x1dae1c: 0xad201244  sw          $zero, 0x1244($t1)
    ctx->pc = 0x1dae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4676), GPR_U32(ctx, 0));
    // 0x1dae20: 0xad201248  sw          $zero, 0x1248($t1)
    ctx->pc = 0x1dae20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4680), GPR_U32(ctx, 0));
    // 0x1dae24: 0xad20124c  sw          $zero, 0x124C($t1)
    ctx->pc = 0x1dae24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4684), GPR_U32(ctx, 0));
    // 0x1dae28: 0xad201250  sw          $zero, 0x1250($t1)
    ctx->pc = 0x1dae28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4688), GPR_U32(ctx, 0));
    // 0x1dae2c: 0xad201254  sw          $zero, 0x1254($t1)
    ctx->pc = 0x1dae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4692), GPR_U32(ctx, 0));
label_1dae30:
    // 0x1dae30: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1dae30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1dae34: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1dae34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1dae38: 0x0  nop
    ctx->pc = 0x1dae38u;
    // NOP
    // 0x1dae3c: 0x0  nop
    ctx->pc = 0x1dae3cu;
    // NOP
    // 0x1dae40: 0x0  nop
    ctx->pc = 0x1dae40u;
    // NOP
    // 0x1dae44: 0x561fffa  bgez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DAE44u;
    {
        const bool branch_taken_0x1dae44 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1DAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE44u;
        // 0x1dae48: 0x254afffc  addiu       $t2, $t2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae44) {
            ctx->pc = 0x1DAE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dae30;
        }
    }
    ctx->pc = 0x1DAE4Cu;
    // 0x1dae4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAE54u;
}
