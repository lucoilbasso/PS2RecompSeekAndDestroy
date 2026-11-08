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

// Function: entry_00115c20
// Address: 0x115c20 - 0x115c60
void entry_00115c20_0x115c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115c20_0x115c20");
#endif

    switch (ctx->pc) {
        case 0x115c40u: goto label_115c40;
        default: break;
    }

    ctx->pc = 0x115c20u;

    // 0x115c20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x115c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x115c24: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x115c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x115c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115c34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x115c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115c38: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115C38u;
    SET_GPR_U32(ctx, 31, 0x115C40u);
    ctx->pc = 0x115C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C38u;
    // 0x115c3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115C38u, 0x115C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C40u;
label_115c40:
    // 0x115c40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x115c40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c44: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115c48: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x115c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115c4c: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x115c50: 0x2694d190  addiu       $s4, $s4, -0x2E70
    ctx->pc = 0x115c50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955408));
    // 0x115c54: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x115c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x115c58: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x115c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x115c5c: 0x0  nop
    ctx->pc = 0x115c5cu;
    // NOP
    ctx->pc = 0x115c60u;
}
