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

// Function: entry_001b0d08
// Address: 0x1b0d08 - 0x1b0d48
void entry_001b0d08_0x1b0d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0d08_0x1b0d08");
#endif

    switch (ctx->pc) {
        case 0x1b0d08u: goto label_1b0d08;
        case 0x1b0d0cu: goto label_1b0d0c;
        case 0x1b0d10u: goto label_1b0d10;
        case 0x1b0d14u: goto label_1b0d14;
        case 0x1b0d18u: goto label_1b0d18;
        case 0x1b0d1cu: goto label_1b0d1c;
        case 0x1b0d20u: goto label_1b0d20;
        case 0x1b0d24u: goto label_1b0d24;
        case 0x1b0d28u: goto label_1b0d28;
        case 0x1b0d2cu: goto label_1b0d2c;
        case 0x1b0d30u: goto label_1b0d30;
        case 0x1b0d34u: goto label_1b0d34;
        case 0x1b0d38u: goto label_1b0d38;
        case 0x1b0d3cu: goto label_1b0d3c;
        case 0x1b0d40u: goto label_1b0d40;
        case 0x1b0d44u: goto label_1b0d44;
        default: break;
    }

    ctx->pc = 0x1b0d08u;

label_1b0d08:
    // 0x1b0d08: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1b0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1b0d0c:
    // 0x1b0d0c: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0d10:
    // 0x1b0d10: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1b0d10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1b0d14:
    // 0x1b0d14: 0x40f809  jalr        $v0
label_1b0d18:
    if (ctx->pc == 0x1B0D18u) {
        ctx->pc = 0x1B0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D14u;
        // 0x1b0d18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D1Cu;
        goto label_1b0d1c;
    }
    ctx->pc = 0x1B0D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0D1Cu);
        ctx->pc = 0x1B0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D14u;
        // 0x1b0d18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0D14u, 0x1B0D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0D1Cu;
label_1b0d1c:
    // 0x1b0d1c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0d1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0d20:
    // 0x1b0d20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b0d24:
    if (ctx->pc == 0x1B0D24u) {
        ctx->pc = 0x1B0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D20u;
        // 0x1b0d24: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D28u;
        goto label_1b0d28;
    }
    ctx->pc = 0x1B0D20u;
    {
        const bool branch_taken_0x1b0d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D20u;
        // 0x1b0d24: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d20) {
            ctx->pc = 0x1B0D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0d08;
        }
    }
    ctx->pc = 0x1B0D28u;
label_1b0d28:
    // 0x1b0d28: 0x10000085  b           . + 4 + (0x85 << 2)
label_1b0d2c:
    if (ctx->pc == 0x1B0D2Cu) {
        ctx->pc = 0x1B0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D28u;
        // 0x1b0d2c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D30u;
        goto label_1b0d30;
    }
    ctx->pc = 0x1B0D28u;
    {
        const bool branch_taken_0x1b0d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D28u;
        // 0x1b0d2c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d28) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
    ctx->pc = 0x1B0D30u;
label_1b0d30:
    // 0x1b0d30: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1b0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1b0d34:
    // 0x1b0d34: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1b0d38:
    if (ctx->pc == 0x1B0D38u) {
        ctx->pc = 0x1B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D34u;
        // 0x1b0d38: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D3Cu;
        goto label_1b0d3c;
    }
    ctx->pc = 0x1B0D34u;
    {
        const bool branch_taken_0x1b0d34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D34u;
        // 0x1b0d38: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d34) {
            ctx->pc = 0x1B0D48u;
            return;
        }
    }
    ctx->pc = 0x1B0D3Cu;
label_1b0d3c:
    // 0x1b0d3c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1b0d3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1b0d40:
    // 0x1b0d40: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b0d44:
    if (ctx->pc == 0x1B0D44u) {
        ctx->pc = 0x1B0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D40u;
        // 0x1b0d44: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D48u;
        goto label_fallthrough_0x1b0d40;
    }
    ctx->pc = 0x1B0D40u;
    {
        const bool branch_taken_0x1b0d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D40u;
        // 0x1b0d44: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d40) {
            ctx->pc = 0x1B0D5Cu;
            return;
        }
    }
label_fallthrough_0x1b0d40:
    ctx->pc = 0x1B0D48u;
}
