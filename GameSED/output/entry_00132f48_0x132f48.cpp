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

// Function: entry_00132f48
// Address: 0x132f48 - 0x132f84
void entry_00132f48_0x132f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132f48_0x132f48");
#endif

    switch (ctx->pc) {
        case 0x132f50u: goto label_132f50;
        case 0x132f58u: goto label_132f58;
        default: break;
    }

    ctx->pc = 0x132f48u;

    // 0x132f48: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x132F48u;
    SET_GPR_U32(ctx, 31, 0x132F50u);
    ctx->pc = 0x132F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F48u;
    // 0x132f4c: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x132F48u, 0x132F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F50u;
label_132f50:
    // 0x132f50: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x132F50u;
    SET_GPR_U32(ctx, 31, 0x132F58u);
    ctx->pc = 0x132F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F50u;
    // 0x132f54: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x132F50u, 0x132F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F58u;
label_132f58:
    // 0x132f58: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x132f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x132f5c: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x132f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x132f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f64: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x132f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x132f68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f6c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x132f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f70: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x132f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f74: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x132f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f7c: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x132F7Cu;
    SET_GPR_U32(ctx, 31, 0x132F84u);
    ctx->pc = 0x132F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F7Cu;
    // 0x132f80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x132F7Cu, 0x132F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F84u;
}
