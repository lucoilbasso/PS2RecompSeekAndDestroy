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

// Function: entry_0015a7a4
// Address: 0x15a7a4 - 0x15a7ec
void entry_0015a7a4_0x15a7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a7a4_0x15a7a4");
#endif

    ctx->pc = 0x15a7a4u;

label_15a7a4:
    // 0x15a7a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_15a7a8:
    // 0x15a7a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15a7ac:
    // 0x15a7ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15a7b0:
    // 0x15a7b0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_15a7b4:
    // 0x15a7b4: 0x8e660164  lw          $a2, 0x164($s3)
    ctx->pc = 0x15a7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_15a7b8:
    // 0x15a7b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_15a7bc:
    // 0x15a7bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15a7c0:
    // 0x15a7c0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_15a7c4:
    // 0x15a7c4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_15a7c8:
    // 0x15a7c8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15a7cc:
    if (ctx->pc == 0x15A7CCu) {
        ctx->pc = 0x15A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7C8u;
        // 0x15a7cc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7D0u;
        goto label_15a7d0;
    }
    ctx->pc = 0x15A7C8u;
    {
        const bool branch_taken_0x15a7c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7C8u;
        // 0x15a7cc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7c8) {
            ctx->pc = 0x15A7ECu;
            return;
        }
    }
    ctx->pc = 0x15A7D0u;
label_15a7d0:
    // 0x15a7d0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a7d4:
    // 0x15a7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a7d8:
    // 0x15a7d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a7dc:
    // 0x15a7dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a7e0:
    // 0x15a7e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a7e4:
    // 0x15a7e4: 0x60f809  jalr        $v1
label_15a7e8:
    if (ctx->pc == 0x15A7E8u) {
        ctx->pc = 0x15A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7E4u;
        // 0x15a7e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7ECu;
        goto label_fallthrough_0x15a7e4;
    }
    ctx->pc = 0x15A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A7ECu);
        ctx->pc = 0x15A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7E4u;
        // 0x15a7e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A7E4u, 0x15A7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a7e4:
    ctx->pc = 0x15A7ECu;
}
