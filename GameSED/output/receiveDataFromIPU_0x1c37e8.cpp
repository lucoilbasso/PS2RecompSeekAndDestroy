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

// Function: receiveDataFromIPU
// Address: 0x1c37e8 - 0x1c386c
void receiveDataFromIPU_0x1c37e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("receiveDataFromIPU_0x1c37e8");
#endif

    switch (ctx->pc) {
        case 0x1c3804u: goto label_1c3804;
        default: break;
    }

    ctx->pc = 0x1c37e8u;

    // 0x1c37e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c37e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c37ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c37ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c37f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c37f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c37f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c37f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c37f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c37fc: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C37FCu;
    SET_GPR_U32(ctx, 31, 0x1C3804u);
    ctx->pc = 0x1C3800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37FCu;
    // 0x1c3800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C37FCu, 0x1C3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3804u;
label_1c3804:
    // 0x1c3804: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1c3804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3808: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c380c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3810: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1c3810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1c3814: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1c3814u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1c3818: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x1c3818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x1c381c: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x1c381cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x1c3820: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3824: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x1c3824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x1c3828: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1c3828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1c382c: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x1c382cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x1c3830: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3834: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1c3834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x1c3838: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1c3838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1c383c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1c383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3840: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c3840u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4));
    // 0x1c3844: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3844u;
    {
        const bool branch_taken_0x1c3844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3844u;
        // 0x1c3848: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3844) {
            ctx->pc = 0x1C385Cu;
            goto label_1c385c;
        }
    }
    ctx->pc = 0x1C384Cu;
    // 0x1c384c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c384cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3854: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1C3854u;
    ctx->pc = 0x1C3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3854u;
    // 0x1c3858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C385Cu;
label_1c385c:
    // 0x1c385c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c385cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3864: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3864u;
        // 0x1c3868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C386Cu;
}
