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

// Function: entry_0010f038
// Address: 0x10f038 - 0x10f098
void entry_0010f038_0x10f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f038_0x10f038");
#endif

    switch (ctx->pc) {
        case 0x10f054u: goto label_10f054;
        case 0x10f060u: goto label_10f060;
        case 0x10f070u: goto label_10f070;
        default: break;
    }

    ctx->pc = 0x10f038u;

    // 0x10f038: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10f03c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x10f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x10f040: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10f044: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x10f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x10f048: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10f04c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10F04Cu;
    SET_GPR_U32(ctx, 31, 0x10F054u);
    ctx->pc = 0x10F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F04Cu;
    // 0x10f050: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10F04Cu, 0x10F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F054u;
label_10f054:
    // 0x10f054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f058: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10F058u;
    SET_GPR_U32(ctx, 31, 0x10F060u);
    ctx->pc = 0x10F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F058u;
    // 0x10f05c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10F058u, 0x10F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F060u;
label_10f060:
    // 0x10f060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f064: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10f064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f068: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10F068u;
    SET_GPR_U32(ctx, 31, 0x10F070u);
    ctx->pc = 0x10F06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F068u;
    // 0x10f06c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10F068u, 0x10F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F070u;
label_10f070:
    // 0x10f070: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x10f070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10f074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f078: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x10f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x10f07c: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10F07Cu;
    {
        const bool branch_taken_0x10f07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f07c) {
            ctx->pc = 0x10F080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F07Cu;
            // 0x10f080: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F130u;
            return;
        }
    }
    ctx->pc = 0x10F084u;
    // 0x10f084: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F084u;
    {
        const bool branch_taken_0x10f084 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F084u;
        // 0x10f088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f084) {
            ctx->pc = 0x10F098u;
            return;
        }
    }
    ctx->pc = 0x10F08Cu;
    // 0x10f08c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10F08Cu;
    {
        const bool branch_taken_0x10f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F08Cu;
        // 0x10f090: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f08c) {
            ctx->pc = 0x10F0D4u;
            return;
        }
    }
    ctx->pc = 0x10F094u;
    // 0x10f094: 0x0  nop
    ctx->pc = 0x10f094u;
    // NOP
    ctx->pc = 0x10f098u;
}
