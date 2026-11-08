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

// Function: entry_0014d8f0
// Address: 0x14d8f0 - 0x14d938
void entry_0014d8f0_0x14d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d8f0_0x14d8f0");
#endif

    switch (ctx->pc) {
        case 0x14d90cu: goto label_14d90c;
        default: break;
    }

    ctx->pc = 0x14d8f0u;

label_14d8f0:
    // 0x14d8f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14d8f4:
    // 0x14d8f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_14d8f8:
    // 0x14d8f8: 0x8c5006a8  lw          $s0, 0x6A8($v0)
    ctx->pc = 0x14d8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
label_14d8fc:
    // 0x14d8fc: 0x5203009a  beql        $s0, $v1, . + 4 + (0x9A << 2)
label_14d900:
    if (ctx->pc == 0x14D900u) {
        ctx->pc = 0x14D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8FCu;
        // 0x14d900: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D904u;
        goto label_14d904;
    }
    ctx->pc = 0x14D8FCu;
    {
        const bool branch_taken_0x14d8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d8fc) {
            ctx->pc = 0x14D900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D8FCu;
            // 0x14d900: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB68u;
            return;
        }
    }
    ctx->pc = 0x14D904u;
label_14d904:
    // 0x14d904: 0xc0463f4  jal         func_118FD0
label_14d908:
    if (ctx->pc == 0x14D908u) {
        ctx->pc = 0x14D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D904u;
        // 0x14d908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D90Cu;
        goto label_14d90c;
    }
    ctx->pc = 0x14D904u;
    SET_GPR_U32(ctx, 31, 0x14D90Cu);
    ctx->pc = 0x14D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D904u;
    // 0x14d908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D904u, 0x14D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D90Cu;
label_14d90c:
    // 0x14d90c: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x14d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_14d910:
    // 0x14d910: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x14d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_14d914:
    // 0x14d914: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x14d914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_14d918:
    // 0x14d918: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
label_14d91c:
    if (ctx->pc == 0x14D91Cu) {
        ctx->pc = 0x14D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D918u;
        // 0x14d91c: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D920u;
        goto label_14d920;
    }
    ctx->pc = 0x14D918u;
    {
        const bool branch_taken_0x14d918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D918u;
        // 0x14d91c: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d918) {
            ctx->pc = 0x14DB64u;
            return;
        }
    }
    ctx->pc = 0x14D920u;
label_14d920:
    // 0x14d920: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14d920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14d924:
    // 0x14d924: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x14d924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_14d928:
    // 0x14d928: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14d928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14d92c:
    // 0x14d92c: 0x8c636c60  lw          $v1, 0x6C60($v1)
    ctx->pc = 0x14d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27744)));
label_14d930:
    // 0x14d930: 0x600008  jr          $v1
label_14d934:
    if (ctx->pc == 0x14D934u) {
        ctx->pc = 0x14D938u;
        goto label_fallthrough_0x14d930;
    }
    ctx->pc = 0x14D930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D930u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x14d930:
    ctx->pc = 0x14D938u;
}
