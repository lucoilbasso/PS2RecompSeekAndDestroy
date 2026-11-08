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

// Function: entry_001a6748
// Address: 0x1a6748 - 0x1a679c
void entry_001a6748_0x1a6748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6748_0x1a6748");
#endif

    switch (ctx->pc) {
        case 0x1a6764u: goto label_1a6764;
        case 0x1a6798u: goto label_1a6798;
        default: break;
    }

    ctx->pc = 0x1a6748u;

    // 0x1a6748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a674c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6750: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6758: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a675c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A675Cu;
    SET_GPR_U32(ctx, 31, 0x1A6764u);
    ctx->pc = 0x1A6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A675Cu;
    // 0x1a6760: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A675Cu, 0x1A6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6764u;
label_1a6764:
    // 0x1a6764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6768: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a676c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6770: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6774: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6778: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a677c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a677cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6780: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6784: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a6788: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6788u;
    {
        const bool branch_taken_0x1a6788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6788u;
        // 0x1a678c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6788) {
            ctx->pc = 0x1A679Cu;
            return;
        }
    }
    ctx->pc = 0x1A6790u;
    // 0x1a6790: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6790u;
    SET_GPR_U32(ctx, 31, 0x1A6798u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6790u, 0x1A6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6798u;
label_1a6798:
    // 0x1a6798: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a679cu;
}
