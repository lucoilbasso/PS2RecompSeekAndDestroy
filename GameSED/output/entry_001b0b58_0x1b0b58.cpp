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

// Function: entry_001b0b58
// Address: 0x1b0b58 - 0x1b0b98
void entry_001b0b58_0x1b0b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0b58_0x1b0b58");
#endif

    switch (ctx->pc) {
        case 0x1b0b58u: goto label_1b0b58;
        case 0x1b0b5cu: goto label_1b0b5c;
        case 0x1b0b60u: goto label_1b0b60;
        case 0x1b0b64u: goto label_1b0b64;
        case 0x1b0b68u: goto label_1b0b68;
        case 0x1b0b6cu: goto label_1b0b6c;
        case 0x1b0b70u: goto label_1b0b70;
        case 0x1b0b74u: goto label_1b0b74;
        case 0x1b0b78u: goto label_1b0b78;
        case 0x1b0b7cu: goto label_1b0b7c;
        case 0x1b0b80u: goto label_1b0b80;
        case 0x1b0b84u: goto label_1b0b84;
        case 0x1b0b88u: goto label_1b0b88;
        case 0x1b0b8cu: goto label_1b0b8c;
        case 0x1b0b90u: goto label_1b0b90;
        case 0x1b0b94u: goto label_1b0b94;
        default: break;
    }

    ctx->pc = 0x1b0b58u;

label_1b0b58:
    // 0x1b0b58: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1b0b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1b0b5c:
    // 0x1b0b5c: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0b60:
    // 0x1b0b60: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1b0b60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1b0b64:
    // 0x1b0b64: 0x40f809  jalr        $v0
label_1b0b68:
    if (ctx->pc == 0x1B0B68u) {
        ctx->pc = 0x1B0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B64u;
        // 0x1b0b68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B6Cu;
        goto label_1b0b6c;
    }
    ctx->pc = 0x1B0B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0B6Cu);
        ctx->pc = 0x1B0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B64u;
        // 0x1b0b68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0B64u, 0x1B0B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0B6Cu;
label_1b0b6c:
    // 0x1b0b6c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0b70:
    // 0x1b0b70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b0b74:
    if (ctx->pc == 0x1B0B74u) {
        ctx->pc = 0x1B0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B70u;
        // 0x1b0b74: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B78u;
        goto label_1b0b78;
    }
    ctx->pc = 0x1B0B70u;
    {
        const bool branch_taken_0x1b0b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B70u;
        // 0x1b0b74: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b70) {
            ctx->pc = 0x1B0B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0b58;
        }
    }
    ctx->pc = 0x1B0B78u;
label_1b0b78:
    // 0x1b0b78: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_1b0b7c:
    if (ctx->pc == 0x1B0B7Cu) {
        ctx->pc = 0x1B0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B78u;
        // 0x1b0b7c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B80u;
        goto label_1b0b80;
    }
    ctx->pc = 0x1B0B78u;
    {
        const bool branch_taken_0x1b0b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B78u;
        // 0x1b0b7c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b78) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
    ctx->pc = 0x1B0B80u;
label_1b0b80:
    // 0x1b0b80: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1b0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1b0b84:
    // 0x1b0b84: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1b0b88:
    if (ctx->pc == 0x1B0B88u) {
        ctx->pc = 0x1B0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B84u;
        // 0x1b0b88: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B8Cu;
        goto label_1b0b8c;
    }
    ctx->pc = 0x1B0B84u;
    {
        const bool branch_taken_0x1b0b84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B84u;
        // 0x1b0b88: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b84) {
            ctx->pc = 0x1B0B98u;
            return;
        }
    }
    ctx->pc = 0x1B0B8Cu;
label_1b0b8c:
    // 0x1b0b8c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1b0b90:
    // 0x1b0b90: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b0b94:
    if (ctx->pc == 0x1B0B94u) {
        ctx->pc = 0x1B0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B90u;
        // 0x1b0b94: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B98u;
        goto label_fallthrough_0x1b0b90;
    }
    ctx->pc = 0x1B0B90u;
    {
        const bool branch_taken_0x1b0b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B90u;
        // 0x1b0b94: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b90) {
            ctx->pc = 0x1B0BACu;
            return;
        }
    }
label_fallthrough_0x1b0b90:
    ctx->pc = 0x1B0B98u;
}
