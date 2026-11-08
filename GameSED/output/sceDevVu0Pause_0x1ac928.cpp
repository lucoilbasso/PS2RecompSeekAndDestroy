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

// Function: sceDevVu0Pause
// Address: 0x1ac928 - 0x1ac988
void sceDevVu0Pause_0x1ac928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0Pause_0x1ac928");
#endif

    switch (ctx->pc) {
        case 0x1ac93cu: goto label_1ac93c;
        default: break;
    }

    ctx->pc = 0x1ac928u;

    // 0x1ac928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ac934: 0xc06b296  jal         func_1ACA58
    ctx->pc = 0x1AC934u;
    SET_GPR_U32(ctx, 31, 0x1AC93Cu);
    ctx->pc = 0x1AC938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC934u;
    // 0x1ac938: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACA58u, 0x1AC934u, 0x1AC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC93Cu;
label_1ac93c:
    // 0x1ac93c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ac93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac940: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1ac940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ac944: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AC944u;
    {
        const bool branch_taken_0x1ac944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC944u;
        // 0x1ac948: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac944) {
            ctx->pc = 0x1AC974u;
            goto label_1ac974;
        }
    }
    ctx->pc = 0x1AC94Cu;
    // 0x1ac94c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ac94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ac950: 0x24429a20  addiu       $v0, $v0, -0x65E0
    ctx->pc = 0x1ac950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941216));
    // 0x1ac954: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ac954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ac958: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ac958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac95c: 0x800008  jr          $a0
    ctx->pc = 0x1AC95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AC964u: goto label_1ac964;
            case 0x1AC970u: goto label_1ac970;
            case 0x1AC974u: goto label_1ac974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC95Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AC964u;
label_1ac964:
    // 0x1ac964: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x1ac964u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x1ac968: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ac968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ac96c: 0x48c2e000  ctc2.ni     $v0, $vi28
    ctx->pc = 0x1ac96cu;
    ctx->vu0_fbrst = GPR_U32(ctx, 2) & 0x00000C0Cu;
label_1ac970:
    // 0x1ac970: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ac970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac974:
    // 0x1ac974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ac974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac980: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC980u;
        // 0x1ac984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC988u;
}
