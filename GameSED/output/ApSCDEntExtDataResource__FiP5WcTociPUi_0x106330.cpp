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

// Function: ApSCDEntExtDataResource__FiP5WcTociPUi
// Address: 0x106330 - 0x1063c8
void ApSCDEntExtDataResource__FiP5WcTociPUi_0x106330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntExtDataResource__FiP5WcTociPUi_0x106330");
#endif

    switch (ctx->pc) {
        case 0x106388u: goto label_106388;
        case 0x10639cu: goto label_10639c;
        default: break;
    }

    ctx->pc = 0x106330u;

    // 0x106330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106334: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x106334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x106338: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x106338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10633c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10633cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106340: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x106340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106344: 0x2c840020  sltiu       $a0, $a0, 0x20
    ctx->pc = 0x106344u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x106348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10634c: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x10634cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x106350: 0x2631ef80  addiu       $s1, $s1, -0x1080
    ctx->pc = 0x106350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963072));
    // 0x106354: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x106354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x106358: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10635c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10635cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106360: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x106360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x106364: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x106364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10636c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10636Cu;
    {
        const bool branch_taken_0x10636c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x106370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10636Cu;
        // 0x106370: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10636c) {
            ctx->pc = 0x10639Cu;
            goto label_10639c;
        }
    }
    ctx->pc = 0x106374u;
    // 0x106374: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x106374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x106378: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x106378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10637c: 0x24843818  addiu       $a0, $a0, 0x3818
    ctx->pc = 0x10637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    // 0x106380: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x106380u;
    SET_GPR_U32(ctx, 31, 0x106388u);
    ctx->pc = 0x106384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106380u;
    // 0x106384: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x106380u, 0x106388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106388u;
label_106388:
    // 0x106388: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x106388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10638c: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x10638cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x106390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106394: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106394u;
    SET_GPR_U32(ctx, 31, 0x10639Cu);
    ctx->pc = 0x106398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106394u;
    // 0x106398: 0x24a53890  addiu       $a1, $a1, 0x3890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106394u, 0x10639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10639Cu;
label_10639c:
    // 0x10639c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x10639cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x1063a0: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x1063a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x1063a4: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1063a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1063a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1063a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1063ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1063acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1063b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1063b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1063b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1063b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1063b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1063b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1063bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1063bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1063c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1063C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1063C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063C0u;
        // 0x1063c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1063C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1063C8u;
}
