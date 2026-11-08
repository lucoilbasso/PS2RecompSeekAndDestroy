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

// Function: entry_0013b31c
// Address: 0x13b31c - 0x13b37c
void entry_0013b31c_0x13b31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b31c_0x13b31c");
#endif

    switch (ctx->pc) {
        case 0x13b35cu: goto label_13b35c;
        case 0x13b36cu: goto label_13b36c;
        default: break;
    }

    ctx->pc = 0x13b31cu;

    // 0x13b31c: 0x26060178  addiu       $a2, $s0, 0x178
    ctx->pc = 0x13b31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x13b320: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13b324: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b328: 0x704312a8  pceqb       $v0, $v0, $v1
    ctx->pc = 0x13b328u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13b32c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x13b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x13b330: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x13b330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x13b334: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b338: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x13b338u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x13b33c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b340: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13b340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b344: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x13B344u;
    {
        const bool branch_taken_0x13b344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B344u;
        // 0x13b348: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b344) {
            ctx->pc = 0x13B37Cu;
            return;
        }
    }
    ctx->pc = 0x13B34Cu;
    // 0x13b34c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x13b34cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b350: 0x24060666  addiu       $a2, $zero, 0x666
    ctx->pc = 0x13b350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1638));
    // 0x13b354: 0xc067c76  jal         func_19F1D8
    ctx->pc = 0x13B354u;
    SET_GPR_U32(ctx, 31, 0x13B35Cu);
    ctx->pc = 0x13B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B354u;
    // 0x13b358: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1D8u, 0x13B354u, 0x13B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B35Cu;
label_13b35c:
    // 0x13b35c: 0x26040179  addiu       $a0, $s0, 0x179
    ctx->pc = 0x13b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 377));
    // 0x13b360: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x13b360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13b364: 0xc067c76  jal         func_19F1D8
    ctx->pc = 0x13B364u;
    SET_GPR_U32(ctx, 31, 0x13B36Cu);
    ctx->pc = 0x13B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B364u;
    // 0x13b368: 0x24060666  addiu       $a2, $zero, 0x666 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1638));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1D8u, 0x13B364u, 0x13B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B36Cu;
label_13b36c:
    // 0x13b36c: 0x2604017a  addiu       $a0, $s0, 0x17A
    ctx->pc = 0x13b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 378));
    // 0x13b370: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x13b370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13b374: 0xc067c76  jal         func_19F1D8
    ctx->pc = 0x13B374u;
    SET_GPR_U32(ctx, 31, 0x13B37Cu);
    ctx->pc = 0x13B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B374u;
    // 0x13b378: 0x24060666  addiu       $a2, $zero, 0x666 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1638));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1D8u, 0x13B374u, 0x13B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B37Cu;
}
