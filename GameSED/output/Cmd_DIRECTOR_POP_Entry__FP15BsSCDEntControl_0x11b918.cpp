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

// Function: Cmd_DIRECTOR_POP_Entry__FP15BsSCDEntControl
// Address: 0x11b918 - 0x11b990
void Cmd_DIRECTOR_POP_Entry__FP15BsSCDEntControl_0x11b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIRECTOR_POP_Entry__FP15BsSCDEntControl_0x11b918");
#endif

    switch (ctx->pc) {
        case 0x11b958u: goto label_11b958;
        case 0x11b97cu: goto label_11b97c;
        default: break;
    }

    ctx->pc = 0x11b918u;

    // 0x11b918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b920: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11b924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b92c: 0x26113410  addiu       $s1, $s0, 0x3410
    ctx->pc = 0x11b92cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13328));
    // 0x11b930: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b934: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B934u;
    {
        const bool branch_taken_0x11b934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b934) {
            ctx->pc = 0x11B938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B934u;
            // 0x11b938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B980u;
            goto label_11b980;
        }
    }
    ctx->pc = 0x11B93Cu;
    // 0x11b93c: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B93Cu;
    {
        const bool branch_taken_0x11b93c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x11B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B93Cu;
        // 0x11b940: 0x260433f0  addiu       $a0, $s0, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b93c) {
            ctx->pc = 0x11B960u;
            goto label_11b960;
        }
    }
    ctx->pc = 0x11B944u;
    // 0x11b944: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11b944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11b948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b94c: 0x24a54798  addiu       $a1, $a1, 0x4798
    ctx->pc = 0x11b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18328));
    // 0x11b950: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11B950u;
    SET_GPR_U32(ctx, 31, 0x11B958u);
    ctx->pc = 0x11B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B950u;
    // 0x11b954: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11B950u, 0x11B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B958u;
label_11b958:
    // 0x11b958: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b95c: 0x260433f0  addiu       $a0, $s0, 0x33F0
    ctx->pc = 0x11b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13296));
label_11b960:
    // 0x11b960: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11b960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11b964: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b968: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x11b968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11b96c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11b970: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x11b974: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x11B974u;
    SET_GPR_U32(ctx, 31, 0x11B97Cu);
    ctx->pc = 0x11B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B974u;
    // 0x11b978: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x11B974u, 0x11B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B97Cu;
label_11b97c:
    // 0x11b97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b980:
    // 0x11b980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b988: 0x3e00008  jr          $ra
    ctx->pc = 0x11B988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B988u;
        // 0x11b98c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B990u;
}
