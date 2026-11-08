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

// Function: entry_0011e730
// Address: 0x11e730 - 0x11e760
void entry_0011e730_0x11e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e730_0x11e730");
#endif

    switch (ctx->pc) {
        case 0x11e74cu: goto label_11e74c;
        default: break;
    }

    ctx->pc = 0x11e730u;

    // 0x11e730: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x11E730u;
    {
        const bool branch_taken_0x11e730 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E730u;
        // 0x11e734: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e730) {
            ctx->pc = 0x11E760u;
            return;
        }
    }
    ctx->pc = 0x11E738u;
    // 0x11e738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e73c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x11e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11e740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11e740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e744: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11E744u;
    SET_GPR_U32(ctx, 31, 0x11E74Cu);
    ctx->pc = 0x11E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E744u;
    // 0x11e748: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11E744u, 0x11E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E74Cu;
label_11e74c:
    // 0x11e74c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e750: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x11e750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x11e754: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11E754u;
    {
        const bool branch_taken_0x11e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E754u;
        // 0x11e758: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e754) {
            ctx->pc = 0x11E77Cu;
            return;
        }
    }
    ctx->pc = 0x11E75Cu;
    // 0x11e75c: 0x0  nop
    ctx->pc = 0x11e75cu;
    // NOP
    ctx->pc = 0x11e760u;
}
