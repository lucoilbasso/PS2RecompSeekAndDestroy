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

// Function: entry_001565c0
// Address: 0x1565c0 - 0x1565fc
void entry_001565c0_0x1565c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001565c0_0x1565c0");
#endif

    ctx->pc = 0x1565c0u;

label_1565c0:
    // 0x1565c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1565c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1565c4:
    // 0x1565c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1565c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1565c8:
    // 0x1565c8: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_1565cc:
    if (ctx->pc == 0x1565CCu) {
        ctx->pc = 0x1565CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565C8u;
        // 0x1565cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565D0u;
        goto label_1565d0;
    }
    ctx->pc = 0x1565C8u;
    {
        const bool branch_taken_0x1565c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1565c8) {
            ctx->pc = 0x1565CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1565C8u;
            // 0x1565cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156600u;
            return;
        }
    }
    ctx->pc = 0x1565D0u;
label_1565d0:
    // 0x1565d0: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x1565d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_1565d4:
    // 0x1565d4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1565d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1565d8:
    // 0x1565d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1565dc:
    if (ctx->pc == 0x1565DCu) {
        ctx->pc = 0x1565DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565D8u;
        // 0x1565dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565E0u;
        goto label_1565e0;
    }
    ctx->pc = 0x1565D8u;
    {
        const bool branch_taken_0x1565d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1565d8) {
            ctx->pc = 0x1565DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1565D8u;
            // 0x1565dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156600u;
            return;
        }
    }
    ctx->pc = 0x1565E0u;
label_1565e0:
    // 0x1565e0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1565e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1565e4:
    // 0x1565e4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1565e8:
    // 0x1565e8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1565ec:
    // 0x1565ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1565ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1565f0:
    // 0x1565f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1565f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1565f4:
    // 0x1565f4: 0x60f809  jalr        $v1
label_1565f8:
    if (ctx->pc == 0x1565F8u) {
        ctx->pc = 0x1565F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565F4u;
        // 0x1565f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565FCu;
        goto label_fallthrough_0x1565f4;
    }
    ctx->pc = 0x1565F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1565FCu);
        ctx->pc = 0x1565F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565F4u;
        // 0x1565f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1565F4u, 0x1565FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1565f4:
    ctx->pc = 0x1565FCu;
}
