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

// Function: entry_001c5a24
// Address: 0x1c5a24 - 0x1c5a94
void entry_001c5a24_0x1c5a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a24_0x1c5a24");
#endif

    switch (ctx->pc) {
        case 0x1c5a4cu: goto label_1c5a4c;
        case 0x1c5a7cu: goto label_1c5a7c;
        default: break;
    }

    ctx->pc = 0x1c5a24u;

    // 0x1c5a24: 0x2490f340  addiu       $s0, $a0, -0xCC0
    ctx->pc = 0x1c5a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964032));
    // 0x1c5a28: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5a2c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1c5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1c5a30: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1c5a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1c5a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a38: 0xac53ee68  sw          $s3, -0x1198($v0)
    ctx->pc = 0x1c5a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x40EE68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40EE68u, _value); } while (0);
    // 0x1c5a3c: 0xac74ee6c  sw          $s4, -0x1194($v1)
    ctx->pc = 0x1c5a3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x40EE6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40EE6Cu, _value); } while (0);
    // 0x1c5a40: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1c5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1c5a44: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1C5A44u;
    SET_GPR_U32(ctx, 31, 0x1C5A4Cu);
    ctx->pc = 0x1C5A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A44u;
    // 0x1c5a48: 0xacd5ee70  sw          $s5, -0x1190($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294962800), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1C5A44u, 0x1C5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A4Cu;
label_1c5a4c:
    // 0x1c5a4c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c5a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c5a50: 0x3c0b001c  lui         $t3, 0x1C
    ctx->pc = 0x1c5a50u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28 << 16));
    // 0x1c5a54: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1c5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1c5a58: 0x26c4ee40  addiu       $a0, $s6, -0x11C0
    ctx->pc = 0x1c5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962752));
    // 0x1c5a5c: 0x2627eec0  addiu       $a3, $s1, -0x1140
    ctx->pc = 0x1c5a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962880));
    // 0x1c5a60: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c5a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c5a64: 0x256b58f8  addiu       $t3, $t3, 0x58F8
    ctx->pc = 0x1c5a64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 22776));
    // 0x1c5a68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c5a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5a6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5a70: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c5a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c5a74: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5A74u;
    SET_GPR_U32(ctx, 31, 0x1C5A7Cu);
    ctx->pc = 0x1C5A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A74u;
    // 0x1c5a78: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5A74u, 0x1C5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A7Cu;
label_1c5a7c:
    // 0x1c5a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a80: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5A80u;
    {
        const bool branch_taken_0x1c5a80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A80u;
        // 0x1c5a84: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a80) {
            ctx->pc = 0x1C5A94u;
            return;
        }
    }
    ctx->pc = 0x1C5A88u;
    // 0x1c5a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5a8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5A8Cu;
    {
        const bool branch_taken_0x1c5a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A8Cu;
        // 0x1c5a90: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a8c) {
            ctx->pc = 0x1C5A9Cu;
            return;
        }
    }
    ctx->pc = 0x1C5A94u;
}
