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

// Function: entry_0015bafc
// Address: 0x15bafc - 0x15bb30
void entry_0015bafc_0x15bafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bafc_0x15bafc");
#endif

    ctx->pc = 0x15bafcu;

label_15bafc:
    // 0x15bafc: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
label_15bb00:
    if (ctx->pc == 0x15BB00u) {
        ctx->pc = 0x15BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAFCu;
        // 0x15bb00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB04u;
        goto label_15bb04;
    }
    ctx->pc = 0x15BAFCu;
    {
        const bool branch_taken_0x15bafc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAFCu;
        // 0x15bb00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bafc) {
            ctx->pc = 0x15BBA8u;
            return;
        }
    }
    ctx->pc = 0x15BB04u;
label_15bb04:
    // 0x15bb04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15bb08:
    // 0x15bb08: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15bb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15bb0c:
    // 0x15bb0c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15bb10:
    // 0x15bb10: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bb14:
    if (ctx->pc == 0x15BB14u) {
        ctx->pc = 0x15BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB10u;
        // 0x15bb14: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB18u;
        goto label_15bb18;
    }
    ctx->pc = 0x15BB10u;
    {
        const bool branch_taken_0x15bb10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB10u;
        // 0x15bb14: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb10) {
            ctx->pc = 0x15BB30u;
            return;
        }
    }
    ctx->pc = 0x15BB18u;
label_15bb18:
    // 0x15bb18: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bb1c:
    // 0x15bb1c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bb20:
    // 0x15bb20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bb24:
    // 0x15bb24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bb28:
    // 0x15bb28: 0x60f809  jalr        $v1
label_15bb2c:
    if (ctx->pc == 0x15BB2Cu) {
        ctx->pc = 0x15BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB28u;
        // 0x15bb2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB30u;
        goto label_fallthrough_0x15bb28;
    }
    ctx->pc = 0x15BB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB30u);
        ctx->pc = 0x15BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB28u;
        // 0x15bb2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB28u, 0x15BB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15bb28:
    ctx->pc = 0x15BB30u;
}
