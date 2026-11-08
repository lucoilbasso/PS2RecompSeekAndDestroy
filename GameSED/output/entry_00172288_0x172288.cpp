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

// Function: entry_00172288
// Address: 0x172288 - 0x172300
void entry_00172288_0x172288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172288_0x172288");
#endif

    switch (ctx->pc) {
        case 0x17229cu: goto label_17229c;
        case 0x1722d0u: goto label_1722d0;
        default: break;
    }

    ctx->pc = 0x172288u;

    // 0x172288: 0x3c06f3f3  lui         $a2, 0xF3F3
    ctx->pc = 0x172288u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62451 << 16));
    // 0x17228c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172290: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x172294: 0xc05ceae  jal         func_173AB8
    ctx->pc = 0x172294u;
    SET_GPR_U32(ctx, 31, 0x17229Cu);
    ctx->pc = 0x172298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172294u;
    // 0x172298: 0x34c6f3f3  ori         $a2, $a2, 0xF3F3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62451);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173AB8u, 0x172294u, 0x17229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17229Cu;
label_17229c:
    // 0x17229c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x17229cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1722a0: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x1722a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x1722a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1722a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722a8: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x1722a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1722ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1722acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722b0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1722b4: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1722b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1722b8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1722b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1722bc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1722bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1722c0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1722c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1722c4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1722c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1722c8: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1722C8u;
    SET_GPR_U32(ctx, 31, 0x1722D0u);
    ctx->pc = 0x1722CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1722C8u;
    // 0x1722cc: 0x24e70013  addiu       $a3, $a3, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1722C8u, 0x1722D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722D0u;
label_1722d0:
    // 0x1722d0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1722d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1722d4: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1722d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1722d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1722D8u;
    {
        const bool branch_taken_0x1722d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722D8u;
        // 0x1722dc: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722d8) {
            ctx->pc = 0x172300u;
            return;
        }
    }
    ctx->pc = 0x1722E0u;
    // 0x1722e0: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x1722e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1722e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1722e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1722e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1722e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1722ec: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1722ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1722f0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1722f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1722f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1722F4u;
    {
        const bool branch_taken_0x1722f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722F4u;
        // 0x1722f8: 0x24510280  addiu       $s1, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722f4) {
            ctx->pc = 0x172318u;
            return;
        }
    }
    ctx->pc = 0x1722FCu;
    // 0x1722fc: 0x0  nop
    ctx->pc = 0x1722fcu;
    // NOP
    ctx->pc = 0x172300u;
}
