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

// Function: entry_00164af8
// Address: 0x164af8 - 0x164b2c
void entry_00164af8_0x164af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164af8_0x164af8");
#endif

    ctx->pc = 0x164af8u;

label_164af8:
    // 0x164af8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_164afc:
    // 0x164afc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_164b00:
    if (ctx->pc == 0x164B00u) {
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B04u;
        goto label_164b04;
    }
    ctx->pc = 0x164AFCu;
    {
        const bool branch_taken_0x164afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164afc) {
            ctx->pc = 0x164B2Cu;
            return;
        }
    }
    ctx->pc = 0x164B04u;
label_164b04:
    // 0x164b04: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x164b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_164b08:
    // 0x164b08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x164b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164b0c:
    // 0x164b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_164b10:
    // 0x164b10: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x164b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_164b14:
    // 0x164b14: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x164b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_164b18:
    // 0x164b18: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x164b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_164b1c:
    // 0x164b1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_164b20:
    // 0x164b20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_164b24:
    // 0x164b24: 0x60f809  jalr        $v1
label_164b28:
    if (ctx->pc == 0x164B28u) {
        ctx->pc = 0x164B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B24u;
        // 0x164b28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B2Cu;
        goto label_fallthrough_0x164b24;
    }
    ctx->pc = 0x164B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164B2Cu);
        ctx->pc = 0x164B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B24u;
        // 0x164b28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B24u, 0x164B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x164b24:
    ctx->pc = 0x164B2Cu;
}
