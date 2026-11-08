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

// Function: entry_00199c38
// Address: 0x199c38 - 0x199c68
void entry_00199c38_0x199c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c38_0x199c38");
#endif

    switch (ctx->pc) {
        case 0x199c5cu: goto label_199c5c;
        default: break;
    }

    ctx->pc = 0x199c38u;

label_199c38:
    // 0x199c38: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x199c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_199c3c:
    // 0x199c3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x199c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_199c40:
    // 0x199c40: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_199c44:
    if (ctx->pc == 0x199C44u) {
        ctx->pc = 0x199C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C40u;
        // 0x199c44: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C48u;
        goto label_199c48;
    }
    ctx->pc = 0x199C40u;
    {
        const bool branch_taken_0x199c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C40u;
        // 0x199c44: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c40) {
            ctx->pc = 0x199C70u;
            return;
        }
    }
    ctx->pc = 0x199C48u;
label_199c48:
    // 0x199c48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_199c4c:
    // 0x199c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_199c50:
    if (ctx->pc == 0x199C50u) {
        ctx->pc = 0x199C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C4Cu;
        // 0x199c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C54u;
        goto label_199c54;
    }
    ctx->pc = 0x199C4Cu;
    {
        const bool branch_taken_0x199c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C4Cu;
        // 0x199c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c4c) {
            ctx->pc = 0x199C68u;
            return;
        }
    }
    ctx->pc = 0x199C54u;
label_199c54:
    // 0x199c54: 0x40f809  jalr        $v0
label_199c58:
    if (ctx->pc == 0x199C58u) {
        ctx->pc = 0x199C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C54u;
        // 0x199c58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C5Cu;
        goto label_199c5c;
    }
    ctx->pc = 0x199C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199C5Cu);
        ctx->pc = 0x199C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C54u;
        // 0x199c58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C54u, 0x199C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199C5Cu;
label_199c5c:
    // 0x199c5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_199c60:
    if (ctx->pc == 0x199C60u) {
        ctx->pc = 0x199C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C5Cu;
        // 0x199c60: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C64u;
        goto label_199c64;
    }
    ctx->pc = 0x199C5Cu;
    {
        const bool branch_taken_0x199c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C5Cu;
        // 0x199c60: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c5c) {
            ctx->pc = 0x199C74u;
            return;
        }
    }
    ctx->pc = 0x199C64u;
label_199c64:
    // 0x199c64: 0x0  nop
    ctx->pc = 0x199c64u;
    // NOP
    ctx->pc = 0x199c68u;
}
