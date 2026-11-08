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

// Function: entry_001da2dc
// Address: 0x1da2dc - 0x1da324
void entry_001da2dc_0x1da2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da2dc_0x1da2dc");
#endif

    ctx->pc = 0x1da2dcu;

label_1da2dc:
    // 0x1da2dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1da2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1da2e0:
    // 0x1da2e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1da2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1da2e4:
    // 0x1da2e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1da2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1da2e8:
    // 0x1da2e8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1da2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1da2ec:
    // 0x1da2ec: 0x8e460164  lw          $a2, 0x164($s2)
    ctx->pc = 0x1da2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_1da2f0:
    // 0x1da2f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1da2f4:
    // 0x1da2f4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1da2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1da2f8:
    // 0x1da2f8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1da2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1da2fc:
    // 0x1da2fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1da2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1da300:
    // 0x1da300: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1da304:
    if (ctx->pc == 0x1DA304u) {
        ctx->pc = 0x1DA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA300u;
        // 0x1da304: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA308u;
        goto label_1da308;
    }
    ctx->pc = 0x1DA300u;
    {
        const bool branch_taken_0x1da300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA300u;
        // 0x1da304: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da300) {
            ctx->pc = 0x1DA324u;
            return;
        }
    }
    ctx->pc = 0x1DA308u;
label_1da308:
    // 0x1da308: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da30c:
    // 0x1da30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da310:
    // 0x1da310: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da314:
    // 0x1da314: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da318:
    // 0x1da318: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da31c:
    // 0x1da31c: 0x60f809  jalr        $v1
label_1da320:
    if (ctx->pc == 0x1DA320u) {
        ctx->pc = 0x1DA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA31Cu;
        // 0x1da320: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA324u;
        goto label_fallthrough_0x1da31c;
    }
    ctx->pc = 0x1DA31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA324u);
        ctx->pc = 0x1DA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA31Cu;
        // 0x1da320: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA31Cu, 0x1DA324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da31c:
    ctx->pc = 0x1DA324u;
}
