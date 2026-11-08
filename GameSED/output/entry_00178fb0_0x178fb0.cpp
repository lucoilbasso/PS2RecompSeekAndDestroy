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

// Function: entry_00178fb0
// Address: 0x178fb0 - 0x17900c
void entry_00178fb0_0x178fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178fb0_0x178fb0");
#endif

    switch (ctx->pc) {
        case 0x178fc8u: goto label_178fc8;
        case 0x178fdcu: goto label_178fdc;
        case 0x179004u: goto label_179004;
        default: break;
    }

    ctx->pc = 0x178fb0u;

    // 0x178fb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x178FB0u;
    {
        const bool branch_taken_0x178fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FB0u;
        // 0x178fb4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fb0) {
            ctx->pc = 0x17900Cu;
            return;
        }
    }
    ctx->pc = 0x178FB8u;
    // 0x178fb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x178fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fbc: 0x2685d550  addiu       $a1, $s4, -0x2AB0
    ctx->pc = 0x178fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956368));
    // 0x178fc0: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x178FC0u;
    SET_GPR_U32(ctx, 31, 0x178FC8u);
    ctx->pc = 0x178FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178FC0u;
    // 0x178fc4: 0x26060540  addiu       $a2, $s0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x178FC0u, 0x178FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FC8u;
label_178fc8:
    // 0x178fc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x178fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fd4: 0xc05e624  jal         func_179890
    ctx->pc = 0x178FD4u;
    SET_GPR_U32(ctx, 31, 0x178FDCu);
    ctx->pc = 0x178FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178FD4u;
    // 0x178fd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179890u, 0x178FD4u, 0x178FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FDCu;
label_178fdc:
    // 0x178fdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fe8: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x178FE8u;
    {
        const bool branch_taken_0x178fe8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x178FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FE8u;
        // 0x178fec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fe8) {
            ctx->pc = 0x17900Cu;
            return;
        }
    }
    ctx->pc = 0x178FF0u;
    // 0x178ff0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x178ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x178ff4: 0x50e0ffe1  beql        $a3, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x178FF4u;
    {
        const bool branch_taken_0x178ff4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x178ff4) {
            ctx->pc = 0x178FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178FF4u;
            // 0x178ff8: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178F7Cu;
            return;
        }
    }
    ctx->pc = 0x178FFCu;
    // 0x178ffc: 0xc05e650  jal         func_179940
    ctx->pc = 0x178FFCu;
    SET_GPR_U32(ctx, 31, 0x179004u);
    ctx->pc = 0x179940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179940u, 0x178FFCu, 0x179004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179004u;
label_179004:
    // 0x179004: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x179004u;
    {
        const bool branch_taken_0x179004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179004) {
            ctx->pc = 0x179008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179004u;
            // 0x179008: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178F78u;
            return;
        }
    }
    ctx->pc = 0x17900Cu;
}
