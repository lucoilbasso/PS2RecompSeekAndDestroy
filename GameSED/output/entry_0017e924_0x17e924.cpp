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

// Function: entry_0017e924
// Address: 0x17e924 - 0x17e94c
void entry_0017e924_0x17e924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e924_0x17e924");
#endif

    switch (ctx->pc) {
        case 0x17e934u: goto label_17e934;
        case 0x17e948u: goto label_17e948;
        default: break;
    }

    ctx->pc = 0x17e924u;

    // 0x17e924: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17e924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17e928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e92c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x17E92Cu;
    SET_GPR_U32(ctx, 31, 0x17E934u);
    ctx->pc = 0x17E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E92Cu;
    // 0x17e930: 0x24847c98  addiu       $a0, $a0, 0x7C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x17E92Cu, 0x17E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E934u;
label_17e934:
    // 0x17e934: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17e934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17e938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17e938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e93c: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0
    ctx->pc = 0x17e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    // 0x17e940: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17E940u;
    SET_GPR_U32(ctx, 31, 0x17E948u);
    ctx->pc = 0x17E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E940u;
    // 0x17e944: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17E940u, 0x17E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E948u;
label_17e948:
    // 0x17e948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17e94cu;
}
