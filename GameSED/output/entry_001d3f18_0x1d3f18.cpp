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

// Function: entry_001d3f18
// Address: 0x1d3f18 - 0x1d3f44
void entry_001d3f18_0x1d3f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3f18_0x1d3f18");
#endif

    switch (ctx->pc) {
        case 0x1d3f28u: goto label_1d3f28;
        case 0x1d3f40u: goto label_1d3f40;
        default: break;
    }

    ctx->pc = 0x1d3f18u;

    // 0x1d3f18: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3f1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f20: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3F20u;
    SET_GPR_U32(ctx, 31, 0x1D3F28u);
    ctx->pc = 0x1D3F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F20u;
    // 0x1d3f24: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3F20u, 0x1D3F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F28u;
label_1d3f28:
    // 0x1d3f28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f2c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3f30: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3f34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f38: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3F38u;
    SET_GPR_U32(ctx, 31, 0x1D3F40u);
    ctx->pc = 0x1D3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F38u;
    // 0x1d3f3c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3F38u, 0x1D3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F40u;
label_1d3f40:
    // 0x1d3f40: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3f44u;
}
