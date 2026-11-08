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

// Function: entry_0010314c
// Address: 0x10314c - 0x1031a8
void entry_0010314c_0x10314c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010314c_0x10314c");
#endif

    switch (ctx->pc) {
        case 0x103154u: goto label_103154;
        case 0x103160u: goto label_103160;
        case 0x103180u: goto label_103180;
        case 0x103188u: goto label_103188;
        case 0x1031a0u: goto label_1031a0;
        default: break;
    }

    ctx->pc = 0x10314cu;

    // 0x10314c: 0xc0463ea  jal         func_118FA8
    ctx->pc = 0x10314Cu;
    SET_GPR_U32(ctx, 31, 0x103154u);
    ctx->pc = 0x103150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10314Cu;
    // 0x103150: 0x327100ff  andi        $s1, $s3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FA8u, 0x10314Cu, 0x103154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103154u;
label_103154:
    // 0x103154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103158: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x103158u;
    SET_GPR_U32(ctx, 31, 0x103160u);
    ctx->pc = 0x10315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103158u;
    // 0x10315c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x103158u, 0x103160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103160u;
label_103160:
    // 0x103160: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x103160u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x103164: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x103164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103168: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x103168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x10316c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103170: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x103170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x103174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103178: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x103178u;
    SET_GPR_U32(ctx, 31, 0x103180u);
    ctx->pc = 0x10317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103178u;
    // 0x10317c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x103178u, 0x103180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103180u;
label_103180:
    // 0x103180: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x103180u;
    SET_GPR_U32(ctx, 31, 0x103188u);
    ctx->pc = 0x103184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103180u;
    // 0x103184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x103180u, 0x103188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103188u;
label_103188:
    // 0x103188: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x103188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10318c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10318cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103190: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103194: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x103194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103198: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x103198u;
    SET_GPR_U32(ctx, 31, 0x1031A0u);
    ctx->pc = 0x10319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103198u;
    // 0x10319c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x103198u, 0x1031A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031A0u;
label_1031a0:
    // 0x1031a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1031A0u;
    {
        const bool branch_taken_0x1031a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031A0u;
        // 0x1031a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031a0) {
            ctx->pc = 0x103200u;
            return;
        }
    }
    ctx->pc = 0x1031A8u;
}
