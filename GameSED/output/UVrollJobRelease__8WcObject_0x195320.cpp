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

// Function: UVrollJobRelease__8WcObject
// Address: 0x195320 - 0x195374
void UVrollJobRelease__8WcObject_0x195320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UVrollJobRelease__8WcObject_0x195320");
#endif

    switch (ctx->pc) {
        case 0x195350u: goto label_195350;
        default: break;
    }

    ctx->pc = 0x195320u;

    // 0x195320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195324: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x195324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x195328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19532c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19532cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195330: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x195330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x195334: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x195338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19533c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19533Cu;
    {
        const bool branch_taken_0x19533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19533Cu;
        // 0x195340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19533c) {
            ctx->pc = 0x195364u;
            goto label_195364;
        }
    }
    ctx->pc = 0x195344u;
    // 0x195344: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x195344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x195348: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x195348u;
    SET_GPR_U32(ctx, 31, 0x195350u);
    ctx->pc = 0x19534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195348u;
    // 0x19534c: 0x2484de38  addiu       $a0, $a0, -0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x195348u, 0x195350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195350u;
label_195350:
    // 0x195350: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x195350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x195354: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x195354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195358: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x195358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19535c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x195360: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x195360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_195364:
    // 0x195364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195368: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x195368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19536c: 0x3e00008  jr          $ra
    ctx->pc = 0x19536Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19536Cu;
        // 0x195370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19536Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195374u;
}
