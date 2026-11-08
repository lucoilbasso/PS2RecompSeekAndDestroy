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

// Function: entry_00156714
// Address: 0x156714 - 0x156750
void entry_00156714_0x156714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156714_0x156714");
#endif

    switch (ctx->pc) {
        case 0x156724u: goto label_156724;
        case 0x156744u: goto label_156744;
        default: break;
    }

    ctx->pc = 0x156714u;

    // 0x156714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156718: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15671c: 0xc05dfc4  jal         func_177F10
    ctx->pc = 0x15671Cu;
    SET_GPR_U32(ctx, 31, 0x156724u);
    ctx->pc = 0x156720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15671Cu;
    // 0x156720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x15671Cu, 0x156724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156724u;
label_156724:
    // 0x156724: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x156724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x156728: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x156728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15672c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15672Cu;
    {
        const bool branch_taken_0x15672c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15672Cu;
        // 0x156730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15672c) {
            ctx->pc = 0x156750u;
            return;
        }
    }
    ctx->pc = 0x156734u;
    // 0x156734: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156738: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x156738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15673c: 0xc05dfc4  jal         func_177F10
    ctx->pc = 0x15673Cu;
    SET_GPR_U32(ctx, 31, 0x156744u);
    ctx->pc = 0x156740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15673Cu;
    // 0x156740: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x15673Cu, 0x156744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156744u;
label_156744:
    // 0x156744: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156744u;
    {
        const bool branch_taken_0x156744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156744u;
        // 0x156748: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156744) {
            ctx->pc = 0x156764u;
            return;
        }
    }
    ctx->pc = 0x15674Cu;
    // 0x15674c: 0x0  nop
    ctx->pc = 0x15674cu;
    // NOP
    ctx->pc = 0x156750u;
}
