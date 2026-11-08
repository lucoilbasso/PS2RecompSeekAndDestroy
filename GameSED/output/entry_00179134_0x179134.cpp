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

// Function: entry_00179134
// Address: 0x179134 - 0x179184
void entry_00179134_0x179134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179134_0x179134");
#endif

    switch (ctx->pc) {
        case 0x179144u: goto label_179144;
        case 0x179158u: goto label_179158;
        case 0x17917cu: goto label_17917c;
        default: break;
    }

    ctx->pc = 0x179134u;

    // 0x179134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179138: 0x2685d550  addiu       $a1, $s4, -0x2AB0
    ctx->pc = 0x179138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956368));
    // 0x17913c: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x17913Cu;
    SET_GPR_U32(ctx, 31, 0x179144u);
    ctx->pc = 0x179140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17913Cu;
    // 0x179140: 0x26460540  addiu       $a2, $s2, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x17913Cu, 0x179144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179144u;
label_179144:
    // 0x179144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179148: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x179148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17914c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17914cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179150: 0xc05e624  jal         func_179890
    ctx->pc = 0x179150u;
    SET_GPR_U32(ctx, 31, 0x179158u);
    ctx->pc = 0x179154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179150u;
    // 0x179154: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179890u, 0x179150u, 0x179158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179158u;
label_179158:
    // 0x179158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17915c: 0x6000019  bltz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17915Cu;
    {
        const bool branch_taken_0x17915c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x17915c) {
            ctx->pc = 0x1791C4u;
            return;
        }
    }
    ctx->pc = 0x179164u;
    // 0x179164: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x179164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x179168: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x179168u;
    {
        const bool branch_taken_0x179168 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179168u;
        // 0x17916c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179168) {
            ctx->pc = 0x179184u;
            return;
        }
    }
    ctx->pc = 0x179170u;
    // 0x179170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179174: 0xc05e650  jal         func_179940
    ctx->pc = 0x179174u;
    SET_GPR_U32(ctx, 31, 0x17917Cu);
    ctx->pc = 0x179178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179174u;
    // 0x179178: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179940u, 0x179174u, 0x17917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17917Cu;
label_17917c:
    // 0x17917c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17917Cu;
    {
        const bool branch_taken_0x17917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17917c) {
            ctx->pc = 0x1791C4u;
            return;
        }
    }
    ctx->pc = 0x179184u;
}
