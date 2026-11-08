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

// Function: entry_0014d778
// Address: 0x14d778 - 0x14d7ec
void entry_0014d778_0x14d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d778_0x14d778");
#endif

    switch (ctx->pc) {
        case 0x14d790u: goto label_14d790;
        case 0x14d7a8u: goto label_14d7a8;
        default: break;
    }

    ctx->pc = 0x14d778u;

label_14d778:
    // 0x14d778: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x14d778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x14d77c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14d77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14d780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14d784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d788: 0xc0538fe  jal         func_14E3F8
    ctx->pc = 0x14D788u;
    SET_GPR_U32(ctx, 31, 0x14D790u);
    ctx->pc = 0x14D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D788u;
    // 0x14d78c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F8u, 0x14D788u, 0x14D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D790u;
label_14d790:
    // 0x14d790: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x14d790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x14d794: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14D794u;
    {
        const bool branch_taken_0x14d794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d794) {
            ctx->pc = 0x14D798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D794u;
            // 0x14d798: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d778;
        }
    }
    ctx->pc = 0x14D79Cu;
    // 0x14d79c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d7a0: 0xc053616  jal         func_14D858
    ctx->pc = 0x14D7A0u;
    SET_GPR_U32(ctx, 31, 0x14D7A8u);
    ctx->pc = 0x14D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7A0u;
    // 0x14d7a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D858u, 0x14D7A0u, 0x14D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7A8u;
label_14d7a8:
    // 0x14d7a8: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x14d7ac: 0x2407bfff  addiu       $a3, $zero, -0x4001
    ctx->pc = 0x14d7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x14d7b0: 0x2645071c  addiu       $a1, $s2, 0x71C
    ctx->pc = 0x14d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1820));
    // 0x14d7b4: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x14d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x14d7b8: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x14d7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14d7bc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x14d7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d7c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14d7c4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x14d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x14d7c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x14d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x14d7cc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D7CCu;
    {
        const bool branch_taken_0x14d7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7CCu;
        // 0x14d7d0: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7cc) {
            ctx->pc = 0x14D7ECu;
            return;
        }
    }
    ctx->pc = 0x14D7D4u;
    // 0x14d7d4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d7d8: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x14d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x14d7dc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14d7dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d7e0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x14d7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14d7e4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14d7e8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x14d7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d7ecu;
}
