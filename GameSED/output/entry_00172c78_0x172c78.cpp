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

// Function: entry_00172c78
// Address: 0x172c78 - 0x172cf8
void entry_00172c78_0x172c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172c78_0x172c78");
#endif

    switch (ctx->pc) {
        case 0x172c8cu: goto label_172c8c;
        case 0x172cc4u: goto label_172cc4;
        default: break;
    }

    ctx->pc = 0x172c78u;

    // 0x172c78: 0x3c06cfcf  lui         $a2, 0xCFCF
    ctx->pc = 0x172c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53199 << 16));
    // 0x172c7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c80: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x172c84: 0xc05ceae  jal         func_173AB8
    ctx->pc = 0x172C84u;
    SET_GPR_U32(ctx, 31, 0x172C8Cu);
    ctx->pc = 0x172C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C84u;
    // 0x172c88: 0x34c6cfcf  ori         $a2, $a2, 0xCFCF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53199);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173AB8u, 0x172C84u, 0x172C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C8Cu;
label_172c8c:
    // 0x172c8c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x172c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172c90: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c98: 0x3c41021  addu        $v0, $fp, $a0
    ctx->pc = 0x172c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172c9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ca0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172ca4: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172ca8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172cac: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172cb0: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172cb4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172cb8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x172cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x172cbc: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172CBCu;
    SET_GPR_U32(ctx, 31, 0x172CC4u);
    ctx->pc = 0x172CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CBCu;
    // 0x172cc0: 0x24e70013  addiu       $a3, $a3, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172CBCu, 0x172CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CC4u;
label_172cc4:
    // 0x172cc4: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x172cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172cc8: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x172cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172ccc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x172CCCu;
    {
        const bool branch_taken_0x172ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CCCu;
        // 0x172cd0: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ccc) {
            ctx->pc = 0x172CF8u;
            return;
        }
    }
    ctx->pc = 0x172CD4u;
    // 0x172cd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cd8: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172cdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172ce4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172ce8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172cec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172cf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172CF0u;
    {
        const bool branch_taken_0x172cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CF0u;
        // 0x172cf4: 0x245102c0  addiu       $s1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cf0) {
            ctx->pc = 0x172D18u;
            return;
        }
    }
    ctx->pc = 0x172CF8u;
}
