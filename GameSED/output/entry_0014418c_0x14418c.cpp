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

// Function: entry_0014418c
// Address: 0x14418c - 0x1441e4
void entry_0014418c_0x14418c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014418c_0x14418c");
#endif

    switch (ctx->pc) {
        case 0x1441bcu: goto label_1441bc;
        case 0x1441e0u: goto label_1441e0;
        default: break;
    }

    ctx->pc = 0x14418cu;

    // 0x14418c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x14418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x144190: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x144190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x144194: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x144194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x144198: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x144198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x14419c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1441a0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1441a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1441a4: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x1441a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1441a8: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1441A8u;
    {
        const bool branch_taken_0x1441a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1441ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441A8u;
        // 0x1441ac: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441a8) {
            ctx->pc = 0x144240u;
            return;
        }
    }
    ctx->pc = 0x1441B0u;
    // 0x1441b0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1441b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1441b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1441B4u;
    SET_GPR_U32(ctx, 31, 0x1441BCu);
    ctx->pc = 0x1441B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441B4u;
    // 0x1441b8: 0x8c52037c  lw          $s2, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1441B4u, 0x1441BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441BCu;
label_1441bc:
    // 0x1441bc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1441bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1441c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1441c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1441c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1441c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1441c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1441ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1441d0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1441D0u;
    {
        const bool branch_taken_0x1441d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1441D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441D0u;
        // 0x1441d4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441d0) {
            ctx->pc = 0x1441E4u;
            return;
        }
    }
    ctx->pc = 0x1441D8u;
    // 0x1441d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1441D8u;
    SET_GPR_U32(ctx, 31, 0x1441E0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1441D8u, 0x1441E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441E0u;
label_1441e0:
    // 0x1441e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1441e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1441e4u;
}
