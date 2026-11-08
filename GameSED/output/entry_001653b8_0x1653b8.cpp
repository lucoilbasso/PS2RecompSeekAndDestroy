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

// Function: entry_001653b8
// Address: 0x1653b8 - 0x1653fc
void entry_001653b8_0x1653b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001653b8_0x1653b8");
#endif

    switch (ctx->pc) {
        case 0x1653e0u: goto label_1653e0;
        case 0x1653f8u: goto label_1653f8;
        default: break;
    }

    ctx->pc = 0x1653b8u;

label_1653b8:
    // 0x1653b8: 0x8e021240  lw          $v0, 0x1240($s0)
    ctx->pc = 0x1653b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
label_1653bc:
    // 0x1653bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1653bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1653c0:
    // 0x1653c0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1653c4:
    // 0x1653c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1653c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1653c8:
    // 0x1653c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1653c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1653cc:
    // 0x1653cc: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1653ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1653d0:
    // 0x1653d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1653d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1653d4:
    // 0x1653d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1653d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1653d8:
    // 0x1653d8: 0x60f809  jalr        $v1
label_1653dc:
    if (ctx->pc == 0x1653DCu) {
        ctx->pc = 0x1653DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653D8u;
        // 0x1653dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653E0u;
        goto label_1653e0;
    }
    ctx->pc = 0x1653D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1653E0u);
        ctx->pc = 0x1653DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653D8u;
        // 0x1653dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1653D8u, 0x1653E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1653E0u;
label_1653e0:
    // 0x1653e0: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x1653e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
label_1653e4:
    // 0x1653e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1653e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1653e8:
    // 0x1653e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1653e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1653ec:
    // 0x1653ec: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1653ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1653f0:
    // 0x1653f0: 0xc0618da  jal         func_186368
label_1653f4:
    if (ctx->pc == 0x1653F4u) {
        ctx->pc = 0x1653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653F0u;
        // 0x1653f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653F8u;
        goto label_1653f8;
    }
    ctx->pc = 0x1653F0u;
    SET_GPR_U32(ctx, 31, 0x1653F8u);
    ctx->pc = 0x1653F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653F0u;
    // 0x1653f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1653F0u, 0x1653F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653F8u;
label_1653f8:
    // 0x1653f8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1653f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1653fcu;
}
