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

// Function: caseD_9
// Address: 0x163f20 - 0x163f50
void caseD_9_0x163f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x163f20");
#endif

    switch (ctx->pc) {
        case 0x163f40u: goto label_163f40;
        default: break;
    }

    ctx->pc = 0x163f20u;

    // 0x163f20: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x163f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x163f24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163f28: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1FB830u));
    // 0x163f2c: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x163f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x163f30: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x163f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x163f34: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x163f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x163f38: 0xc066810  jal         func_19A040
    ctx->pc = 0x163F38u;
    SET_GPR_U32(ctx, 31, 0x163F40u);
    ctx->pc = 0x163F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163F38u;
    // 0x163f3c: 0xae240254  sw          $a0, 0x254($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x163F38u, 0x163F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F40u;
label_163f40:
    // 0x163f40: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x163f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x163f44: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x163f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x163f48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x163F48u;
    {
        const bool branch_taken_0x163f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F48u;
        // 0x163f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f48) {
            ctx->pc = 0x163F7Cu;
            return;
        }
    }
    ctx->pc = 0x163F50u;
}
