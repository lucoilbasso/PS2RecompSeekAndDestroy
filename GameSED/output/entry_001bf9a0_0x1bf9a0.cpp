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

// Function: entry_001bf9a0
// Address: 0x1bf9a0 - 0x1bfa0c
void entry_001bf9a0_0x1bf9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf9a0_0x1bf9a0");
#endif

    switch (ctx->pc) {
        case 0x1bf9d8u: goto label_1bf9d8;
        case 0x1bf9ecu: goto label_1bf9ec;
        default: break;
    }

    ctx->pc = 0x1bf9a0u;

label_1bf9a0:
    // 0x1bf9a0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1bf9a4:
    // 0x1bf9a4: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1bf9a8:
    // 0x1bf9a8: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1bf9ac:
    // 0x1bf9ac: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x1bf9acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_1bf9b0:
    // 0x1bf9b0: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x1bf9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_1bf9b4:
    // 0x1bf9b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1bf9b8:
    // 0x1bf9b8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1bf9bc:
    // 0x1bf9bc: 0x26320590  addiu       $s2, $s1, 0x590
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
label_1bf9c0:
    // 0x1bf9c0: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_1bf9c4:
    // 0x1bf9c4: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x1bf9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1bf9c8:
    // 0x1bf9c8: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x1bf9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_1bf9cc:
    // 0x1bf9cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf9d0:
    // 0x1bf9d0: 0x60f809  jalr        $v1
label_1bf9d4:
    if (ctx->pc == 0x1BF9D4u) {
        ctx->pc = 0x1BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9D0u;
        // 0x1bf9d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9D8u;
        goto label_1bf9d8;
    }
    ctx->pc = 0x1BF9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BF9D8u);
        ctx->pc = 0x1BF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9D0u;
        // 0x1bf9d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9D0u, 0x1BF9D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF9D8u;
label_1bf9d8:
    // 0x1bf9d8: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_1bf9dc:
    // 0x1bf9dc: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_1bf9e0:
    // 0x1bf9e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf9e4:
    // 0x1bf9e4: 0x40f809  jalr        $v0
label_1bf9e8:
    if (ctx->pc == 0x1BF9E8u) {
        ctx->pc = 0x1BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E4u;
        // 0x1bf9e8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9ECu;
        goto label_1bf9ec;
    }
    ctx->pc = 0x1BF9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF9ECu);
        ctx->pc = 0x1BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E4u;
        // 0x1bf9e8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9E4u, 0x1BF9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF9ECu;
label_1bf9ec:
    // 0x1bf9ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1bf9f0:
    // 0x1bf9f0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x1bf9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1bf9f4:
    // 0x1bf9f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bf9f8:
    // 0x1bf9f8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1bf9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bf9fc:
    // 0x1bf9fc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1bfa00:
    if (ctx->pc == 0x1BFA00u) {
        ctx->pc = 0x1BFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9FCu;
        // 0x1bfa00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA04u;
        goto label_1bfa04;
    }
    ctx->pc = 0x1BF9FCu;
    {
        const bool branch_taken_0x1bf9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9FCu;
        // 0x1bfa00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9fc) {
            ctx->pc = 0x1BF9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf9a0;
        }
    }
    ctx->pc = 0x1BFA04u;
label_1bfa04:
    // 0x1bfa04: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bfa08:
    if (ctx->pc == 0x1BFA08u) {
        ctx->pc = 0x1BFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA04u;
        // 0x1bfa08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA0Cu;
        goto label_fallthrough_0x1bfa04;
    }
    ctx->pc = 0x1BFA04u;
    {
        const bool branch_taken_0x1bfa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA04u;
        // 0x1bfa08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa04) {
            ctx->pc = 0x1BFA2Cu;
            return;
        }
    }
label_fallthrough_0x1bfa04:
    ctx->pc = 0x1BFA0Cu;
}
