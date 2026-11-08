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

// Function: entry_0013d750
// Address: 0x13d750 - 0x13d770
void entry_0013d750_0x13d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d750_0x13d750");
#endif

    switch (ctx->pc) {
        case 0x13d764u: goto label_13d764;
        default: break;
    }

    ctx->pc = 0x13d750u;

    // 0x13d750: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x13d750u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x13d754: 0x26101600  addiu       $s0, $s0, 0x1600
    ctx->pc = 0x13d754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5632));
    // 0x13d758: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13d758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13d75c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13D75Cu;
    SET_GPR_U32(ctx, 31, 0x13D764u);
    ctx->pc = 0x13D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D75Cu;
    // 0x13d760: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13D75Cu, 0x13D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D764u;
label_13d764:
    // 0x13d764: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13d764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13d768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13d768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d76c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13d76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x13d770u;
}
