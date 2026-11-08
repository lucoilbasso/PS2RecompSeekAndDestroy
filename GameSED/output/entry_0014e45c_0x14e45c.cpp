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

// Function: entry_0014e45c
// Address: 0x14e45c - 0x14e4a0
void entry_0014e45c_0x14e45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e45c_0x14e45c");
#endif

    ctx->pc = 0x14e45cu;

label_14e45c:
    // 0x14e45c: 0x2667ffff  addiu       $a3, $s3, -0x1
    ctx->pc = 0x14e45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_14e460:
    // 0x14e460: 0x8e250170  lw          $a1, 0x170($s1)
    ctx->pc = 0x14e460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_14e464:
    // 0x14e464: 0x2ce6000b  sltiu       $a2, $a3, 0xB
    ctx->pc = 0x14e464u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_14e468:
    // 0x14e468: 0x8c430c00  lw          $v1, 0xC00($v0)
    ctx->pc = 0x14e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3072)));
label_14e46c:
    // 0x14e46c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14e46cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e470:
    // 0x14e470: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_14e474:
    // 0x14e474: 0x30700f00  andi        $s0, $v1, 0xF00
    ctx->pc = 0x14e474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_14e478:
    // 0x14e478: 0x2a020600  slti        $v0, $s0, 0x600
    ctx->pc = 0x14e478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1536) ? 1 : 0);
label_14e47c:
    // 0x14e47c: 0x8c950098  lw          $s5, 0x98($a0)
    ctx->pc = 0x14e47cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_14e480:
    // 0x14e480: 0x10c0015a  beqz        $a2, . + 4 + (0x15A << 2)
label_14e484:
    if (ctx->pc == 0x14E484u) {
        ctx->pc = 0x14E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E480u;
        // 0x14e484: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E488u;
        goto label_14e488;
    }
    ctx->pc = 0x14E480u;
    {
        const bool branch_taken_0x14e480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E480u;
        // 0x14e484: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e480) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E488u;
label_14e488:
    // 0x14e488: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x14e488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_14e48c:
    // 0x14e48c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x14e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_14e490:
    // 0x14e490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e494:
    // 0x14e494: 0x8c636c90  lw          $v1, 0x6C90($v1)
    ctx->pc = 0x14e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27792)));
label_14e498:
    // 0x14e498: 0x600008  jr          $v1
label_14e49c:
    if (ctx->pc == 0x14E49Cu) {
        ctx->pc = 0x14E4A0u;
        goto label_fallthrough_0x14e498;
    }
    ctx->pc = 0x14E498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E498u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x14e498:
    ctx->pc = 0x14E4A0u;
}
