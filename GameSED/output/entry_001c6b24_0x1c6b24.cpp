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

// Function: entry_001c6b24
// Address: 0x1c6b24 - 0x1c6b80
void entry_001c6b24_0x1c6b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6b24_0x1c6b24");
#endif

    switch (ctx->pc) {
        case 0x1c6b38u: goto label_1c6b38;
        case 0x1c6b48u: goto label_1c6b48;
        case 0x1c6b6cu: goto label_1c6b6c;
        default: break;
    }

    ctx->pc = 0x1c6b24u;

    // 0x1c6b24: 0xde950000  ld          $s5, 0x0($s4)
    ctx->pc = 0x1c6b24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c6b28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b30: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B30u;
    SET_GPR_U32(ctx, 31, 0x1C6B38u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B30u, 0x1C6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B38u;
label_1c6b38:
    // 0x1c6b38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b40: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B40u;
    SET_GPR_U32(ctx, 31, 0x1C6B48u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B40u, 0x1C6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B48u;
label_1c6b48:
    // 0x1c6b48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b4c: 0xfe910008  sd          $s1, 0x8($s4)
    ctx->pc = 0x1c6b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 17));
    // 0x1c6b50: 0x7c10055  bgez        $fp, . + 4 + (0x55 << 2)
    ctx->pc = 0x1C6B50u;
    {
        const bool branch_taken_0x1c6b50 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1C6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B50u;
        // 0x1c6b54: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b50) {
            ctx->pc = 0x1C6CA8u;
            return;
        }
    }
    ctx->pc = 0x1C6B58u;
    // 0x1c6b58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c6b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b64: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B64u;
    SET_GPR_U32(ctx, 31, 0x1C6B6Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B64u, 0x1C6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B6Cu;
label_1c6b6c:
    // 0x1c6b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b70: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c6b70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c6b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b78: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C6B78u;
    {
        const bool branch_taken_0x1c6b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b78) {
            ctx->pc = 0x1C6C98u;
            return;
        }
    }
    ctx->pc = 0x1C6B80u;
}
