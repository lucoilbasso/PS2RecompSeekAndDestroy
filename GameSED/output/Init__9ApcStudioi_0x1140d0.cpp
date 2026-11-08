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

// Function: Init__9ApcStudioi
// Address: 0x1140d0 - 0x114164
void Init__9ApcStudioi_0x1140d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcStudioi_0x1140d0");
#endif

    switch (ctx->pc) {
        case 0x1140e4u: goto label_1140e4;
        case 0x114130u: goto label_114130;
        case 0x114154u: goto label_114154;
        default: break;
    }

    ctx->pc = 0x1140d0u;

    // 0x1140d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1140d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1140d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1140d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1140d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1140d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1140dc: 0xc05e896  jal         func_17A258
    ctx->pc = 0x1140DCu;
    SET_GPR_U32(ctx, 31, 0x1140E4u);
    ctx->pc = 0x1140E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140DCu;
    // 0x1140e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1140DCu, 0x1140E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140E4u;
label_1140e4:
    // 0x1140e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1140e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1140e8: 0x26043410  addiu       $a0, $s0, 0x3410
    ctx->pc = 0x1140e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13328));
    // 0x1140ec: 0x2403011f  addiu       $v1, $zero, 0x11F
    ctx->pc = 0x1140ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x1140f0: 0xae0233c8  sw          $v0, 0x33C8($s0)
    ctx->pc = 0x1140f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13256), GPR_U32(ctx, 2));
    // 0x1140f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1140f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1140f8: 0x2603363c  addiu       $v1, $s0, 0x363C
    ctx->pc = 0x1140f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 13884));
    // 0x1140fc: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x1140fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x114100: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x114100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114104: 0xae0033bc  sw          $zero, 0x33BC($s0)
    ctx->pc = 0x114104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13244), GPR_U32(ctx, 0));
    // 0x114108: 0xae0033c0  sw          $zero, 0x33C0($s0)
    ctx->pc = 0x114108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13248), GPR_U32(ctx, 0));
    // 0x11410c: 0xae0233c4  sw          $v0, 0x33C4($s0)
    ctx->pc = 0x11410cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13252), GPR_U32(ctx, 2));
    // 0x114110: 0xae0033cc  sw          $zero, 0x33CC($s0)
    ctx->pc = 0x114110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13260), GPR_U32(ctx, 0));
    // 0x114114: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x114114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x114118: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x114118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x11411c: 0xae00361c  sw          $zero, 0x361C($s0)
    ctx->pc = 0x11411cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13852), GPR_U32(ctx, 0));
    // 0x114120: 0xae003620  sw          $zero, 0x3620($s0)
    ctx->pc = 0x114120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13856), GPR_U32(ctx, 0));
    // 0x114124: 0xae003624  sw          $zero, 0x3624($s0)
    ctx->pc = 0x114124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13860), GPR_U32(ctx, 0));
    // 0x114128: 0xae003628  sw          $zero, 0x3628($s0)
    ctx->pc = 0x114128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13864), GPR_U32(ctx, 0));
    // 0x11412c: 0xae00362c  sw          $zero, 0x362C($s0)
    ctx->pc = 0x11412cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13868), GPR_U32(ctx, 0));
label_114130:
    // 0x114130: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x114130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x114134: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x114134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x114138: 0x0  nop
    ctx->pc = 0x114138u;
    // NOP
    // 0x11413c: 0x0  nop
    ctx->pc = 0x11413cu;
    // NOP
    // 0x114140: 0x0  nop
    ctx->pc = 0x114140u;
    // NOP
    // 0x114144: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x114144u;
    {
        const bool branch_taken_0x114144 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x114148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114144u;
        // 0x114148: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114144) {
            ctx->pc = 0x114130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114130;
        }
    }
    ctx->pc = 0x11414Cu;
    // 0x11414c: 0xc04505a  jal         func_114168
    ctx->pc = 0x11414Cu;
    SET_GPR_U32(ctx, 31, 0x114154u);
    ctx->pc = 0x114150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11414Cu;
    // 0x114150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114168u, 0x11414Cu, 0x114154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114154u;
label_114154:
    // 0x114154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114158: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x114158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11415c: 0x3e00008  jr          $ra
    ctx->pc = 0x11415Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11415Cu;
        // 0x114160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11415Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114164u;
}
