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

// Function: entry_00173528
// Address: 0x173528 - 0x1735d8
void entry_00173528_0x173528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173528_0x173528");
#endif

    switch (ctx->pc) {
        case 0x173570u: goto label_173570;
        case 0x173588u: goto label_173588;
        case 0x173594u: goto label_173594;
        case 0x1735a4u: goto label_1735a4;
        default: break;
    }

    ctx->pc = 0x173528u;

label_173528:
    // 0x173528: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x173528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17352c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173530: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x173530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173534: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x173534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173538: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17353c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x17353cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173540: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x173540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173544: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x173544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173548: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17354c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x17354cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173550: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173554: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x173554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173558: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x173558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x17355c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x17355cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173560: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x173560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x173564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173568: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173568u;
    SET_GPR_U32(ctx, 31, 0x173570u);
    ctx->pc = 0x17356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173568u;
    // 0x17356c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x173568u, 0x173570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173570u;
label_173570:
    // 0x173570: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x173570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173574: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x173574u;
    {
        const bool branch_taken_0x173574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173574) {
            ctx->pc = 0x173578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173574u;
            // 0x173578: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173528;
        }
    }
    ctx->pc = 0x17357Cu;
    // 0x17357c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173580: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173580u;
    SET_GPR_U32(ctx, 31, 0x173588u);
    ctx->pc = 0x173584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173580u;
    // 0x173584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173580u, 0x173588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173588u;
label_173588:
    // 0x173588: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x173588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x17358c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17358Cu;
    SET_GPR_U32(ctx, 31, 0x173594u);
    ctx->pc = 0x173590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17358Cu;
    // 0x173590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17358Cu, 0x173594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173594u;
label_173594:
    // 0x173594: 0x3c05cfcf  lui         $a1, 0xCFCF
    ctx->pc = 0x173594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53199 << 16));
    // 0x173598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17359c: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x17359Cu;
    SET_GPR_U32(ctx, 31, 0x1735A4u);
    ctx->pc = 0x1735A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17359Cu;
    // 0x1735a0: 0x34a5cfcf  ori         $a1, $a1, 0xCFCF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53199);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x17359Cu, 0x1735A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735A4u;
label_1735a4:
    // 0x1735a4: 0x16c00028  bnez        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x1735A4u;
    {
        const bool branch_taken_0x1735a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1735A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735A4u;
        // 0x1735a8: 0x2351018  mult        $v0, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735a4) {
            ctx->pc = 0x173648u;
            return;
        }
    }
    ctx->pc = 0x1735ACu;
    // 0x1735ac: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1735ACu;
    {
        const bool branch_taken_0x1735ac = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1735B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735ACu;
        // 0x1735b0: 0x2353018  mult        $a2, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735ac) {
            ctx->pc = 0x1735D8u;
            return;
        }
    }
    ctx->pc = 0x1735B4u;
    // 0x1735b4: 0x2351018  mult        $v0, $s1, $s5
    ctx->pc = 0x1735b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1735b8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1735b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1735bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1735c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1735c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1735c4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1735c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1735c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1735c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1735cc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1735ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1735d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1735d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1735d4: 0x2353018  mult        $a2, $s1, $s5
    ctx->pc = 0x1735d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    ctx->pc = 0x1735d8u;
}
