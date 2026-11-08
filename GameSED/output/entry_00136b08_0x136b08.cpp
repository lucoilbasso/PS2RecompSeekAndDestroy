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

// Function: entry_00136b08
// Address: 0x136b08 - 0x136b40
void entry_00136b08_0x136b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b08_0x136b08");
#endif

    switch (ctx->pc) {
        case 0x136b1cu: goto label_136b1c;
        default: break;
    }

    ctx->pc = 0x136b08u;

label_136b08:
    // 0x136b08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_136b0c:
    if (ctx->pc == 0x136B0Cu) {
        ctx->pc = 0x136B10u;
        goto label_136b10;
    }
    ctx->pc = 0x136B08u;
    {
        const bool branch_taken_0x136b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b08) {
            ctx->pc = 0x136B40u;
            return;
        }
    }
    ctx->pc = 0x136B10u;
label_136b10:
    // 0x136b10: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x136b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_136b14:
    // 0x136b14: 0xc0684de  jal         func_1A1378
label_136b18:
    if (ctx->pc == 0x136B18u) {
        ctx->pc = 0x136B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B14u;
        // 0x136b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B1Cu;
        goto label_136b1c;
    }
    ctx->pc = 0x136B14u;
    SET_GPR_U32(ctx, 31, 0x136B1Cu);
    ctx->pc = 0x136B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B14u;
    // 0x136b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x136B14u, 0x136B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B1Cu;
label_136b1c:
    // 0x136b1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_136b20:
    if (ctx->pc == 0x136B20u) {
        ctx->pc = 0x136B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B1Cu;
        // 0x136b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B24u;
        goto label_136b24;
    }
    ctx->pc = 0x136B1Cu;
    {
        const bool branch_taken_0x136b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B1Cu;
        // 0x136b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b1c) {
            ctx->pc = 0x136B40u;
            return;
        }
    }
    ctx->pc = 0x136B24u;
label_136b24:
    // 0x136b24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x136b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_136b28:
    // 0x136b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136b2c:
    // 0x136b2c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x136b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_136b30:
    // 0x136b30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_136b34:
    // 0x136b34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x136b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136b38:
    // 0x136b38: 0x60f809  jalr        $v1
label_136b3c:
    if (ctx->pc == 0x136B3Cu) {
        ctx->pc = 0x136B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B38u;
        // 0x136b3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B40u;
        goto label_fallthrough_0x136b38;
    }
    ctx->pc = 0x136B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136B40u);
        ctx->pc = 0x136B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B38u;
        // 0x136b3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B38u, 0x136B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x136b38:
    ctx->pc = 0x136B40u;
}
