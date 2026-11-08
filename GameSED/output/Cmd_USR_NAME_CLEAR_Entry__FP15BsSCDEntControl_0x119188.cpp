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

// Function: Cmd_USR_NAME_CLEAR_Entry__FP15BsSCDEntControl
// Address: 0x119188 - 0x1191e0
void Cmd_USR_NAME_CLEAR_Entry__FP15BsSCDEntControl_0x119188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USR_NAME_CLEAR_Entry__FP15BsSCDEntControl_0x119188");
#endif

    switch (ctx->pc) {
        case 0x119198u: goto label_119198;
        case 0x1191b8u: goto label_1191b8;
        default: break;
    }

    ctx->pc = 0x119188u;

    // 0x119188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11918c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119190: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119190u;
    SET_GPR_U32(ctx, 31, 0x119198u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119190u, 0x119198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119198u;
label_119198:
    // 0x119198: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x119198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11919c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11919cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1191a0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1191a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1191a4: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1191a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1191a8: 0x2421c540  addiu       $at, $at, -0x3AC0
    ctx->pc = 0x1191a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294952256));
    // 0x1191ac: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1191acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1191b0: 0xac400c0c  sw          $zero, 0xC0C($v0)
    ctx->pc = 0x1191b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3084), GPR_U32(ctx, 0));
    // 0x1191b4: 0x24420c28  addiu       $v0, $v0, 0xC28
    ctx->pc = 0x1191b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3112));
label_1191b8:
    // 0x1191b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1191b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1191bc: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1191bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1191c0: 0x0  nop
    ctx->pc = 0x1191c0u;
    // NOP
    // 0x1191c4: 0x0  nop
    ctx->pc = 0x1191c4u;
    // NOP
    // 0x1191c8: 0x0  nop
    ctx->pc = 0x1191c8u;
    // NOP
    // 0x1191cc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1191CCu;
    {
        const bool branch_taken_0x1191cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1191D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191CCu;
        // 0x1191d0: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191cc) {
            ctx->pc = 0x1191B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1191b8;
        }
    }
    ctx->pc = 0x1191D4u;
    // 0x1191d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1191d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1191d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1191D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1191DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191D8u;
        // 0x1191dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1191D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1191E0u;
}
