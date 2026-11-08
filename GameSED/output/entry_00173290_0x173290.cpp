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

// Function: entry_00173290
// Address: 0x173290 - 0x1732ec
void entry_00173290_0x173290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173290_0x173290");
#endif

    switch (ctx->pc) {
        case 0x17329cu: goto label_17329c;
        case 0x1732a8u: goto label_1732a8;
        case 0x1732b8u: goto label_1732b8;
        default: break;
    }

    ctx->pc = 0x173290u;

    // 0x173290: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173294: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173294u;
    SET_GPR_U32(ctx, 31, 0x17329Cu);
    ctx->pc = 0x173298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173294u;
    // 0x173298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173294u, 0x17329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17329Cu;
label_17329c:
    // 0x17329c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x17329cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1732a0: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1732A0u;
    SET_GPR_U32(ctx, 31, 0x1732A8u);
    ctx->pc = 0x1732A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732A0u;
    // 0x1732a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1732A0u, 0x1732A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732A8u;
label_1732a8:
    // 0x1732a8: 0x3c05f3f3  lui         $a1, 0xF3F3
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62451 << 16));
    // 0x1732ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1732acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732b0: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x1732B0u;
    SET_GPR_U32(ctx, 31, 0x1732B8u);
    ctx->pc = 0x1732B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732B0u;
    // 0x1732b4: 0x34a5f3f3  ori         $a1, $a1, 0xF3F3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62451);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x1732B0u, 0x1732B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732B8u;
label_1732b8:
    // 0x1732b8: 0x16c00027  bnez        $s6, . + 4 + (0x27 << 2)
    ctx->pc = 0x1732B8u;
    {
        const bool branch_taken_0x1732b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1732BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732B8u;
        // 0x1732bc: 0x2351018  mult        $v0, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732b8) {
            ctx->pc = 0x173358u;
            return;
        }
    }
    ctx->pc = 0x1732C0u;
    // 0x1732c0: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1732C0u;
    {
        const bool branch_taken_0x1732c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1732C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732C0u;
        // 0x1732c4: 0x2353018  mult        $a2, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732c0) {
            ctx->pc = 0x1732ECu;
            return;
        }
    }
    ctx->pc = 0x1732C8u;
    // 0x1732c8: 0x2351018  mult        $v0, $s1, $s5
    ctx->pc = 0x1732c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1732cc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1732ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1732d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1732d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1732d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1732d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1732d8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1732dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1732dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1732e0: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x1732e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1732e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1732e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1732e8: 0x2353018  mult        $a2, $s1, $s5
    ctx->pc = 0x1732e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    ctx->pc = 0x1732ecu;
}
