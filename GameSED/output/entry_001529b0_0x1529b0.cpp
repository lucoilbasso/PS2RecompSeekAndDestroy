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

// Function: entry_001529b0
// Address: 0x1529b0 - 0x152a00
void entry_001529b0_0x1529b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001529b0_0x1529b0");
#endif

    switch (ctx->pc) {
        case 0x1529b8u: goto label_1529b8;
        default: break;
    }

    ctx->pc = 0x1529b0u;

    // 0x1529b0: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x1529B0u;
    SET_GPR_U32(ctx, 31, 0x1529B8u);
    ctx->pc = 0x1529B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529B0u;
    // 0x1529b4: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x1529B0u, 0x1529B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529B8u;
label_1529b8:
    // 0x1529b8: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x1529B8u;
    {
        const bool branch_taken_0x1529b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1529BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529B8u;
        // 0x1529bc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529b8) {
            ctx->pc = 0x152D38u;
            return;
        }
    }
    ctx->pc = 0x1529C0u;
    // 0x1529c0: 0x2643075c  addiu       $v1, $s2, 0x75C
    ctx->pc = 0x1529c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1884));
    // 0x1529c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1529c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1529c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1529C8u;
    {
        const bool branch_taken_0x1529c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1529c8) {
            ctx->pc = 0x152A5Cu;
            return;
        }
    }
    ctx->pc = 0x1529D0u;
    // 0x1529d0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1529d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529d4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1529d8: 0x8c621200  lw          $v0, 0x1200($v1)
    ctx->pc = 0x1529d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4608)));
    // 0x1529dc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1529DCu;
    {
        const bool branch_taken_0x1529dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529DCu;
        // 0x1529e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529dc) {
            ctx->pc = 0x152A54u;
            return;
        }
    }
    ctx->pc = 0x1529E4u;
    // 0x1529e4: 0x24631200  addiu       $v1, $v1, 0x1200
    ctx->pc = 0x1529e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
    // 0x1529e8: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1529e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1529ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1529ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1529f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1529F0u;
    {
        const bool branch_taken_0x1529f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1529F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529F0u;
        // 0x1529f4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529f0) {
            ctx->pc = 0x152A00u;
            return;
        }
    }
    ctx->pc = 0x1529F8u;
    // 0x1529f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1529fc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1529fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x152a00u;
}
