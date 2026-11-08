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

// Function: entry_00136a20
// Address: 0x136a20 - 0x136a70
void entry_00136a20_0x136a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136a20_0x136a20");
#endif

    switch (ctx->pc) {
        case 0x136a3cu: goto label_136a3c;
        case 0x136a64u: goto label_136a64;
        default: break;
    }

    ctx->pc = 0x136a20u;

label_136a20:
    // 0x136a20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x136a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_136a24:
    // 0x136a24: 0xae120144  sw          $s2, 0x144($s0)
    ctx->pc = 0x136a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 18));
label_136a28:
    // 0x136a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_136a2c:
    // 0x136a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136a30:
    // 0x136a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136a34:
    // 0x136a34: 0xc0684ee  jal         func_1A13B8
label_136a38:
    if (ctx->pc == 0x136A38u) {
        ctx->pc = 0x136A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A34u;
        // 0x136a38: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A3Cu;
        goto label_136a3c;
    }
    ctx->pc = 0x136A34u;
    SET_GPR_U32(ctx, 31, 0x136A3Cu);
    ctx->pc = 0x136A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A34u;
    // 0x136a38: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13B8u, 0x136A34u, 0x136A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A3Cu;
label_136a3c:
    // 0x136a3c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_136a40:
    if (ctx->pc == 0x136A40u) {
        ctx->pc = 0x136A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A3Cu;
        // 0x136a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A44u;
        goto label_136a44;
    }
    ctx->pc = 0x136A3Cu;
    {
        const bool branch_taken_0x136a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a3c) {
            ctx->pc = 0x136A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136A3Cu;
            // 0x136a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136A80u;
            return;
        }
    }
    ctx->pc = 0x136A44u;
label_136a44:
    // 0x136a44: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x136a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_136a48:
    // 0x136a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136a4c:
    // 0x136a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136a50:
    // 0x136a50: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x136a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_136a54:
    // 0x136a54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_136a58:
    // 0x136a58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x136a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136a5c:
    // 0x136a5c: 0x60f809  jalr        $v1
label_136a60:
    if (ctx->pc == 0x136A60u) {
        ctx->pc = 0x136A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A5Cu;
        // 0x136a60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A64u;
        goto label_136a64;
    }
    ctx->pc = 0x136A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136A64u);
        ctx->pc = 0x136A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A5Cu;
        // 0x136a60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A5Cu, 0x136A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136A64u;
label_136a64:
    // 0x136a64: 0x10000006  b           . + 4 + (0x6 << 2)
label_136a68:
    if (ctx->pc == 0x136A68u) {
        ctx->pc = 0x136A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A64u;
        // 0x136a68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A6Cu;
        goto label_136a6c;
    }
    ctx->pc = 0x136A64u;
    {
        const bool branch_taken_0x136a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A64u;
        // 0x136a68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a64) {
            ctx->pc = 0x136A80u;
            return;
        }
    }
    ctx->pc = 0x136A6Cu;
label_136a6c:
    // 0x136a6c: 0x0  nop
    ctx->pc = 0x136a6cu;
    // NOP
    ctx->pc = 0x136a70u;
}
