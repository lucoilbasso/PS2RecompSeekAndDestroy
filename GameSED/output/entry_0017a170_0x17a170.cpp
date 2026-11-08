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

// Function: entry_0017a170
// Address: 0x17a170 - 0x17a19c
void entry_0017a170_0x17a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a170_0x17a170");
#endif

    switch (ctx->pc) {
        case 0x17a17cu: goto label_17a17c;
        case 0x17a198u: goto label_17a198;
        default: break;
    }

    ctx->pc = 0x17a170u;

    // 0x17a170: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17a170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a174: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x17A174u;
    SET_GPR_U32(ctx, 31, 0x17A17Cu);
    ctx->pc = 0x17A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A174u;
    // 0x17a178: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x17A174u, 0x17A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A17Cu;
label_17a17c:
    // 0x17a17c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a180: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17a184: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x17a184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17a188: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A188u;
    {
        const bool branch_taken_0x17a188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a188) {
            ctx->pc = 0x17A18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A188u;
            // 0x17a18c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A19Cu;
            return;
        }
    }
    ctx->pc = 0x17A190u;
    // 0x17a190: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17A190u;
    SET_GPR_U32(ctx, 31, 0x17A198u);
    ctx->pc = 0x17A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A190u;
    // 0x17a194: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17A190u, 0x17A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A198u;
label_17a198:
    // 0x17a198: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x17a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17a19cu;
}
