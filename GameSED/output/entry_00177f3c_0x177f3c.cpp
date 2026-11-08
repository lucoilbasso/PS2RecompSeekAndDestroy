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

// Function: entry_00177f3c
// Address: 0x177f3c - 0x177f80
void entry_00177f3c_0x177f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177f3c_0x177f3c");
#endif

    switch (ctx->pc) {
        case 0x177f6cu: goto label_177f6c;
        default: break;
    }

    ctx->pc = 0x177f3cu;

    // 0x177f3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177f40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177f44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x177f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x177f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177f4c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x177f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x177f50: 0x2610e820  addiu       $s0, $s0, -0x17E0
    ctx->pc = 0x177f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961184));
    // 0x177f54: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x177f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x177f58: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177F58u;
    {
        const bool branch_taken_0x177f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F58u;
        // 0x177f5c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f58) {
            ctx->pc = 0x177F80u;
            return;
        }
    }
    ctx->pc = 0x177F60u;
    // 0x177f60: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x177f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x177f64: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x177F64u;
    SET_GPR_U32(ctx, 31, 0x177F6Cu);
    ctx->pc = 0x177F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F64u;
    // 0x177f68: 0x24847938  addiu       $a0, $a0, 0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x177F64u, 0x177F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F6Cu;
label_177f6c:
    // 0x177f6c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x177f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x177f70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f74: 0x24a57948  addiu       $a1, $a1, 0x7948
    ctx->pc = 0x177f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
    // 0x177f78: 0xc068186  jal         func_1A0618
    ctx->pc = 0x177F78u;
    SET_GPR_U32(ctx, 31, 0x177F80u);
    ctx->pc = 0x177F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F78u;
    // 0x177f7c: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x177F78u, 0x177F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F80u;
}
