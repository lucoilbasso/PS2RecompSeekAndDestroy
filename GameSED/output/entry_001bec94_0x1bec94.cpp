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

// Function: entry_001bec94
// Address: 0x1bec94 - 0x1becb8
void entry_001bec94_0x1bec94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bec94_0x1bec94");
#endif

    switch (ctx->pc) {
        case 0x1bec9cu: goto label_1bec9c;
        default: break;
    }

    ctx->pc = 0x1bec94u;

    // 0x1bec94: 0xc06fb80  jal         func_1BEE00
    ctx->pc = 0x1BEC94u;
    SET_GPR_U32(ctx, 31, 0x1BEC9Cu);
    ctx->pc = 0x1BEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC94u;
    // 0x1bec98: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE00u, 0x1BEC94u, 0x1BEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC9Cu;
label_1bec9c:
    // 0x1bec9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1bec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1beca0: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x1beca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x1beca4: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x1beca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
    // 0x1beca8: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x1beca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x1becac: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x1becacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
    // 0x1becb0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1becb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x1becb4: 0x0  nop
    ctx->pc = 0x1becb4u;
    // NOP
    ctx->pc = 0x1becb8u;
}
